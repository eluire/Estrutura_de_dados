#include <iostream>
using namespace std;

void cedulas(int v,int &um,int &cinco,int &dez,int &vinte){
  int aux,aux2,aux3;

  if(v % 20 == 0){
    vinte = v/20;
  }
  else{
    vinte = v/20;
    int aux = v%20;

    if(aux % 10 ==0){
      dez = aux/10;
    }
    else{
      dez = aux/10;
      int aux2= aux%10;

      if(aux2 % 5 ==0){
        cinco = aux2/5;
      }
      else{
        cinco = aux2/5;
        int aux3 = aux2 % 5;

        if(aux3 % 1 ==0){
          um = aux3/1;
        }
      }
    }
  }
}
int main() {
  int v;
  int um=0,cinco=0,dez=0,vinte=0;

  cout << "digite um numero" << '\n';
  cin >>v;

  cedulas(v,um,cinco,dez,vinte);
  cout <<v<<" "<<um<<" "<<cinco<<" "<<dez<<" "<<vinte<<"\n";

  return 0;
}
