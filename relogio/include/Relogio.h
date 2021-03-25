#pragma once

class Relogio
{
public:
	Relogio(int horas, int minutos, int segundos);
	
	void setHoras(unsigned int horas);
	unsigned int getHoras();
	
	void setMinutos(unsigned int minutos);
	unsigned int getMinutos();
	
	void setSegundos(unsigned int segundos);
	unsigned int getSegundos();

	void exibirHoras();
private:
	unsigned int horas;
	unsigned int minutos;
	unsigned int segundos;
	
	
};

