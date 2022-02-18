#include <iostream>
#include <string>
#define MAX 250
#define MAXCHAR 350

using namespace std;

bool alfabeto[MAX];

string removerRepetidos(string s){

  string aux = "";

  for(int i=0; i<s.size(); i++){

    int numericChar = (int)s[i]; 
    // valor numérico associado ao caracter
    // tabela ASCII

    if( alfabeto[numericChar] == false ){
      aux += s[i];
      alfabeto[numericChar] = true;
    }

  }

  return aux;
}

int main(){

  string s;
  getline(cin, s);

  cout << removerRepetidos(s) << endl;

  return 0;
}
