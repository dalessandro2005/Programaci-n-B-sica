#include <iostream>

#include <cmath>

using namespace std;

int main()

{

float a,b,result ;

cout<<" Ingresar a: ";
cin>> a;

cout<<" Ingresar b: ";

cin>> b;

result= (a+b);

cout<<"La suma es: "<<result<<endl ;

result= (a-b);

cout<<"La resta es:"<<result<<endl ;

cout<<"La multiplicacion es : "<<a*b <<endl;

cout<<"La division es : "<<a/b <<endl;

result= fmod(a,b);

cout<<"El modulo es :"<<result;

return 0;
}