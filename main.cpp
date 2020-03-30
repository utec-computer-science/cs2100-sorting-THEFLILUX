#include <iostream>
#include "Bubsort.h"
#include "Inssort.h"
#include "Selsort.h"
#include "Shesort.h"
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
  
    cout<<"\n*****Bubble Sort*****\n";
    Bubsort obj3{};

    obj3.insert_Data();
    obj3.ordenar_Data();
    obj3.mostrar_Data();

    cout<<"\n*****Shield Sort*****\n";
    Shesort obj4{};
    obj4.insert_Data();
    obj4.ordenar_Data();
    obj4.mostrar_Data();
}
