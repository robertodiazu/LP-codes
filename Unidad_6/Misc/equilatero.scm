

(define (distancia punto1 punto2)
  (let ([x1 (car punto1)] [x2 (car punto2)] 
                          [y1 (car (cdr punto1))] [y2 (car (cdr punto2))]
                          )
  (+
   (expt (- x2 x1) 2)
   (expt (- y2 y1) 2)
   )
  )
  )

(define (equilatero triangulo)
  (let (
        [punto1 (car triangulo)] 
        [punto2 (car (cdr triangulo))] 
        [punto3 (car (cdr (cdr triangulo)))] )
    (= 
     (distancia punto1 punto2)
     (distancia punto2 punto3)
     (distancia punto3 punto1)
     )
   )
  )

