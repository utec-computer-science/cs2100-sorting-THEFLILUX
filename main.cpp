#include <iostream>
using namespace std;

class Mersort{
public:
    static void ordenar_Data(int arr[], int primero, int ultimo);
    static void merge(int arr[], int izq_primero, int izq_ultimo, int der_primero, int der_ultimo);
};

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

int main(){
    int n;
    cout<<"\n****Merge Sort*****\n";
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Mersort obj{};
    obj.ordenar_Data(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}
