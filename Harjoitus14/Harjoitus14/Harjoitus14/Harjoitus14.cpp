/*
Harjoitus 14
Sami Liimatainen
IIO14S1
Versio 1.0
21.10.2014


Tee ohjelma, joka kysyy henkilötietosi seuraavasti :
Anna(kaikki) etunimesi(merkkijono) :
Anna kengannumero(kokonaisluku) :
Anna sukunimi(merkkijono) :
Anna koulumatka(reaaliluku) :
Anna osoitteesi :
Anna postinumero :

Ohjelma tulostaa tiedot seuraavasti :
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

Käytä C++:n cin - ja cout - olioita ohjelman toteuttamiseen.*/

#include <iostream>
using namespace std;
int main()
{
	char ETUNIMET[50];
	char SUKUNIMI[30];
	char OSOITE[30];
	int POSTINUMERO;
	int KENGANNUMERO;
	float KOULUMATKA;

		cout << "Anna kaikki etunimesi :";
		cin.get(ETUNIMET, 50);
		cin.get();

		cout << "Anna sukunimesi :";
		cin.get(SUKUNIMI, 30);
		cin.get();

		cout << "Anna osoitteesi :";
		cin.get(OSOITE, 30);
		cin.get();

		cout << "Anna postinumerosi :";
		cin >> POSTINUMERO;

		cout << "Anna koulumatkasi kilometreinä :";
		cin >> KOULUMATKA;

		cout << "Anna kengannumerosi :";
		cin >> KENGANNUMERO;

		cout << SUKUNIMI << ' ' << ETUNIMET << endl;
		cout << OSOITE << endl;
		cout << POSTINUMERO << endl;
		cout << KENGANNUMERO << ' ' << KOULUMATKA << "km" << endl;
}