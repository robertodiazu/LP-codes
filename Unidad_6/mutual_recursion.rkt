#lang scheme  

(letrec
  (
    (par? (lambda (x)
      (or (= x 0)(impar? (- x 1))))
    )
    (impar? (lambda (x)
      (and (not (= x 0))(par? (- x 1))))
    )
  )
  (list (par? 20) (impar? 20))
)
