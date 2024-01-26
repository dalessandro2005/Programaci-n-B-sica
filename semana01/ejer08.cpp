#include <iostream>

using namespace std;

int main(){

int edad;

cout << "ingrese su edad (mayor que 0) : ";

cin>>edad;

if(edad > 0 && edad <100){

if(edad>=18){

cout<<"usted es mayor de edad"<<endl;

}else{

cout<<"usted es menor de edad"<<endl;

}

}else{

cout<<"edad invalida"<<endl;

}

return 0;

}