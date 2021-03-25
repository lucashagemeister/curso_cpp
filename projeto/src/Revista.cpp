#include "Revista.h"
#include <string.h>
#pragma warning(disable:4996) 

Revista::Revista(){

}

Revista::Revista(unsigned int codigo, char titulo[], char editora[], unsigned int mes, unsigned int ano){
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	this->setEditora(editora);
	this->setMes(mes);
	this->setAno(ano);
}

Revista::~Revista() {

}

void Revista::setCodigo(unsigned int codigo){
	this->codigo = codigo;
}

unsigned int Revista::getCodigo(){
	return this->codigo;
}

void Revista::setTitulo(char titulo[]){
	strcpy(this->titulo, titulo);
}

char* Revista::getTitulo(){

	return this->titulo;
}

void Revista::setEditora(char editora[]){
	strcpy(this->editora, editora);
}

char* Revista::getEditora(){

	return this->editora;
}

void Revista::setMes(unsigned int mes){
	this->mes = mes;
}

unsigned int Revista::getMes()
{
	return this->mes;
}

void Revista::setAno(unsigned int ano){
	this->ano = ano;
}

unsigned int Revista::getAno(){
	return this->ano;
}
