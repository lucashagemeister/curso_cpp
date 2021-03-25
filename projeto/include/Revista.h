#pragma once

class Revista{
public:
	Revista();
	Revista(unsigned int codigo,char titulo[], char editora[], unsigned int mes, unsigned int ano);
	~Revista();

	void setCodigo(unsigned int codigo);
	unsigned int getCodigo();

	void setTitulo(char titulo[]);
	char* getTitulo();

	void setEditora(char editora[]);
	char* getEditora();

	void setMes(unsigned int mes);
	unsigned int getMes();

	void setAno(unsigned int ano);
	unsigned int getAno();

private:
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int mes;
	unsigned int ano;

};

