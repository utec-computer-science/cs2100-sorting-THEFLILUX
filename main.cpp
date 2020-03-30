#include <iostream>
using namespace std;
#define MAX 10

class Inssort{
    int n;
    int arr[MAX];
public:
    void insert_Data();
    void mostrar_Data();
    void ordenar_Data();
};

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

int main(){
    cout<<"\n*****Insertion Sort*****\n";
    Inssort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}
