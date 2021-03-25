#pragma once
class Retangulo{
public:
	Retangulo(int largura, int comprimento);
	
	void setLargura(largura);
	unsigned int getLargura();
	
	void setComprimento(comprimento);
	unsigned int getComprimento();
	
	void calculaEImprimeArea();
private:
	unsgined int largura;
	unsgined int comprimento;
};

