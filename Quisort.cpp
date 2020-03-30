//
// Created by theflilux on 30/03/20.
//

#include <iostreams>
#include "Quisort.h"
using namespace std;

void Quisort :: ordenar_Data(int *arr, int primero, int ultimo){
    int primeraPos, ultimaPos, central;
    int pivote;
    central = (primero + ultimo)/2;
    pivote = arr[central];
    primeraPos = primero;
    ultimaPos = ultimo;
    do{
        while(arr[primeraPos] < pivote) primeraPos++;
        while(arr[ultimaPos] > pivote) ultimaPos--;
        if(primeraPos<=ultimaPos)
        {
            int temp;
            temp=arr[primeraPos];
            arr[primeraPos]=arr[ultimaPos];
            arr[ultimaPos]=temp;
            primeraPos++;
            ultimaPos--;
        }
    }while(primeraPos<=ultimaPos);

    if(primero<ultimaPos){
        ordenar_Data(arr,primero,ultimaPos);
    }
    if(primeraPos<ultimo){
        ordenar_Data(arr,primeraPos,ultimo);
    }
}