# Respuestas Capítulo 5

Miembros:

* Christian Camilo García Ceballos - 1870025
* Pablo Elías Moreno Peralta - 1840747
* Juan David Sandoval Ramírez - 1841309

## 1

Este programa debía asignarle un valor arbitrario a una variable y ver el valor que ésta tomaba en el child, que era
exactamente el mismo que venía del main(). Si se cambiaba en el child process y en el parent process, el nuevo valor 
de la variable era independiente en cada uno de estos procesos.

* [1.c](1.c)

## 2

Este programa debía abrir (en su defecto, si no existía, crearlo) y escribir unas ciertas lineas desde el child y el
parent, cosa que hacía en el orden: PARENT > CHILD. El texto se guardaba en el fichero writing.txt.

* [2.c](2.c)
* [writing.txt](writing.txt)

## 3

Este programa debía imprimir primero el CHILD (con el mensaje "Hello") y luego el PARENT (con el mensaje "Goodbye") sin
usar el comando wait(). Para ello usamos el comando sleep() en el parent process para que se ejecutara primero el child
process y se imprimiera en el orden pedido.

* [3.c](3.c)


## 4

En este programa se llamaba a la función fork y después se llamaba algunas formas del exec()para correr el programa /bin/ls 
principalmente se usó para demostrar que todos cumplen el mismo propósito, pero se diferencian en los parámetros que
reciben .


* [4.c](4.c)


## 5

En estos programas se usa la función wait() para que el padre espere al hijo a que termine su proceso y luego para que el
hijo espere al padre.

En el primer caso el padre espera el hijo y el código que devuelve el wait() es de -1 y para el segundo caso el wait() 
devuelve -1, porque el hijo aún no tiene otro hijo al que esperar.


* [5_1.c](5_1.c)

* [5_2.c](5_2.c)


## 6

El programa hace el mismo proceso que el punto 5, sin embargo esta vez se usa con el waitpid() el waitpid() es más eficaz 
porque se espera a un proceso hijo en concreto.

* [6.c](6.c)

## 7

Este programa debía crear un proceso CHILD y en él se debía cerrar con el comando close() la salida standar (standard
output) e imprimir un determinado texto que efectivamente no se mostraba en pantalla por haber suspendido la salida de 
código. Para verificar que esto no pasaba en el parent process, imprimimos una línea y ésta sí se mostraba en pantalla.

* [7.c](7.c)


