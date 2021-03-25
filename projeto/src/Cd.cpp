#include "Cd.h"
#include <string.h>
#pragma warning(disable:4996) 

Cd::Cd(){

}

Cd::Cd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas){
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setDiscos(discos);
	this->setDuracao(duracao);
	this->setFaixas(faixas);
}

Cd::~Cd(){

}

void Cd::setCodigo(unsigned int codigo){
	this->codigo = codigo;
}

unsigned int Cd::getCodigo()
{
	return this->codigo;
}

void Cd::setTitulo(char titulo[]){
	strcpy(this->titulo, titulo);
}

char* Cd::getTitulo(){
	return this->titulo;
}

void Cd::setDiscos(unsigned int discos){
	this->discos = discos;
}

unsigned int Cd::getDiscos(){
	return this->discos;
}

void Cd::setDuracao(unsigned int duracao){
	this->duracao = duracao;
}

unsigned int Cd::getDuracao(){
	return this->duracao;
}



void Cd::setFaixas(unsigned int faixas){
	this->faixas = faixas;
}

unsigned int Cd::getFaixas(){
	return this->faixas;
}
