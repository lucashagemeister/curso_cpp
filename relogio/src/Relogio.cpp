#include "Relogio.h"
#include <iostream>
using namespace std;

Relogio::Relogio(int horas, int minutos, int segundos){
	this->setHoras(horas);
	this->setMinutos(minutos);
	this->setSegundos(segundos);
}

void Relogio::setHoras(unsigned int horas){
	this->horas = horas;
}

unsigned int Relogio::getHoras(){
	return this->horas;
}
	
void Relogio::setMinutos(unsigned int minutos){
	this->minutos = minutos;
}
unsigned int Relogio::getMinutos(){
	return this->minutos;
}
	
void Relogio::setSegundos(unsigned int segundos){
	this->segundos = segundos;
}
unsigned int Relogio::getSegundos(){
	return this->segundos;
}

void Relogio::exibirHoras(){
	
	cout << "Horario: " << this->horas << ":" << this->minutos << ":" << this->segundos << endl;
}
