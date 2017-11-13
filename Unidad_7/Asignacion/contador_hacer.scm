#lang scheme 

(define hacer-contador
  (lambda ()
    (let ((cont 0))
      (lambda ()
        (set! cont (+ cont 1))
        cont
))))

(define cont1 (hacer-contador))
(define cont2 (hacer-contador))


(cont1)
(cont1)
(cont2)
(cont1)
(cont1)
(cont2)
