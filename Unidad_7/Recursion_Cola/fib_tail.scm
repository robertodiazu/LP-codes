(define fibonacci1
  (lambda (n)
    (if (= n 0)
      0
      (let fib ((i n) (a1 1) (a0 0))
        (if (= i 1)
          a1
          (fib (- i 1) (+ a1 a0) a1)
        )
      )
    )
  )
)

(fibonacci1 20)
