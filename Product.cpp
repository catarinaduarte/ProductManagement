#include <iostream>

using namespace std;

class Produto
{
private:
    string nome;
    double preco;

public:
    string getNome();
    double getPreco();
    void setNome(string nome);
    void setPreco(double preco);
};

string Produto::getNome() {
    return nome;
}

double Produto::getPreco() {
    return preco;
}

void Produto::setNome(string nome) {
    this->nome = nome;
}
void Produto::setPreco(double preco) {
    this->preco = preco;
}

int main(void) {
    Produto p1 = Produto();
    p1.setNome("Shampoo");
    p1.setPreco(10.58);
    cout << "Nome  = " << p1.getNome() << endl;
    cout << "Preco = " << p1.getPreco() << endl;
}