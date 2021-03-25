#include <stdio.h>
#include <iostream>
#include "retangulo.h"
using namespace std;

int main() {
	int l;
	int c;
	cout << "Diga o valor inteiro para largura do retangulo: ";
	cin >> l;
	cout << "Diga o valor inteiro para  comprimento do retangulo: ";
	cin >> c;
	Retangulo* r;
	r = new Retangulo(l, c);
	r->calculaEImprimeArea();
	cout << endl;
	system("PAUSE");
	return 0;
}
