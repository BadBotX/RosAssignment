
(cl:in-package :asdf)

(defsystem "assignment2_ros1-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "GeneratePoint" :depends-on ("_package_GeneratePoint"))
    (:file "_package_GeneratePoint" :depends-on ("_package"))
    (:file "UserInput" :depends-on ("_package_UserInput"))
    (:file "_package_UserInput" :depends-on ("_package"))
  ))