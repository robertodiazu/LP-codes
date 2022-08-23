#lang racket 

(define stream-car
  (lambda (s) (car (force s))))

(define stream-cdr
  (lambda (s) (cdr (force s))))

(define contadores
  (let prox ((n 0))
    (delay (cons n (prox (+ n 1))))))

; Contador lazy encapsulado
; Notar que lazy counter es una clausura pues el letrec retorna una función lambda que memoriza las variables prox, aux y cprox
(define lazycounter
  (letrec(
          ; funcion que define la promesa que guardara los resultados
          [prox (lambda (n) (delay (cons n (prox (+ n 1)))))]
          ; instanciación inicial de la promesa (y la que guardará de verdad los resultados
          [cprox (prox 0)]
          ; función que procesa dicha promesa, n es el numero de "incrementos" y a el resultado
          [aux (lambda (n a) (if (= n 0) (stream-car a) (aux (- n 1) (stream-cdr a))) ) ]
          )
    (lambda (n)
      (aux n cprox)
      )
    )
  )

(lazycounter 6)

(lazycounter 10)

