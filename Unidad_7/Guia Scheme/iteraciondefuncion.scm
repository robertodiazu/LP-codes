#lang scheme

(define (iteracion func value n)
  (let iter ((val (func)) (i n))
    (if (<= i 0) val
        (iter (func val value) (- i 1)))))

(iteracion + 3 -4)

(iteracion list '(1) 3)