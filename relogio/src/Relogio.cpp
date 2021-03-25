#include "Relogio.h"
#include <iostream>
using namespace std;

Relogio::Relogio(int horas, int minutos, int segundos)
{
	this->horas = horas;
	this->minutos = minutos;
	this->segundos = segundos;
}

void Relogio::exibirHoras()
{
	cout << "Horario: " << this->horas << ":" << this->minutos << ":" << this->segundos << endl;
}
