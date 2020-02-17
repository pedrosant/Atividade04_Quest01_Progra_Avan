#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

float quantidadeTintas24L(float area);
float quantidadeTintas54L(float area);

int main() {
	setlocale(LC_ALL, "Portuguese");
	float valorArea = 0;
	float tinta24L = 91;
	float tinta54L = 23;
	float tinta24L54L = 0;
	float resultado = 0;
	float valorTinta = 0;
	float quantidadeTintas = 0;
	float metros24L = 0;
	float metros54L = 0;
	float validador = 0;
	float valorArea24Tintas = 0;

	cout << "A loja trabalha com latas de tinta de:" << :: endl;
	cout << "24 litros, vendidas a R$91,00 cada e" << ::endl;;
	cout << "5.4 litros, vendidas a R$23,00 cada" << ::endl;

	cout << "Qual o valor em (m²) a ser pintado ? " << ::endl;

	cin >> valorArea;

	resultado = quantidadeTintas24L(valorArea);
	quantidadeTintas = ceil(resultado);
	valorTinta = (quantidadeTintas * tinta24L);
	printf("%.0f lata(s) de 24 Litros: R$ %.2f " "\n", quantidadeTintas, valorTinta);

	resultado = quantidadeTintas54L(valorArea);
	quantidadeTintas = ceil(resultado);
	valorTinta = (quantidadeTintas * tinta54L);
	printf("%.0f lata(s) de 5,4 Litros: R$ %.2f " "\n", quantidadeTintas, valorTinta);

	resultado = quantidadeTintas24L(valorArea);
	quantidadeTintas = ceil(valorArea);

	while (validador < valorArea){
		validador = metros24L;
		validador += (24 * 7);
		if (validador < valorArea) {
			metros24L += (24 * 7);
		}
		valorArea24Tintas = valorArea - metros24L;
	}

	resultado = quantidadeTintas24L(metros24L);
	quantidadeTintas = ceil(resultado);
	valorTinta = (quantidadeTintas * tinta24L);
	tinta24L54L += valorTinta;
	printf ("%.0f lata(s) 24 litros e ", quantidadeTintas);


	resultado = quantidadeTintas54L(valorArea24Tintas);
	quantidadeTintas = ceil(resultado);
	valorTinta = (quantidadeTintas * tinta54L);
	tinta24L54L += valorTinta;
	printf("%.0f lata(s) 5,4 litros: R$ %.2f \n", quantidadeTintas, tinta24L54L);

	system("pause");
}


float quantidadeTintas24L(float area) {
	float total = 0;
	total = area / (24 * 7);
	return total;
}

float quantidadeTintas54L(float area) {
	float total = 0;
	total = area / (5.4 * 7);
	return total;
}


