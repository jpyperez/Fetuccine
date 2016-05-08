#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int atual, prox, ant, i, n;

    cout << "Sequencia Fetuccine" << endl;
    cout << "Digite o primeiro valor: ";
    cin >> ant;
    cout << "Digite o segundo valor: ";
    cin >> atual;
    cout << "Digite a posicao: ";
    cin >> n;
    cout << ant << endl;

    for (i = 0; i < n - 1; i++)
    {
        if (i % 2 == 1)
        {
            prox = atual - ant;
        }
        else
        {
            prox = atual + ant;
        }
        cout << atual << endl;
        ant = atual;
        atual = prox;

    }

    cout << "\n" << endl;
    system("pause");
    return 0;
}
