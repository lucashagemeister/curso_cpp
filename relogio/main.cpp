#include "Relogio.h"
#include <iostream>
using namespace std;

int main()
{


	Relogio* r = new Relogio(12, 03, 16);
	r->exibirHoras();

	cout << endl;
	system("PAUSE");
	return 0;
}
