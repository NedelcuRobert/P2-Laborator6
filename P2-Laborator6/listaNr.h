#include <iostream>

using namespace std;

class CListaNr
{
private:
	class SNod {
	private:
		int nr;
		SNod *urm;
		SNod();
		SNod(int n);
		friend class CListaNr;
	}nod;
	SNod* primul;
public:
	CListaNr() { primul = NULL; }
	void adaugare_nr(int n);
	void stergere_nr(int n);
	void eliminare_dupa_valoare(int n);
	void media_aritmetica();
	void afisare_nr();
};

