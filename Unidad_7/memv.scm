#lang scheme

(define memv
  (lambda (x ls)
    (cond ((null? ls) '())
      ((eqv? x (car ls)) (cdr ls))
      (else (memv x (cdr ls)))
    )
  )
)

(memv 'c '(a b c d e))