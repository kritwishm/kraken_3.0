; Auto-generated. Do not edit!


(cl:in-package kraken_msgs-msg)


;//! \htmlinclude orientControllerResult.msg.html

(cl:defclass <orientControllerResult> (roslisp-msg-protocol:ros-message)
  ((roll_f
    :reader roll_f
    :initarg :roll_f
    :type cl:float
    :initform 0.0)
   (pitch_f
    :reader pitch_f
    :initarg :pitch_f
    :type cl:float
    :initform 0.0)
   (yaw_f
    :reader yaw_f
    :initarg :yaw_f
    :type cl:float
    :initform 0.0))
)

(cl:defclass orientControllerResult (<orientControllerResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <orientControllerResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'orientControllerResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name kraken_msgs-msg:<orientControllerResult> is deprecated: use kraken_msgs-msg:orientControllerResult instead.")))

(cl:ensure-generic-function 'roll_f-val :lambda-list '(m))
(cl:defmethod roll_f-val ((m <orientControllerResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kraken_msgs-msg:roll_f-val is deprecated.  Use kraken_msgs-msg:roll_f instead.")
  (roll_f m))

(cl:ensure-generic-function 'pitch_f-val :lambda-list '(m))
(cl:defmethod pitch_f-val ((m <orientControllerResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kraken_msgs-msg:pitch_f-val is deprecated.  Use kraken_msgs-msg:pitch_f instead.")
  (pitch_f m))

(cl:ensure-generic-function 'yaw_f-val :lambda-list '(m))
(cl:defmethod yaw_f-val ((m <orientControllerResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kraken_msgs-msg:yaw_f-val is deprecated.  Use kraken_msgs-msg:yaw_f instead.")
  (yaw_f m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <orientControllerResult>) ostream)
  "Serializes a message object of type '<orientControllerResult>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'roll_f))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pitch_f))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yaw_f))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <orientControllerResult>) istream)
  "Deserializes a message object of type '<orientControllerResult>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'roll_f) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pitch_f) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw_f) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<orientControllerResult>)))
  "Returns string type for a message object of type '<orientControllerResult>"
  "kraken_msgs/orientControllerResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'orientControllerResult)))
  "Returns string type for a message object of type 'orientControllerResult"
  "kraken_msgs/orientControllerResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<orientControllerResult>)))
  "Returns md5sum for a message object of type '<orientControllerResult>"
  "517234e8df6e71015d90db115635924b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'orientControllerResult)))
  "Returns md5sum for a message object of type 'orientControllerResult"
  "517234e8df6e71015d90db115635924b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<orientControllerResult>)))
  "Returns full string definition for message of type '<orientControllerResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result~%float32 roll_f~%float32 pitch_f~%float32 yaw_f~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'orientControllerResult)))
  "Returns full string definition for message of type 'orientControllerResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result~%float32 roll_f~%float32 pitch_f~%float32 yaw_f~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <orientControllerResult>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <orientControllerResult>))
  "Converts a ROS message object to a list"
  (cl:list 'orientControllerResult
    (cl:cons ':roll_f (roll_f msg))
    (cl:cons ':pitch_f (pitch_f msg))
    (cl:cons ':yaw_f (yaw_f msg))
))