#include <stdio.h>
#include <iostream>
#include "retangulo.h"
using namespace std;

Retangulo::Retangulo(int largura, int comprimento) {
    this->largura = largura;
    this->comprimento = comprimento;
}
void Retangulo::calculaEImprimeArea() {
    cout << "Area do retangulo: " << (this->largura) * (this->comprimento) << endl;
}
