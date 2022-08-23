#lang scheme 

(define cuenta1
  (let ((cont 0))
    (lambda ()
      (set! cont (+ cont 1))
      cont
    )
  )
)

(cuenta1)
(cuenta1)
(cuenta1)
(cuenta1)
