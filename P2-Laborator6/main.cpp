#include "listaNr.h"

int main() {

	CListaNr lista;
	
	int optiune;

	do {
		cout << "1.Adaugare numar:\n";
		cout << "2.Stergere numar:\n";
		cout << "3.Eliminare numerele mai mici ca o valoare:\n";
		cout << "4.Media aritmetica a numerelor:\n";
		cout << "5.Afisare lista:\n";
		cout << "6.Iesire:\n";
		cout << "Introduceti optiunea dvs:" << endl;
		cin >> optiune;
		switch (optiune) {
		case 1:cout << "\nAdaugare numar:";
			int nr;
			cout << "\nIntroduceti numar:";cin >> nr;
			lista.adaugare_nr(nr);
			break;
		case 2:cout << "\nStergere numar:";
			int n;
			cout << "\nIntroduceti numar:";cin >> n;
			lista.stergere_nr(n);
			break;
		case 3:cout << "\nEliminare numerele mai mici ca o valoare:";
			int val;
			cout << "\nIntroduceti valoare:";cin >> val;
			lista.eliminare_dupa_valoare(val);
			break;
		case 4:"\nMedia aritmetica:";
			lista.media_aritmetica();
			break;
		case 5:"\nAfisare lista";
			lista.afisare_nr();
			break;
		case 6:exit(1);
		default:cout << "\nIntroduceti o optiune valida\n";
		}
		cout << "\n";
	}while (1);
	return 0;
}