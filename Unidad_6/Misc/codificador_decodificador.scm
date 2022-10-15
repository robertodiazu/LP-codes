

(define (codificador codigo expr)
  (if (null? expr) '()
      (cons (if (assq (car expr) codigo) 
                             (cdr (assq (car expr) codigo))
                             (car expr)
                         )
            (codificador codigo (cdr expr))
            )
  )
  )

(define (voltear-codigo codigo)
  (if (null? codigo) '()
      (cons (cons (cdr (car codigo) ) (car (car codigo)) ) (voltear-codigo (cdr codigo)))
  )
  )

(define (decodificador codigo expr)
  (codificador (voltear-codigo codigo) expr)
  )

;(decodificador (list (cons 'a 'b) (cons 'b 'i) (cons 'n 'e)) '(i b e b e b))
;(codificador (list (cons 'a 'b) (cons 'b 'i) (cons 'n 'e)) '(b a n a n a))

;'(i b e b e b)

;(define ex '(b a n a n a))
;(define co (list (cons 'a 'b) (cons 'b 'i) (cons 'n 'e)))