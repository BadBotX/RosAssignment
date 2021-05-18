; Auto-generated. Do not edit!


(cl:in-package assignment2_ros1-srv)


;//! \htmlinclude UserInput-request.msg.html

(cl:defclass <UserInput-request> (roslisp-msg-protocol:ros-message)
  ((user_input
    :reader user_input
    :initarg :user_input
    :type cl:integer
    :initform 0))
)

(cl:defclass UserInput-request (<UserInput-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UserInput-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UserInput-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name assignment2_ros1-srv:<UserInput-request> is deprecated: use assignment2_ros1-srv:UserInput-request instead.")))

(cl:ensure-generic-function 'user_input-val :lambda-list '(m))
(cl:defmethod user_input-val ((m <UserInput-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment2_ros1-srv:user_input-val is deprecated.  Use assignment2_ros1-srv:user_input instead.")
  (user_input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UserInput-request>) ostream)
  "Serializes a message object of type '<UserInput-request>"
  (cl:let* ((signed (cl:slot-value msg 'user_input)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UserInput-request>) istream)
  "Deserializes a message object of type '<UserInput-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'user_input) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UserInput-request>)))
  "Returns string type for a service object of type '<UserInput-request>"
  "assignment2_ros1/UserInputRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UserInput-request)))
  "Returns string type for a service object of type 'UserInput-request"
  "assignment2_ros1/UserInputRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UserInput-request>)))
  "Returns md5sum for a message object of type '<UserInput-request>"
  "58c0c42efd219b57a84a9b7f48b80cad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UserInput-request)))
  "Returns md5sum for a message object of type 'UserInput-request"
  "58c0c42efd219b57a84a9b7f48b80cad")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UserInput-request>)))
  "Returns full string definition for message of type '<UserInput-request>"
  (cl:format cl:nil "int64 user_input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UserInput-request)))
  "Returns full string definition for message of type 'UserInput-request"
  (cl:format cl:nil "int64 user_input~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UserInput-request>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UserInput-request>))
  "Converts a ROS message object to a list"
  (cl:list 'UserInput-request
    (cl:cons ':user_input (user_input msg))
))
;//! \htmlinclude UserInput-response.msg.html

(cl:defclass <UserInput-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass UserInput-response (<UserInput-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UserInput-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UserInput-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name assignment2_ros1-srv:<UserInput-response> is deprecated: use assignment2_ros1-srv:UserInput-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <UserInput-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment2_ros1-srv:success-val is deprecated.  Use assignment2_ros1-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UserInput-response>) ostream)
  "Serializes a message object of type '<UserInput-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UserInput-response>) istream)
  "Deserializes a message object of type '<UserInput-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UserInput-response>)))
  "Returns string type for a service object of type '<UserInput-response>"
  "assignment2_ros1/UserInputResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UserInput-response)))
  "Returns string type for a service object of type 'UserInput-response"
  "assignment2_ros1/UserInputResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UserInput-response>)))
  "Returns md5sum for a message object of type '<UserInput-response>"
  "58c0c42efd219b57a84a9b7f48b80cad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UserInput-response)))
  "Returns md5sum for a message object of type 'UserInput-response"
  "58c0c42efd219b57a84a9b7f48b80cad")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UserInput-response>)))
  "Returns full string definition for message of type '<UserInput-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UserInput-response)))
  "Returns full string definition for message of type 'UserInput-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UserInput-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UserInput-response>))
  "Converts a ROS message object to a list"
  (cl:list 'UserInput-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'UserInput)))
  'UserInput-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'UserInput)))
  'UserInput-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UserInput)))
  "Returns string type for a service object of type '<UserInput>"
  "assignment2_ros1/UserInput")