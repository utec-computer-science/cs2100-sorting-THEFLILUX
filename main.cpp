#include <iostream>
using namespace std;
#define MAX 10

class Bubsort{
    int n;
    int arr[MAX];
public:
    void insert_Data();
    void mostrar_Data();
    void ordenar_Data();
};

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

int main(){
    cout<<"\n*****Bubble Sort*****\n";
    Bubsort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}
