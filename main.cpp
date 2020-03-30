#include <iostream>
using namespace std;
#define MAX 10

class Selsort{
    int n;
    int arr[MAX];
public:
    void insert_Data();
    void mostrar_Data();
    void ordenar_Data();
};

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

int main(){
    cout<<"\n*****Selection Sort*****\n";
    Selsort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}
