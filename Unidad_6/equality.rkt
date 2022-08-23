#lang scheme 

(define x '(2 3))
(define y '(2 3))
(eq? x y)
(equal? x y)

(define z x)
(eq? x z)

(define w '(3 2))
(equal? x w)