#lang scheme

(define (iteracion func value i)
  (if (= i 0)
     (func)
     (func (iteracion func value (- i 1)) value)
     )
  )


(iteracion + 5 3)
(iteracion list '(1) 4)

;=> 15 
