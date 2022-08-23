

(define (maximo ls)
  (apply max ls)
  )

(define (maxM ls)
  (let maxM-aux ([ls (cdr ls)] [actual-max (car ls)])
    (if (null? ls) actual-max
    (if (list? (car ls))
        (if (> (maximo (car ls)) actual-max)
            (maxM-aux (cdr ls) (maximo (car ls)))
            (maxM-aux (cdr ls) actual-max)
            )
        (if (> (car ls) actual-max)
            (maxM-aux (cdr ls) (car ls))
            (maxM-aux (cdr ls) actual-max)
            )
    )
    )
  )
  )

