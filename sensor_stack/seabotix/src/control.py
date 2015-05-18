#!/usr/bin/env python

PKG = 'seabotix'

import roslib; roslib.load_manifest(PKG)
import serial
import rospy
from kraken_msgs.msg import thrusterData6Thruster
from kraken_msgs.msg import thrusterData4Thruster
from kraken_msgs.msg import imuData
from resources import topicHeader

import sys

# Yaw must be passed as the first argument to the command

if(len(sys.argv) < 2):

	print "Enter yaw, to run this script."
	exit()

yaw = 0.0
goal = float(sys.argv[1])

base_yaw = 0.0
FIRST_ITERATION = True

Kp_left = -2.5
Kd_left = -5.25
Ki_left = -2.25

Kp_right = 2.5
Kd_right = 5.25
Ki_right = 2.25

# Kp_left = 1.27;
# Kd_left = 0.046;
# Ki_left = 0.00;

# Kp_right = -1.27;
# Kd_right = -0.016;
# Ki_right = -0.00;

errorI = 0.0
errorP = 0.0
errorD = 0.0
prevError = 0.0

def imuCB(dataIn):
	global yaw
	global errorI
	global errorP
	global errorD
	global prevError
	global FIRST_ITERATION
	global base_yaw

	yaw = dataIn.data[2]

	if FIRST_ITERATION:

		base_yaw = yaw
		FIRST_ITERATION = False

	prevError = errorP
	errorP = base_yaw + goal - yaw
	print errorP
	errorI = errorP + prevError
	errorD = errorP - prevError

#thruster6Data.data = [0.0,0.0,0.0,0.0,0.0,0.0]
#thruster4Data.data = [0.0, 0.0, 0.0, 0.0]

if __name__ == '__main__':
	thruster4Data=thrusterData4Thruster();
	thruster6Data=thrusterData6Thruster();
	
	rospy.init_node('Control', anonymous=True)
	sub = rospy.Subscriber(topicHeader.SENSOR_IMU, imuData, imuCB)
	pub4 = rospy.Publisher(topicHeader.CONTROL_PID_THRUSTER4, thrusterData4Thruster, queue_size = 2)
	pub6 = rospy.Publisher(topicHeader.CONTROL_PID_THRUSTER6, thrusterData6Thruster, queue_size = 2)

	r = rospy.Rate(10)

	while not rospy.is_shutdown():

		thruster6Data.data[0] = 0.0
		thruster6Data.data[1] = 0.0
		thruster6Data.data[2] = 0.0
		thruster6Data.data[3] = 0.0
		thruster6Data.data[4] = Kp_left*errorP + Kd_left*errorD + Ki_left*errorI
		thruster6Data.data[5] = -1 * thruster6Data.data[4]
		# thruster6Data.data[5] = Kp_right*errorP + Kd_right*errorD + Ki_right*errorI

		thruster4Data.data[0] = thruster6Data.data[0]
		thruster4Data.data[1] = thruster6Data.data[1]
		thruster4Data.data[2] = thruster6Data.data[4]
		thruster4Data.data[3] = thruster6Data.data[5]

		#pub4.publish(thruster4Data)
		pub6.publish(thruster6Data)
		

		r.sleep()


