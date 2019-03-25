#include <iostream>
#define MAX 100
using namespace std;


void intersec(int A[MAX+1],int B[MAX+1],int C[MAX+1]){

  int cont = 0;

  for (int i = 1;i < A[0]+1; i++) {
    for (int j = 1;j < B[0]+1; j++){

      if(A[i] == B[j]){
        C[i] = A[i];
        cont = cont +1;
      }
    }
  }

  C[0] = cont;

  for (int i = 0; i < C[0] +1; i++) {
    cout <<C[i]<<" ";
  }

  cout<<'\n';

}

int main() {

  int A[MAX+1],B[MAX+1],C[MAX+1],n;
  cout<< "digite o numero de elementos do primeiro vetor"<<endl;
  cin>>n;
  cout << "prencha o vetor" << '\n';
  for (int i = 1; i < n+1; i++) {
    cin >> A[i];
  }
  A[0] = n;

  cout<< "digite o numero de elementos do segundo vetor"<<endl;
  cin >> n;
  cout << "prencha o vetor" << '\n';

  for ( int i = 1; i < n+1; i++) {
    cin >>B[i];
  }
  B[0] = n;

  cout<<'\n';


  for (int i = 0; i < A[0]+1; i++) {
    cout <<A[i]<<" ";
  }

  cout<<'\n';

  for (int i = 0; i < B[0]+1; i++) {
    cout <<B[i]<<" ";
  }

  cout<<'\n';

  intersec(A,B,C);

  return 0;
}
