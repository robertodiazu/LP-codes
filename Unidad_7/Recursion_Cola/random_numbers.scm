#lang scheme

(define (f1 a)
  (f1 (+ a (random)) )
)

(define (f2 a)
  (+ a (f2 (random)) )
)
