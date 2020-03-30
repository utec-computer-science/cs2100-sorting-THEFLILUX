#include <iostream>
#include "Inssort.h"
#include "Selsort.h"
#include "Bubsort.h"
#include "Shesort.h"
using namespace std;

int main(){
    cout<<"\n*****Bubble Sort*****\n";
    Bubsort obj3{};
  
    obj3.insert_Data();
    obj3.ordenar_Data();
    obj3.mostrar_Data();
  
    cout<<"\n*****Shell Sort*****\n";
    Shesort obj4{};
  
    obj4.insert_Data();
    obj4.ordenar_Data();
    obj4.mostrar_Data();
}
