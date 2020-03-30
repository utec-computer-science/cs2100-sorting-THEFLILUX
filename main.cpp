#include <iostream>
#include "Bubsort.h"
#include "Inssort.h"
#include "Selsort.h"
#include "Shesort.h"
#include "Mersort.h"
#include "Quisort.h"
using namespace std;

int main(){
    cout<<"\n*****Insertion Sort*****\n";
    Inssort obj1{};
  
    obj1.insert_Data();
    obj1.ordenar_Data();
    obj1.mostrar_Data();
  
    cout<<"\n*****Selection Sort*****\n";
    Selsort obj2{};
  
    obj2.insert_Data();
    obj2.ordenar_Data();
    obj2.mostrar_Data();
  
    cout<<"\n*****Bubble Sort*****\n";
    Bubsort obj3{};

    obj3.insert_Data();
    obj3.ordenar_Data();
    obj3.mostrar_Data();

    cout<<"\n*****Shield Sort*****\n";
    Shesort obj4{};
    obj4.insert_Data();
    obj4.ordenar_Data();
    obj4.mostrar_Data();

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


    cout<<"\n****Quick Sort*****\n";
    int h;
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>h;
    int arr2[h];
    for(int i=0;i<h;i++){
        cin>>arr2[i];
    }

    Quisort::ordenar_Data(arr2,0,h-1);

    for(int i=0;i<h;i++){
        cout<<arr2[i]<<"   ";
    }
}
