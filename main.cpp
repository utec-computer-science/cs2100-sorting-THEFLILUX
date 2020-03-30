#include <iostream>
#include "Mersort.h"
using namespace std;

int main(){
    cout<<"\n****Merge Sort*****\n";
    int n;
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Mersort::ordenar_Data(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}
