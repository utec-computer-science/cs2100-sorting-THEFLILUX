#include <iostream>
#include "Selsort.h"
using namespace std;

int main(){
    cout<<"\n*****Selection Sort*****\n";
    Selsort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}
