//
// Created by theflilux on 30/03/20.
//

#include <iostream>
#include "Selsort.h"
using namespace std;

void Selsort :: insert_Data(){
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void Selsort :: mostrar_Data(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}

void Selsort :: ordenar_Data(){
    int min, aux;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        aux = arr[i];
        arr[i] = arr[min];
        arr[min] = aux;
    }
}
