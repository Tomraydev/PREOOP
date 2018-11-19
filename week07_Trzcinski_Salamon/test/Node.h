#ifndef Node_h
#define Node_h

class Node{
    public:
        Node();
        Node(int wartosc, Node*);
        Node* next_;
        int data() const { return wartosc_; }
    private:
        int wartosc_;
};

#endif