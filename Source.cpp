#include <iostream>

using namespace std;


void ler_matriz(int** m, int l, int c) {
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "informe os numeros da posição[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
     }
}


void encontar(int** m, int l, int c, int ele) {
    bool encontaraqui = false;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == ele)
            {

                
                cout << "o elemento foi encontrado na posicao: [" << i << "][" << j << "]";
                encontaraqui = true;
            }
            
            }
        }
    if (!encontaraqui)
    {
        cout << "o valor nn foi encontrado na matriz";

        }
     }




int main() {
    int l, c;

    cout << "informe a quantidade de linhas: ";
    cin >> l;
    cout << "informe a quantidade de colunas: ";
    cin >> c;


    int** matriz = new int* [l];
    for (int i = 0; i < l; i++)
    {
        matriz[i] = new int[c];
    }




    ler_matriz(matriz, l, c);

    int elemento;
    cout << "digite o elemento que vc quer buscar: ";
    cin >> elemento;

    encontar(matriz, l, c, elemento);
}