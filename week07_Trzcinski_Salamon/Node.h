#ifndef Node_h
#define Node_h

class Node{
    public:
        Node();		//domyslny konstruktor
        Node(int wartosc, Node* next);		//stworzy node z wartoscia wartosc i wskaznikiem next do nastepnego elementu
        int data() const {return data_;}		//get-only dla data
        Node* next_;		//wskaznik do nastepnego elementu
	private:
	    int data_;		//wartosc liczbowa elementu
};

#endif
