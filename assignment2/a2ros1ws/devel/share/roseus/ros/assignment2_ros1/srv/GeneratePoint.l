;; Auto-generated. Do not edit!


(when (boundp 'assignment2_ros1::GeneratePoint)
  (if (not (find-package "ASSIGNMENT2_ROS1"))
    (make-package "ASSIGNMENT2_ROS1"))
  (shadow 'GeneratePoint (find-package "ASSIGNMENT2_ROS1")))
(unless (find-package "ASSIGNMENT2_ROS1::GENERATEPOINT")
  (make-package "ASSIGNMENT2_ROS1::GENERATEPOINT"))
(unless (find-package "ASSIGNMENT2_ROS1::GENERATEPOINTREQUEST")
  (make-package "ASSIGNMENT2_ROS1::GENERATEPOINTREQUEST"))
(unless (find-package "ASSIGNMENT2_ROS1::GENERATEPOINTRESPONSE")
  (make-package "ASSIGNMENT2_ROS1::GENERATEPOINTRESPONSE"))

(in-package "ROS")





(defclass assignment2_ros1::GeneratePointRequest
  :super ros::object
  :slots (_gp_call ))

(defmethod assignment2_ros1::GeneratePointRequest
  (:init
   (&key
    ((:gp_call __gp_call) nil)
    )
   (send-super :init)
   (setq _gp_call __gp_call)
   self)
  (:gp_call
   (&optional (__gp_call :null))
   (if (not (eq __gp_call :null)) (setq _gp_call __gp_call)) _gp_call)
  (:serialization-length
   ()
   (+
    ;; bool _gp_call
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _gp_call
       (if _gp_call (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _gp_call
     (setq _gp_call (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass assignment2_ros1::GeneratePointResponse
  :super ros::object
  :slots (_x _y ))

(defmethod assignment2_ros1::GeneratePointResponse
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; float64 _x
    8
    ;; float64 _y
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass assignment2_ros1::GeneratePoint
  :super ros::object
  :slots ())

(setf (get assignment2_ros1::GeneratePoint :md5sum-) "d650ed2bf3c6f91efef5a89f74343ac5")
(setf (get assignment2_ros1::GeneratePoint :datatype-) "assignment2_ros1/GeneratePoint")
(setf (get assignment2_ros1::GeneratePoint :request) assignment2_ros1::GeneratePointRequest)
(setf (get assignment2_ros1::GeneratePoint :response) assignment2_ros1::GeneratePointResponse)

(defmethod assignment2_ros1::GeneratePointRequest
  (:response () (instance assignment2_ros1::GeneratePointResponse :init)))

(setf (get assignment2_ros1::GeneratePointRequest :md5sum-) "d650ed2bf3c6f91efef5a89f74343ac5")
(setf (get assignment2_ros1::GeneratePointRequest :datatype-) "assignment2_ros1/GeneratePointRequest")
(setf (get assignment2_ros1::GeneratePointRequest :definition-)
      "bool gp_call
---
float64 x
float64 y

")

(setf (get assignment2_ros1::GeneratePointResponse :md5sum-) "d650ed2bf3c6f91efef5a89f74343ac5")
(setf (get assignment2_ros1::GeneratePointResponse :datatype-) "assignment2_ros1/GeneratePointResponse")
(setf (get assignment2_ros1::GeneratePointResponse :definition-)
      "bool gp_call
---
float64 x
float64 y

")



(provide :assignment2_ros1/GeneratePoint "d650ed2bf3c6f91efef5a89f74343ac5")


