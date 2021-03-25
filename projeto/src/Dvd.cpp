#include "Dvd.h"
#include <string.h>
#pragma warning(disable:4996) 

Dvd::Dvd() {

}

Dvd::Dvd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[]) {
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setDiscos(discos);
	this->setDuracao(duracao);
	this->setRegiao(regiao);
	this->setLegendas(legendas);
}

Dvd::~Dvd(){

}

void Dvd::setCodigo(unsigned int codigo){
	this->codigo = codigo;
}

unsigned int Dvd::getCodigo(){
	return this->codigo;
}

void Dvd::setTitulo(char titulo[]){
	strcpy(this->titulo, titulo);
}

char* Dvd::getTitulo(){
	return this->titulo;
}

void Dvd::setDiscos(unsigned int discos){
	this->discos = discos;
}

unsigned int Dvd::getDiscos(){
	return this->discos;
}

void Dvd::setDuracao(unsigned int duracao){
	this->duracao = duracao;
}

unsigned int Dvd::getDuracao(){
	return this->duracao;
}

void Dvd::setRegiao(unsigned int regiao){
	this->regiao = regiao;
}

unsigned int Dvd::getRegiao(){
	return this->regiao;
}

void Dvd::setLegendas(char legendas[]){
	strcpy(this->legendas, legendas);
}

char* Dvd::getLegendas(){
	return this->legendas;
}
