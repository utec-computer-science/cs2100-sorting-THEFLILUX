//
// Created by theflilux on 30/03/20.
//

#include <iostream>
#include "Inssort.h"
using namespace std;

void Inssort :: insert_Data(){
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void Inssort :: mostrar_Data(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}

void Inssort :: ordenar_Data(){
    int posicion,aux;
    for(int i=0;i<n;i++){
        posicion=i;
        aux=arr[i];
        while(posicion>0 && arr[posicion-1]>aux){
            arr[posicion] = arr[posicion-1];
            posicion--;
        }
        arr[posicion] = aux;
    }
}
