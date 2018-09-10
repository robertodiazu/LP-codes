#lang scheme

(define (agrupar lista)
  (let agr ((actual '()) (ls lista) (res '()) (acls '()))
       (cond
         ((null? ls) (append res (list acls)))
         ((null? actual) (agr (car ls) (cdr ls) res (list (car ls))))
         ((eq? (car ls) actual) 
                (agr actual (cdr ls) res (append acls (list (car ls)))))
         (else (agr (car ls) (cdr ls) (append res (list acls)) (list (car ls))))
       )
  )
)


(define (rle lista) (le (agrupar lista)))

(define (le lista)
  (if
    (null? lista) 
    '()
    (cons (list (car (car lista)) (length (car lista))) (le (cdr lista)))
  )
)

(agrupar '(a a a a b c c a a d e e e e))
(rle '(a a a a b c c a a d e e e e))