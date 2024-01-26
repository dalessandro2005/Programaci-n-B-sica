#include <iostream>
using namespace std;
int main()
{
  int Num[10],suma=0,promedio=1;
  
  for (int i = 0; i < 10; i++)
  {
    cout << "ingrese valor " << i +1 << endl;
    cin >> Num[i];
    suma = suma + Num[i];   
  }
  promedio = suma/10;
  cout<<"Numeros mayores al promedio"<<endl;
  cout<<"Promedio = "<<promedio<<endl;
  for(int j=0 ; j<10; j++){
  	if(Num[j]>promedio){
  		cout<<Num[j]<<endl;
	  }
  }
  return 0;
}