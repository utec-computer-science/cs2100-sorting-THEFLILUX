//
// Created by theflilux on 30/03/20.
//

#include "Mersort.h"


void Mersort::merge(int *arr, int izq_primero, int izq_ultimo, int der_primero, int der_ultimo) {
    int lenght = der_ultimo-izq_primero+1;
    int temp[lenght];

    int izquierda = izq_primero;
    int derecha = der_primero;

    for (int i = 0; i < lenght; ++i) {
        if(izquierda > izq_ultimo){
            temp[i] = arr[derecha++];
        } else if(derecha > der_ultimo){
            temp[i] = arr[izquierda++];
        } else if(arr[izquierda] <= arr[derecha]){
            temp[i] = arr[izquierda++];
        } else{
            temp[i] = arr[derecha++];
        }
    }

    for (int i = 0; i < lenght; ++i) {
        arr[izq_primero++] = temp[i];
    }

}

void Mersort :: ordenar_Data(int *arr, int primero, int ultimo){
    if(primero >= ultimo){
        return;
    }else{
        int medio = (primero + ultimo)/2;
        ordenar_Data(arr,primero,medio);
        ordenar_Data(arr,medio+1,ultimo);
        merge(arr,primero,medio,medio+1,ultimo);
    }
}