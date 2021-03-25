#include "retangulo.h"

Retangulo::Retangulo(int largura, int comprimento) {
    this->largura = largura;
    this->comprimento = comprimento;
}
int Retangulo::calculaArea(){
    return (this->largura)*(this->comprimento);
}
