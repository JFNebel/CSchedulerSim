/** Deber: Assignment4
 * @author Juan Nebel
 * 2/09/20
 */


#include "./include/assigment4.h"


int main(int argc, char *argv[]){

    //Validamos numero de args
    if(argc!=2){
        fprintf(stderr, "\nNumero de argumentos invalido!(0):\n");
        ayuda();
        return (-1);
    }

    //Validamos que argv tenga un tipo de dato valido, caso contrario reemplazamos por valor por defecto 0 (ver ayuda())
    unsigned long vaddress = atol(argv[1]);

    //Validamos que la direccion de memoria se encuentre dentro de las posibilidades de un sistema de 32 bits
    if(vaddress>MAXIMUM_SIZE || vaddress<0){
        fprintf(stderr, "\n La direccion de memoria ingresada no se encuentra dentro del rango especificado!(3):\n");
        ayuda();
        return (-1);
    }



    //Operacion
    int pagina = vaddress/TAMANO_PAGINA; //Nos da el indice de pagina (trunca hacia abajo)
    int offset = vaddress%TAMANO_PAGINA; //El modulo nos da el sobrante/despazamiento/offset

    
    printf("La direccion %ld contiene:\n", vaddress);
    printf("Numero de pagina = %d\n", pagina);
    printf("offset = %d\n", offset);
    
    return 0;
}
















/*=======================================================Funciones==================================================*/

/* La funcion ayuda, permite mostrar en consola el uso correcto el ejecutable. Deber ser llamada
 * cuando existe un input erroneo por parte del usuario.
 */
void ayuda(){
  printf("\n/*************************************************AYUDA*******************************************************/\n");
        printf("0) El programa assigment4 acepta 2 argumentos contando al programa:\n");
        printf("1) El unico argumento aparte del programa corresponde al la direccion de memoria virtual\n");
        printf("2) Esta direccion debe ser un numero entero dentro de [0,4294967295]\n");
        printf("3) El punto (2) se debe a que el programa solo simula un sistema de 32 bits\n");
        printf("4) El programa devuelve el numero de pagina y offset correspondiente de dicha vaddress\n");
        printf("5) El programa usa atol(), si se mezcla caracteres no numericos con numeros solo tomara los valores del comienzo o se reemplazara por 0\n");
        printf("6) Por el mismo motivo del punto (5), valores no enteros seran truncados hacia abajo\n\n");
        printf("PLANTILLA:\n\t\t./assigment 19986\n\n");
}

