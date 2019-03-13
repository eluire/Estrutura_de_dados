#include <iostream>
using namespace std;

int main(){

  int n;
  int aux;

    cout << "digite o numero de termos da sequência\n";
    cin>>n;

  int v[n];
    cout << "digite os termos:" << '\n';
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      for(int i=0;i<n/2;i++){
          aux = v[i];
          v[i] = v[n-i-1];
          v[n-i-1] = aux;

      }
      '\n';
      for(int i=0;i<n;i++){
          cout<<v[i]<<" ";
      }
      '\n';
return 0;
}
