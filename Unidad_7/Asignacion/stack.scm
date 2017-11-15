#lang scheme

(define haga-stack
  (lambda ()
    (let ((st '()))
      (lambda (op . args)
        (cond
          ((eqv? op 'vacio?)(null? st))
          ((eqv? op 'push!) (begin (set! st (cons (car args) st))) st)
          ((eqv? op 'pop!) (begin (set! st (cdr st))) st)
          ((eqv? op 'tope!) (car st))
          (else "operacion no valida")
        )
      )
    )
  )
)

(define st (haga-stack))
(st 'vacio?)
(st 'push! 'perro)
(st 'push! 'gato)
(st 'push! 'canario)
(st 'tope!)
(st 'vacio?)
(st 'pop!)
(st 'pop?)
