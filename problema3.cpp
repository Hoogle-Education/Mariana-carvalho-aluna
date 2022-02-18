#include <iostream>
#define MAX 50

using namespace std;
struct Produto
{
    int codigo;
    double valor;
};

Produto maisCaro(Produto VP[MAX], int n)
{
    Produto maisCaro;
    maisCaro.codigo = VP[0].codigo;
    maisCaro.valor = VP[0].valor;

    int cont, indice;

    for(int i=0; i<n; i++)
    {
        if(VP[i].valor > maisCaro.valor)
        {
            maisCaro.valor = VP[i].valor;
            maisCaro.codigo = VP[i].codigo;
            indice=i;
        } 

    }

    return maisCaro;
}

int main()
{

    int n;
    cin >> n;
    Produto VP[MAX];

    //Produto MC;
    for(int i=0; i<n; i++)
    {
        cin >> VP[i].codigo;
        cin >> VP[i].valor;
    }
    
    Produto MC = maisCaro(VP, n);

    cout << "valor = R$" << MC.valor << ",00 || codigo: " << MC.codigo << endl;

    return 0;
}
