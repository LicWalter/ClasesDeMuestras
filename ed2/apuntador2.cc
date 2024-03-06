#include <iostream>
using namespace std;

int main(){

    int a;
    int b = 0;
    int c[4] = {1,2,3,4};
    a = b;
    int *apuntador = &a;
    *apuntador = 3;
    apuntador = &b;
    *apuntador = 13;
    apuntador = &c[a];
    *apuntador = 20;
    
    return 0;
}