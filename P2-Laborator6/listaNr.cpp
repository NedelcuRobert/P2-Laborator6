#include "listaNr.h"

CListaNr::SNod::SNod() {
	nr = 0;
	urm = NULL;
}

CListaNr::SNod::SNod(int n) {
	nr = n;
	urm = NULL;
}

void CListaNr::adaugare_nr(int n) {
    SNod* newNode = new SNod(n);

    if (primul == NULL) {
        primul = newNode;
        return;
    }

    SNod* temp = primul;
    while (temp->urm != NULL) {
        temp = temp->urm;
    }
    temp->urm = newNode;
}

void CListaNr::stergere_nr(int n) {
    SNod* temp;

    if (primul == NULL) {
        cout << "Lista goala\n";
        return;
    }
    while (primul != NULL) {
        if (primul->nr == n)
        {
            temp = primul;
            primul = primul->urm;
            delete[] temp;
        }
        else {
            return;
        }
    }
}

void CListaNr::eliminare_dupa_valoare(int n) {
    SNod* temp;

    if (primul == NULL) {
        cout << "Lista goala\n";
        return;
    }
    while (primul!=NULL) {
        if (primul->nr < n)
        {
            temp = primul;
            primul = primul->urm;
            delete[] temp;
        }
        else {
            return;
        }
    }
}

void CListaNr::media_aritmetica() {
    SNod* temp=primul;

    if (temp == NULL) {
        cout << "Lista goala\n";
        return;
    }

    float suma=0.0;
    int var = 0;
    while (temp != NULL) {
        var++;
        suma = suma + temp->nr;
        temp = temp->urm;
    }

    float ma=0.0;
    ma = suma / var;
    cout << "Media aritmetica: " << ma;
}

void CListaNr::afisare_nr() {
    SNod* temp = primul;

    if (primul == NULL) {
        cout << "Lista goala" << endl;
        return;
    }

    while (temp != NULL) {
        cout << temp->nr << " ";
        temp = temp->urm;
    }
    cout << "\n";
}