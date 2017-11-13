#lang scheme

(define factorial1
  (lambda (n)
    (let fact ((i n) (a 1))
      (if (= i 0)
        a
        (fact (- i 1) (* a i))
      )
    )
  )
)

(factorial1 5)
