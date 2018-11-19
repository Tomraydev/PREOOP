#ifndef list_h
#define list_h
#include "Node.h"

class List{
    public:
        List();		//domyslny konstruktor
        List(List &skad);	//tworzy liste bedaca kopia listy skad
        ~List();		//destruktor zwalnia pamiec
        List& insert(int wartosc, bool gdzie = false);		//dodaje wartosc na poczatek (gdzie=1) lub koniec (gdzie=0)
        void print();		//wypisuje liste w konsoli
        Node* find(int wartosc) const;		//zwraca wskaznik do znalezionego elementu lub nullptr, gdy nie istnieje
        Node* getHead() {return head_;}		//get-only dla heada

        static bool Begin;		//statyczne flagi poczatku i konca
        static bool End;
    private:
        Node* head_;			//wskaznik do pierwszego elementu

};

#endif
