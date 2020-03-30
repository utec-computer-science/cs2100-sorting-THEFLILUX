//
// Created by theflilux on 30/03/20.
//

#include <iostream>
#include "Bubsort.h"
using namespace std;

void Bubsort :: insert_Data(){
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void Bubsort :: mostrar_Data(){
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<"   ";
    }
}

void Bubsort :: ordenar_Data(){
    int aux;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (arr[j]>arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}
