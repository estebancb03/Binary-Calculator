# **Calculadora binaria**
## Descripción del problema

Este programa consiste en una claculadora binaria la cual puede realizar múltiples operaciones con uno o dos valores dependiendo de la operación a realizar, estos valores son introducidos por el usuario. Las funcionalidades que tiene esta calculadora son las siguientes:
* OR.
* AND.
* XOR.
* NOT.
* Sumar.
* Restar.
* Dividir.
* Multiplicar.

## Manual de uso

La solución esta implementada en C++ con el framework de QT para la interfaz grafica y lenguaje ensamblador, especificamente NASM para la realización de las operaaciones lógicas. La intercaz grafica solo se encarga de la recepción de valores y la validación de los mismos, posterior a esto se invocan métodos programados en NASM que realizan las operaciones y retornan los valores de solución.

Primeramente se deberá escoger la operación que se desea realizar, para ello hay que seleccionar alguna de las opciones disponibles en el comboBox de selección. Dependiendo de la opción seleccionada se habilitará uno o dos textBox en los cuales se podrá digitar los valores con los que se quiere realizar y en el comboBox correspondiente seleccionar si el valor ingresado debe interpretarse como un binario o un decimal. Es importante mencionar que los valores pueden ser dados en ambos en formato binario, ambos en formato decimal o combinados. Ejemplo:

| Valor 1         | Valor2          |
|-----------------|-----------------|
| 21 (decimal)    | 11 (decimal)    |
| 21 (decimal)    | 1011 (binario)  |
| 10101 (bianrio) | 11 (decimal)    |
| 10101 (binario) | 1011 (bianrio)  |

En el caso de que se esté introduciendo un valor inválido se le notificará al usuario para que lo corrija. Mientras exista un valor inválido introducido o falte por introducir para realizar la operación seleccionada no se podrá calcular la solución ya que el botón **Calcular** estará inhabilitado.

Para obtener los resultados se debe presionar el botón **Calcular**, el cual procederá a realizar la operación con los valores seleccionados y mostrará las solociones en los dos textBox correspondientes.

La solución de cualquier operación seleccionada por el usuario se desplegará tanto en formato binario como en formato decimal. Ejemplo:

| Operación      | Valor1            | Valor2            | Solución binaria | Solución decimal |
|----------------|-------------------|-------------------|------------------|------------------|
| OR             | 10001 (binario)   | 100 (binario)     | 10101            | 21               |
| AND            | 1001 (binario)    | 1011 (binario)    | 0                | 0                |
| XOR            | 80 (decimal)      | 55 (decimal)      | 10110            | 22               |
| NOT            | -30 (decimal)     | -                 | 11101            | 29               |
| Suma           | 130 (decimal)     | 42 (decimal)      | 10101100         | 172              |
| Resta          | 42 (decimal)      | 100111 (binario ) | 11               | 3                |
| División       | 50 (decimal )     | 5 (decimal)       | 1010             | 10               |
| Multiplicación | 1000110 (binario) | 11 (binario)      | 11010010         | 210              |

## Créditos

Proyecto desarrollado por:
* Esteban Castañeda Blanco
* Bayron Ramírez Jiménez
* Esteban Iglesias Vargas
* Fabio Sanabria Valerín
* Daniel Lizano Morales