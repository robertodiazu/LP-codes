#lang scheme 

(define remv
  (lambda (x ls)
    (cond ((null? ls) '())
      ((eqv? x (car ls)) (remv x (cdr ls)))
      (else (cons (car ls) (remv x (cdr ls))))
    )
  )
)

(remv 'c '(a b c d e c r e d ))