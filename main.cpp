#include <iostream>
using namespace std;

class Quisort{
public:
    static void ordenar_Data(int arr[], int primero, int ultimo);
};

void Quisort :: ordenar_Data(int *arr, int primero, int ultimo){
    int primeraPos, ultimaPos, central;
    int pivote;
    central = (primero + ultimo)/2;
    pivote = arr[central];
    primeraPos = primero;
    ultimaPos = ultimo;
    do{
        while(arr[primeraPos] < pivote) primeraPos++;
        while(arr[ultimaPos] > pivote) ultimaPos--;
        if(primeraPos<=ultimaPos)
        {
            int temp;
            temp=arr[primeraPos];
            arr[primeraPos]=arr[ultimaPos];
            arr[ultimaPos]=temp;
            primeraPos++;
            ultimaPos--;
        }
    }while(primeraPos<=ultimaPos);

    if(primero<ultimaPos){
        ordenar_Data(arr,primero,ultimaPos);
    }
    if(primeraPos<ultimo){
        ordenar_Data(arr,primeraPos,ultimo);
    }
}

int main(){
    int n;
    cout<<"\n****Quick Sort*****\n";
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Quisort obj{};
    obj.ordenar_Data(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
}