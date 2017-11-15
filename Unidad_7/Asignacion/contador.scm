#lang scheme

(define contador 0)

(define cuenta
  (lambda ()
    (set! contador (+ contador 1))
    contador
  )
)

(cuenta)
(cuenta)
(cuenta)
(cuenta)
