#include <iostream>
#include "Bubsort.h"
using namespace std;


int main(){
    cout<<"\n*****Bubble Sort*****\n";
    Bubsort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}
