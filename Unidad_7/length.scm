#lang scheme

(define length
  (lambda (ls)
    (if (null? ls)
      0
      (+ 1 (length (cdr ls)))
    )
  )
)

(length '(a b c d))
