#include <iostream>
#import "Shesort.h"
using namespace std;

int main(){
    cout<<"\n*****Shell Sort*****\n";
    Shesort obj{};
    obj.insert_Data();
    obj.ordenar_Data();
    obj.mostrar_Data();
}