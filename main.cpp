#include <iostream>
using namespace std;
#define MAX 10

class Shesort{
    int n;
    int arr[MAX];
public:
    void insert_Data();
    void mostrar_Data();
    void ordenar_Data();
};

void Shesort :: insert_Data(){
    cout<<"Ingresa la cantidad de elementos a ingresar: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void Shesort :: mostrar_Data(){
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<"   ";
    }
}

void Shesort :: ordenar_Data(){
    int part,i, aux;
    bool band;

    part = n;

    while(part > 1){
        part = part/2;
        band = true;
        while(band){
            band = false;
            i=0;
            while((i+part)<=n){
                if(arr[i]>arr[i+part]){
                    aux = arr[i];
                    arr[i]=arr[i+part];
                    arr[i+part] = aux;
                    band = true;
                }
                i++;
            }
        }
    }
}

int main(){
    cout<<"\n*****Shield Sort*****\n";
    Shesort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}