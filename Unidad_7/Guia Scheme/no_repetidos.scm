#lang scheme

(define (no-repetidos ls)
  (define (no-repetidos-aux ls unique)
    (if (null? ls)
        unique
        (if (member (car ls) unique)
            (no-repetidos-aux (cdr ls) unique)
            (no-repetidos-aux (cdr ls) (append unique (list (car ls)) ))    
            )
    )
    )
  (no-repetidos-aux ls '())
  )

(no-repetidos '(1 2 2 3 4 4 5 5 6))

