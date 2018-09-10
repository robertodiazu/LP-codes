#lang scheme

(define (maxM lista)
  (let mxm ((max -1) (ls lista))
       (cond
         ((null? ls) (if (eqv? max -1) ("empty list") max))
         ((list? (car ls)) 
                 (if (> (maxM (car ls)) max) 
                     (mxm (maxM (car ls)) (cdr ls))
                     (mxm max (cdr ls))
                  ))
         ((> (car ls) max) (mxm (car ls) (cdr ls)))
         (else (mxm max (cdr ls)))
       )
  )
)

(maxM '(1 2 3 (4 (5 11) 6) (7 8) 4 (10 2)))
