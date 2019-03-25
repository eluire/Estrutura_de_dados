#include <iostream>
using namespace std;

bool divisao(int &m,int &n, int d){

  if(d % m == 0 || d % n == 0){
    m = d/m;
    n = d/n;
    return true;
  }
  else{
    return false;
  }
}
int main() {

  int m,n,d;

  cout<<"digite 3 numeros inteiros d,m,n respectivamente"<<'\n';
  cin>>d;
  cin>>m;
  cin>>n;

  if(divisao(m,n,d) == true){
    cout <<"o numero "<<d<<"divide o numero m ou n"<<'\n';
    cout << "quociente da divisão por m = " <<m<<'\n';
    cout << "quociente da divisão por n = " <<n<<'\n';
  }
  else{
    cout << "o numero d nao e divisivel por m nem por n" << '\n';
  }


  return 0;
}
