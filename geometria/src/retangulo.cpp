#include <stdio.h>
#include <iostream>
#include "retangulo.h"
using namespace std;

Retangulo::Retangulo(unsigned int largura,  unsigned int comprimento) {
    this->setLargura(largura);
    this->setComprimento(comprimento);
}

void Retangulo::setLargura(unsigned int largura){
    this->largura = largura;
}

unsigned int Retangulo::getLargura(){
    return this->largura;
}

void Retangulo::setComprimento(unsigned int comprimento){
    this->comprimento = comprimento;
}

unsigned int Retangulo::getComprimento(){
    return this->comprimento;
}

void Retangulo::calculaEImprimeArea() {
    cout << "Area do retangulo: " << (this->largura) * (this->comprimento) << endl;
}
