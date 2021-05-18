; Auto-generated. Do not edit!


(cl:in-package assignment2_ros1-srv)


;//! \htmlinclude GeneratePoint-request.msg.html

(cl:defclass <GeneratePoint-request> (roslisp-msg-protocol:ros-message)
  ((gp_call
    :reader gp_call
    :initarg :gp_call
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass GeneratePoint-request (<GeneratePoint-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GeneratePoint-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GeneratePoint-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name assignment2_ros1-srv:<GeneratePoint-request> is deprecated: use assignment2_ros1-srv:GeneratePoint-request instead.")))

(cl:ensure-generic-function 'gp_call-val :lambda-list '(m))
(cl:defmethod gp_call-val ((m <GeneratePoint-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment2_ros1-srv:gp_call-val is deprecated.  Use assignment2_ros1-srv:gp_call instead.")
  (gp_call m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GeneratePoint-request>) ostream)
  "Serializes a message object of type '<GeneratePoint-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'gp_call) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GeneratePoint-request>) istream)
  "Deserializes a message object of type '<GeneratePoint-request>"
    (cl:setf (cl:slot-value msg 'gp_call) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GeneratePoint-request>)))
  "Returns string type for a service object of type '<GeneratePoint-request>"
  "assignment2_ros1/GeneratePointRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GeneratePoint-request)))
  "Returns string type for a service object of type 'GeneratePoint-request"
  "assignment2_ros1/GeneratePointRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GeneratePoint-request>)))
  "Returns md5sum for a message object of type '<GeneratePoint-request>"
  "d650ed2bf3c6f91efef5a89f74343ac5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GeneratePoint-request)))
  "Returns md5sum for a message object of type 'GeneratePoint-request"
  "d650ed2bf3c6f91efef5a89f74343ac5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GeneratePoint-request>)))
  "Returns full string definition for message of type '<GeneratePoint-request>"
  (cl:format cl:nil "bool gp_call~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GeneratePoint-request)))
  "Returns full string definition for message of type 'GeneratePoint-request"
  (cl:format cl:nil "bool gp_call~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GeneratePoint-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GeneratePoint-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GeneratePoint-request
    (cl:cons ':gp_call (gp_call msg))
))
;//! \htmlinclude GeneratePoint-response.msg.html

(cl:defclass <GeneratePoint-response> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0))
)

(cl:defclass GeneratePoint-response (<GeneratePoint-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GeneratePoint-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GeneratePoint-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name assignment2_ros1-srv:<GeneratePoint-response> is deprecated: use assignment2_ros1-srv:GeneratePoint-response instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <GeneratePoint-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment2_ros1-srv:x-val is deprecated.  Use assignment2_ros1-srv:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <GeneratePoint-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment2_ros1-srv:y-val is deprecated.  Use assignment2_ros1-srv:y instead.")
  (y m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GeneratePoint-response>) ostream)
  "Serializes a message object of type '<GeneratePoint-response>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GeneratePoint-response>) istream)
  "Deserializes a message object of type '<GeneratePoint-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GeneratePoint-response>)))
  "Returns string type for a service object of type '<GeneratePoint-response>"
  "assignment2_ros1/GeneratePointResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GeneratePoint-response)))
  "Returns string type for a service object of type 'GeneratePoint-response"
  "assignment2_ros1/GeneratePointResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GeneratePoint-response>)))
  "Returns md5sum for a message object of type '<GeneratePoint-response>"
  "d650ed2bf3c6f91efef5a89f74343ac5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GeneratePoint-response)))
  "Returns md5sum for a message object of type 'GeneratePoint-response"
  "d650ed2bf3c6f91efef5a89f74343ac5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GeneratePoint-response>)))
  "Returns full string definition for message of type '<GeneratePoint-response>"
  (cl:format cl:nil "float64 x~%float64 y~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GeneratePoint-response)))
  "Returns full string definition for message of type 'GeneratePoint-response"
  (cl:format cl:nil "float64 x~%float64 y~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GeneratePoint-response>))
  (cl:+ 0
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GeneratePoint-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GeneratePoint-response
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GeneratePoint)))
  'GeneratePoint-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GeneratePoint)))
  'GeneratePoint-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GeneratePoint)))
  "Returns string type for a service object of type '<GeneratePoint>"
  "assignment2_ros1/GeneratePoint")