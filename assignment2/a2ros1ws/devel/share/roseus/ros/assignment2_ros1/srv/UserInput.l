;; Auto-generated. Do not edit!


(when (boundp 'assignment2_ros1::UserInput)
  (if (not (find-package "ASSIGNMENT2_ROS1"))
    (make-package "ASSIGNMENT2_ROS1"))
  (shadow 'UserInput (find-package "ASSIGNMENT2_ROS1")))
(unless (find-package "ASSIGNMENT2_ROS1::USERINPUT")
  (make-package "ASSIGNMENT2_ROS1::USERINPUT"))
(unless (find-package "ASSIGNMENT2_ROS1::USERINPUTREQUEST")
  (make-package "ASSIGNMENT2_ROS1::USERINPUTREQUEST"))
(unless (find-package "ASSIGNMENT2_ROS1::USERINPUTRESPONSE")
  (make-package "ASSIGNMENT2_ROS1::USERINPUTRESPONSE"))

(in-package "ROS")





(defclass assignment2_ros1::UserInputRequest
  :super ros::object
  :slots (_user_input ))

(defmethod assignment2_ros1::UserInputRequest
  (:init
   (&key
    ((:user_input __user_input) 0)
    )
   (send-super :init)
   (setq _user_input (round __user_input))
   self)
  (:user_input
   (&optional __user_input)
   (if __user_input (setq _user_input __user_input)) _user_input)
  (:serialization-length
   ()
   (+
    ;; int64 _user_input
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _user_input
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _user_input (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _user_input) (= (length (_user_input . bv)) 2)) ;; bignum
              (write-long (ash (elt (_user_input . bv) 0) 0) s)
              (write-long (ash (elt (_user_input . bv) 1) -1) s))
             ((and (class _user_input) (= (length (_user_input . bv)) 1)) ;; big1
              (write-long (elt (_user_input . bv) 0) s)
              (write-long (if (>= _user_input 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _user_input s)(write-long (if (>= _user_input 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _user_input
#+(or :alpha :irix6 :x86_64)
      (setf _user_input (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _user_input (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass assignment2_ros1::UserInputResponse
  :super ros::object
  :slots (_success ))

(defmethod assignment2_ros1::UserInputResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass assignment2_ros1::UserInput
  :super ros::object
  :slots ())

(setf (get assignment2_ros1::UserInput :md5sum-) "58c0c42efd219b57a84a9b7f48b80cad")
(setf (get assignment2_ros1::UserInput :datatype-) "assignment2_ros1/UserInput")
(setf (get assignment2_ros1::UserInput :request) assignment2_ros1::UserInputRequest)
(setf (get assignment2_ros1::UserInput :response) assignment2_ros1::UserInputResponse)

(defmethod assignment2_ros1::UserInputRequest
  (:response () (instance assignment2_ros1::UserInputResponse :init)))

(setf (get assignment2_ros1::UserInputRequest :md5sum-) "58c0c42efd219b57a84a9b7f48b80cad")
(setf (get assignment2_ros1::UserInputRequest :datatype-) "assignment2_ros1/UserInputRequest")
(setf (get assignment2_ros1::UserInputRequest :definition-)
      "int64 user_input
---
bool success

")

(setf (get assignment2_ros1::UserInputResponse :md5sum-) "58c0c42efd219b57a84a9b7f48b80cad")
(setf (get assignment2_ros1::UserInputResponse :datatype-) "assignment2_ros1/UserInputResponse")
(setf (get assignment2_ros1::UserInputResponse :definition-)
      "int64 user_input
---
bool success

")



(provide :assignment2_ros1/UserInput "58c0c42efd219b57a84a9b7f48b80cad")


