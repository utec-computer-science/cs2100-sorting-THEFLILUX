#include <iostream>
#import "Shesort.h"
using namespace std;

int main(){
    cout<<"\n*****Shell Sort*****\n";
    Shesort obj4{};
    obj4.insert_Data();
    obj4.ordenar_Data();
    obj4.mostrar_Data();
}