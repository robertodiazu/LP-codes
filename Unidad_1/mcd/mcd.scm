;Ejemplo de Maximo Comun Divisor en Scheme
;En el paradigma funcional el bloque de construcción es la función,
;y el computo se realice llamando a otras funciones o llamando a la misma
;función usando recursión

#lang scheme

(define mcd
    (lambda (a b)
      (cond ((= a b) a)
        ((> a b) (mcd (- a b) b))
        (else (mcd (- b a) a)))))

(mcd 69 120)
