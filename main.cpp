#include <iostream>
#include "Quisort.h"
using namespace std;

int main(){
    cout<<"\n****Quick Sort*****\n";
    int n;
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Quisort::ordenar_Data(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}