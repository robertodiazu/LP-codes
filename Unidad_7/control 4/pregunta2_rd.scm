(define (repetidos ls)
  (let rep-aux ((ls ls) (nrls '()) (rls '()))
    (cond
      [(null? ls) (list nrls rls)]
      [(not (member (car ls) nrls)) (rep-aux (cdr ls) (append nrls (list (car ls)) ) rls ) ]
      [(not (member (car ls) rls))  (rep-aux (cdr ls) nrls (append rls (list (car ls)) ) ) ]
      [else (rep-aux (cdr ls) nrls rls) ]
      )
   )
)

(repetidos ( list #\a #\b #\a #\d #\a #\c #\b #\b ))
;’((#\ a #\ b #\ d #\ c ) (#\ a #\ b ))
