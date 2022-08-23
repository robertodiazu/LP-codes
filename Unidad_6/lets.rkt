#lang scheme 

;;; (let ([x 1] [y 2])
;;;   (let ([x y] [y x])
;;;     (list x y)))

;;; (let ([x 1] [y 2])
;;;   (let* ([x y] [y x])
;;;     (list x y)))

;(let ([x 1] [y 2])
;  (letrec ([x y] [y x])
;    (list x y)))

(letrec ( 
    (x 1)
    (y (+ x 2))
  )
  y
)