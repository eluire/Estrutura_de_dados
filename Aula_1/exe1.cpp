#include<iostream>
using namespace std;
int main(){
int n ,y=1;
int contaDigitos =0;
int valor = n;
    cout<<"digite um numero inteiro "<<endl;
    cin>>n;
    if (n == 0){
      contaDigitos = 1;
      return 0;
    }

        else
        while (n!= 0)
          {
        contaDigitos = contaDigitos + 1;
        n = n/ 10;
}
    for (int i=0;i<contaDigitos;i++){
        y *=10;
        if(n>y){
        if(n %y == n/y){
        cout<<"ok";
        break;
        }
        else if(n %y != n/y) {
        cout<<"n tem numero iguais consecutivos"<<endl;
        }
        }

    }
}







