#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <busquedapp.h>

int main(void){
    int n=10; //Declarar los numeros que se generaran aleatoriamente
    int arr[n]; //Declarar el arreglo de los numeros aleatorios
    int numbus=0; //Modifique la cantidad de numeros aleatorios que se generaran

    printf("ESTE TRABAJO SE REALIZO EN COLABORACION DE\nARENAS CESAR\nDOMINGUEZ FRANCISCO\nNAVA DANA\nNAVA JAZMIN\nLUIS MANUEL VAZQUEZ\n");

    srand(time(0)); //Generacion de los numeros aleatorios con semilla en base al tiempo
    printf("\nLos numeros aleatorios son: \n");

    for (int i = 0; i < n; i++) { //Inicia el bucle guardando los numeros en un arreglo
        arr[i] = rand() % 99; //Los numeros generados seran hasta el 99
        printf("*%d\n", arr[i]); //Imprime los numeros aleatorios generados
    }

    burbujaS(arr,n); //Ordenamiento con burbuja
    printf("\n");

    printf("Arreglo ordenado: ");
    for(int i=0;i<n;i++) //Inicia el bucle buscando el numero declarado en "numbus"
        printf("%d ",arr[i]); //Imprime el arreglo ordenado
    int indice = binSearch(arr,0,n-1,numbus); //Considere que n es tamaño y n-1 es el INDICE FINAL del vector SON VALORES DIFERENTES

    int indice1 = indSearch(arr,n,numbus);

    int indice2 = intSearch(arr,0,n-1,numbus);

    int indice3 = lSearch(arr,n,numbus);

    //BUSQUEDA BINARIA
    if(indice!=-1)
        printf("\nEl valor con Busqueda Interpolada esta en: %d",indice);
    else
        printf("\nEl valor con Busqueda Interpolada no se encuentra en la lista");

    //BUSQUEDA INDEXADA
    if(indice1!=-1)
        printf("\nEl valor con Busqueda Indexada esta en: %d",indice);
    else
        printf("\nEl valor con Busqueda Indexada no esta en la lista");

    //BUSQUEDA INTERPOLADA
    if(indice2!=-1)
        printf("\nEl valor con Busqueda Interpolada esta en: %d",indice);
    else
        printf("\nEl valor con Busqueda Interpolada no se encuentra en la lista");

    //BUSQUEDA LINEAR
    if(indice3!=-1)
        printf("\nEl valor con Busqueda Linear esta en: %d",indice);
    else
        printf("\nEl valor con Busqueda Linear no se encuentra en la lista");
    return 0;


}

