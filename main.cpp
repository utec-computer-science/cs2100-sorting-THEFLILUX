#include <iostream>
#include "Inssort.h"
#include "Selsort.h"
using namespace std;

int main(){
    cout<<"\n*****Insertion Sort*****\n";
    Inssort obj1{};
  
    obj1.insert_Data();
    obj1.ordenar_Data();
    obj1.mostrar_Data();
  
    cout<<"\n*****Selection Sort*****\n";
    Selsort obj2{};
  
    obj2.insert_Data();
    obj2.ordenar_Data();
    obj2.mostrar_Data();
}
