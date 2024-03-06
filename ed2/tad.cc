#include <iostream>
using namespace std;

struct tad
{
    string name; int edad;
};

int main()
{
    unsigned int a [5] = {2147483646, 4, 3, 2, 1};
    tad alumnos[2] = {{"Kevin",18}, {"Melissa",20}};
    float b = 8.5;
    char c = 'a';
    cout<<"================================\n";
    cout<<"Direccion de memoria [0]: "<<a[0]<<endl;
    cout<<"Entero[0]: "<<&a[1]<<endl;
   cout<<"Decimal: "<<&b<<endl;
    cout<<"Caracter: "<<&c<<endl;
    cout<<"================================";
    return 0;
}