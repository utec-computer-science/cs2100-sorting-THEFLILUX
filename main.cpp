#include <iostream>
#include "Bubsort.h"
using namespace std;

int main(){
    cout<<"\n*****Bubble Sort*****\n";
    Bubsort obj3{};

    obj3.insert_Data();
    obj3.ordenar_Data();
    obj3.mostrar_Data();
}
