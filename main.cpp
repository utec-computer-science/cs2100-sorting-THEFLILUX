#include <iostream>
#include "Inssort.h"
using namespace std;

int main(){
    cout<<"\n*****Insertion Sort*****\n";
    Inssort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}
