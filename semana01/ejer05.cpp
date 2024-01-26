#include <iostream>

using namespace std;

int main()

{

float a,b,c;

float p;

cout<< "Ingrese el valor de a : ";

cin>> a;

cout<< "Ingrese el valor de b :";

cin>> b;

cout<< "Ingrese el valor de c :";

cin>> c;

p= (((a+b)/c)* ((c-a)/b)) +27;

cout<<"El resultado es : "<<p;

return 0;

}