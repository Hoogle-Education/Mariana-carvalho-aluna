#include <iostream>
#define MAX 100

using namespace std;

int main(){

  long anterior, atual, soma=0;
  int n;

  cin >> n;

  anterior = 2; // caso i = 1
  soma += anterior;

  for(int i=2; i<=n; i++){
    atual = 2*i*anterior; // 2*i * (2^(î-1)*(i-1)!)
    soma += atual; // acumulando // soma = soma + atual
    anterior = atual; 
  }

  // i=2
  // 2 + 4*2 = 10

  cout << soma << endl;

  return 0;
}