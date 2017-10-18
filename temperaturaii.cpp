#include<iostream>
using namespace std;

int c,f;

int main() {
  cout<<"Hey, dime, ¿Cuál es la temperatura en fahrenheit?"<<endl;
  cin>>f;

  c= 5*(f-32)/9;
cout<<"La tempera afuera es: "<<f<<" en fahrenheit y "<<c<<" en celcius"<<endl;
if (c>=100) {
  cout<<"hace tanto calor que el agua puede llegar a hervir en situaciones normales."<<endl;

} else {
cout<<"no te preocupes, no puedes hervir agua a esta tempera, pero puede que tengas calor o frio, yo no lo se, soy solo un programa"<<endl;
}


  return 0;
}
