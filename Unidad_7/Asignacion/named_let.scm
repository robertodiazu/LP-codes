#lang scheme 

( (lambda (ls)
    (let suma ((l ls))
      (if (null? l)
        0
        (+ (car l) (suma (cdr l)))
      )
    )
  )
  '(1 2 3 4 5 6)
)
