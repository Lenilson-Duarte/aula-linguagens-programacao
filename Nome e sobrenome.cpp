#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    string sobrenome;

    cout << "Digite seu nome: " << endl;
    cin >> nome;

    cout << "Digite seu sobrenome: " << endl;
    cin >> sobrenome;

    cout << sobrenome << ", " << nome[0] << nome[nome.length() - 1] << endl;

    return 0;
}