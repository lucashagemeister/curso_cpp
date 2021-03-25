#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#include "Livro.h"
#include "Revista.h"
#include "Dvd.h"
#include "Cd.h"

#pragma warning(disable:4996) 

int main() {
	
	
	
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];

	//criando um Livro
	codigo = 1;
	strcpy(titulo, "A Vida de Andre 1");
	strcpy(editora, "Softblue");
	paginas = 425;
	strcpy(isbn, "958-25-6547-568-5");
	Livro* livroAndre;
	livroAndre = new Livro(codigo, titulo, editora, paginas, isbn);
	cout << "(livroAndre) Codigo: " << livroAndre->getCodigo() << endl;
	cout << "(livroAndre) Titulo: " << livroAndre->getTitulo() << endl;
	cout << "(livroAndre) Editora: " << livroAndre->getEditora() << endl;
	cout << "(livroAndre) Paginas: " << livroAndre->getPaginas() << endl;
	cout << "(livroAndre) ISBN: " << livroAndre->getIsbn() << endl;
	delete(livroAndre);
	//criando uma Revista

	//criando um Dvd

	//criando um Cd


	
	return 0;


}
