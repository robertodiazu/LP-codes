#lang scheme  

;;; (define hacer-contador
;;;   (lambda ()
;;;     (let ((cont 0))
;;;       (lambda ()
;;;         (set! cont (+ cont 1))
;;;         cont
;;; ))))

;;; (define cont1 (hacer-contador))
;;; (define cont2 (hacer-contador))

(define (make_adder x)   
  ( lambda (y)
    (+ x y)
  )
)

;;; (cont1)
;;; (cont1)
;;; (cont2)
;;; (cont1)
;;; (cont1)
;;; (cont2)

(define add10 (make_adder 10))
(define add5 (make_adder 5))

(add10 20)
(add5 20)

