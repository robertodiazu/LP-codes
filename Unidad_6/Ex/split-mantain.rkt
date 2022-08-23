#lang scheme

;;; Utilizando recursión de cola, desarrolle la función split-mantain que recibe una
;;; lista y un elemento elem. La función debe separar la lista en una lista de listas en que cada
;;; lista contiene: elementos consecutivos distintos a elem o elementos consecutivos iguales
;;; a elem. Se debe mantener el orden de los elementos.

;;; Ejemplo 
;;; >(split-mantain '(3 2 5 6 2 1 6 6 6 5 4 3 6 2 1 6) 6)
;;; ((3 2 5) (6) (2 1) (6 6 6) (5 4 3) (6) (2 1) (6))

;;; Escribir codigo aqui

(define (split-mantain ls elem)
    (let split ([ls ls] [res '()] [aux '()])
        (if (null? ls)
            (if (null? aux)
                res
                (append res (list aux))
            )
            (cond
                [(null? aux)
                    (split (cdr ls) res (list (car ls)) )
                ] ; inicializar aux
                [(and (= (car ls) elem ) (= elem (car aux)))
                    (split (cdr ls) res (append aux (list (car ls))))
                ] ;agregar (car ls) a aux 
                [(and (= (car ls) elem ) (not (= elem (car aux))))
                    (split (cdr ls) (append res (list aux)) (list (car ls)))
                ] ;agregar aux a res y reinicializar aux
                [(and (not (= (car ls) elem )) (= elem (car aux)))
                    (split (cdr ls) (append res (list aux)) (list (car ls)))
                ] ;agregar aux a rex y reinicializar aux
                [(and (not (= (car ls) elem )) (not (= elem (car aux))))
                    (split (cdr ls) res (append aux (list (car ls))))
                ] ;agregar (car ls) a aux 
            )
        )
    )
)

(split-mantain '(3 2 5 6 2 1 6 6 6 5 4 3 6 2 1 6) 6)

(equal?
    (split-mantain '(3 2 5 6 2 1 6 6 6 5 4 3 6 2 1 6) 6)
    '((3 2 5) (6) (2 1) (6 6 6) (5 4 3) (6) (2 1) (6))
)

(equal?
    (split-mantain '() 6)
    '()
)