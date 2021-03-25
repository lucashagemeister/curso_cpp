#include "retangulo.h"

Retangulo::Retangulo(int largura, int comprimento) {
    this->largura = largura;
    this->comprimento = comprimento;
}
void Retangulo::calculaEImprimeArea(){
    cout << "Area do retangulo: " << (this->largura)*(this->comprimento) <<endl;
}
