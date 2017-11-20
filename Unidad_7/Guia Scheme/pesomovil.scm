#lang scheme

(define (pesomovil arbol)
  (if (null? arbol) 0
      (let ((peso (car arbol)) (izq (pesomovil (car (cdr arbol)))) (der (pesomovil (car (cdr (cdr arbol))))))
        (cond
          ((or (null? izq) (null? der)) '())
          ((eqv? izq der) (+ peso izq der))
          (else '())
         )
      )
  )
)

(pesomovil '(4 (1 (5 () ()) (1 (2 () ()) (2 () ()))) (3 (4 () ()) (4 () ()))))

(pesomovil '(4 (1 (3 () ()) (1 (2 () ()) (2 () ()))) (3 (4 () ()) (2 () ()))))