#include <iostream>
using namespace std;

double total(double bApel, double bJeruk, double bSemangka) {
	double apel = 24000;
	double jeruk = 32500;
	double semangka = 8000;
	double totalBerat = bApel + bJeruk + bSemangka;
	double hasil;

	double total = (apel * bApel) + (jeruk * bJeruk) + (semangka * bSemangka);


	if (totalBerat >= 10) {
		hasil = (5.0 / 100) * total;
	}
	else if (totalBerat >= 8) {
		hasil = (2.0 / 100) * total;
	}
	else {
		hasil = total;
	}

	return total - hasil;
}
