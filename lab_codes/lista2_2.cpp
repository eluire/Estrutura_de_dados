#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void split(vector<int> &v,int n){

  int r;
  int cont =0;

  while(n!=0)
  {
    r=n%10;
    n=n/10;

    v.push_back(r);
  }
  reverse(v.begin(),v.end());
}
void miolo(vector<int> v){

  if(v.size() == 1 || v.size() == 2 || v.size() == 0){
    cout <<0<< '\n';
  }
  else{
    for (int i = 1; i < v.size()-1; i++) {
      cout <<v[i]<<" ";
    }
  }
}
void palindromo(int n){

}
int main() {

  int n;
  vector<int> v;

  cout << "digite um numero" << '\n';
  cin >> n;

  split(v,n);

  cout<<"primeiro digito = "<< v.front()<<'\n';
  cout<<"ultimo digito = "<< v.back()<<'\n';
  cout<<"miolo = ";
  miolo(v);
  return 0;
}
/*
int *it;
it = new int;

it[0] = 1;
it[1] = 2;

cout <<*it<<*it+1<< '\n';
*/
