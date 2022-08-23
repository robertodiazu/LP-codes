

(define (repetidos lista)
  (let re ((res '()) (rep '()) (ls lista))
    (cond [(null? ls) res rep]
          [(member (car ls) res)
           (if (member (car ls) rep)
               (re res rep (cdr ls))
               (re res (append rep (list (car ls))) (cdr ls)))]
          [else (re (append res (list (car ls))) rep (cdr ls))]
     )))

(repetidos '(3 2 4 3 1 5 3 2 2 4 3 1 3 2))
(repetidos (list #\a #\b #\a #\d #\a #\c #\b #\b))