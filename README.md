# Proyecto: Schedsim
Este proyecto contiene una aplicación que simula la traducción de una dirección lógica a una física,
el contexto es un sistema de 32 bits y un tamaño de pagina de 4KB. El programa recibe como parametro un entero de base
diez el cual representa la direccion logica y el programa assigment4 retorna el indice de pagina y su offset respectivo

## Compilación


#### Para compilar el programa:
```
make
```

#### Para limpiar object files y ejecutable:
```
make clean
```

### USO:

```
./assigment4 [numero entero de 0 a 4294967295]

Uso:
  ./assigment4 19986

```
### Resultado tipicos:<br/>

```
Ejecucion del 19986:

La direccion 19986 contiene:
Numero de pagina = 4
offset = 3602

```



### Especificaciones:<br/>
0) El programa assigment4 acepta 2 argumentos contando al programa:
1) El unico argumento aparte del programa corresponde al la direccion de memoria virtual
2) Esta direccion debe ser un numero entero dentro de [0,4294967295]
3) El punto (2) se debe a que el programa solo simula un sistema de 32 bits
4) El programa devuelve el numero de pagina y offset correspondiente de dicha vaddress
5) El programa usa atol(), si se mezcla caracteres no numericos con numeros solo tomara los valores del comienzo o se reemplazara por 0
6) Por el mismo motivo del punto (5), valores no enteros seran truncados hacia abajo

PLANTILLA:\n\t\t./assigment 19986\n\n");



## Autor
- Juan Nebel Dunn
