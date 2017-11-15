#lang scheme

;(let ([x 1] [y 2])
;  (let ([x y] [y x])
;    (list x y)))
;
;(let ([x 1] [y 2])
;  (let* ([x y] [y x])
;    (list x y)))
;
;(let ([x 1] [y 2])
;  (letrec ([x y] [y x])
;    (list x y)))

(letrec ((suma
          (lambda [ls]
            (if (null? ls)
                0
                (+ (car ls) (suma (cdr ls)))
                )
            )
          ))
  (suma '(1 2 3 4 5 6))
  )
