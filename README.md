# Proyecto: Schedsim
Este proyecto contiene una aplicación que simula la traducción de una dirección lógica a una física,
el contexto es un sistema de 32 bits y un tamaño de página de 4KB. El programa recibe como parámetro un entero de base
diez el cual representa la dirección lógica y el programa assigment4 retorna el índice de página y su offset respectivo.

## Compilación


#### Para compilar el programa:
```
make
```

#### Para limpiar object files y ejecutable:
```
make clean
```

### Uso:

```
./assigment4 [número entero de 0 a 4294967295]

Uso:
  ./assigment4 19986

```
### Resultado típico:<br/>

```
Ejecución del 19986:

La dirección 19986 contiene:
Número de pagina = 4
offset = 3602

```



### Especificaciones:<br/>
0) El programa assigment4 acepta 2 argumentos contando al programa:
1) El único argumento aparte del programa corresponde al la dirección de memoria virtual.
2) Esta dirección debe ser un número entero dentro de [0,4294967295].
3) El punto (2) se debe a que el programa solo simula un sistema de 32 bits.
4) El programa devuelve el número de página y offset correspondiente de dicha vaddress.
5) El programa usa atol(), si se mezcla caracteres no numéricos con números, solo tomará los valores del comienzo o se reemplazará por 0.
6) Por el mismo motivo del punto (5), valores no enteros serán truncados hacia abajo.

PLANTILLA:\n\t\t./assigment 19986\n\n");



## Autor
- Juan F. Nebel Dunn
