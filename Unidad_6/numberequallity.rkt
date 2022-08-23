#lang scheme

(define a 2)
(define b 2)
(define c 2.0)
(define d 4/2)

(display "=\n")
(= a a)
(= a b)
(= a c)
(= a d)

(display "eq?\n")

(eq? a a)
(eq? a b)
(eq? a c)
(eq? a d)

(display "eqv?\n")

(eqv? a a)
(eqv? a b)
(eqv? a c)
(eqv? a d)

(display "equal?\n")

(equal? a a)
(equal? a b)
(equal? a c)
(equal? a d)