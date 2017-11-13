#lang scheme

(define factorial
  (lambda (n)
    (let fact ((i n))
      (if (= i 0)
        1
        (* i (factorial (- i 1)))
      )
    )
  )
)

(factorial 5)
