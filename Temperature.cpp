#include<iostream>
using namespace std;

int c,f;

int main() {
  cout<<"Hey, dime, ¿Cuál es la temperatura en fahrenheit?"<<endl;
  cin>>f;

  c= 5*(f-32)/9;
cout<<"La tempera afuera es: "<<f<<"en fahrenheit y "<<c<<" en celcius"<<endl;
if (c>=100) {
  cout<<"hace tanto calor que el agua puede llegar a hervir en situaciones normales, ten cuidado, puedes morir"<<endl;

} else {
  if (c<=0) {
    cout<<"hace tanto frio que el agua puede llegar a congelarse a esa temperatura, ten cuidado, puedes morir"<<endl;
  } else {
    cout<<"Puede que haga frio, puede que haga calor, en situaciones normales el agua es liquida,"<<endl;
    cout<<"pero no me importa, solo soy un programa, encambio tu puedes morir"<<endl;
  }
}


  return 0;
}
