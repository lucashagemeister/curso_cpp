#pragma once
class Retangulo{
public:
	Retangulo(unsigned int largura, unsigned int comprimento);
	
	void setLargura(unsigned int largura);
	unsigned int getLargura();
	
	void setComprimento(unsigned int comprimento);
	unsigned int getComprimento();
	
	void calculaEImprimeArea();
private:
	unsgined int largura;
	unsgined int comprimento;
};

