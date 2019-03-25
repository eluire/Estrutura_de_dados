#include <iostream>
using namespace std;

bool divisao(int &mmc,int &m,int &n, int d){

  if(d % m == 0 || d % n == 0){
    m = d/m;
    n = d/n;
    if(m >n && m%n ==0){
      mmc = m;
    }
    else if(m<n &&n%m == 0){
      mmc = n;
    }

    return true;
  }
  else{
    mmc = m * n;
    return false;
  }
}
int main(){
    int d,m,n,mmc=0;

    cout<<"digite 3 numeros inteiros d,m,n respectivamente"<<'\n';
    cin>>d;
    cin>>m;
    cin>>n;

    if(divisao(mmc,m,n,d) == true){
      cout <<"o numero "<<d<<"divide o numero m ou n"<<'\n';
      cout << "quociente da divisão por m = " <<m<<'\n';
      cout << "quociente da divisão por n = " <<n<<'\n';
      cout << "o mmc entre m e n = "<<mmc<<'\n';
    }
    else{
      cout << "o numero d nao e divisivel por m nem por n" << '\n';
      cout << "o mmc entre m e n = "<<mmc<<'\n';
    }
  return 0;
}
