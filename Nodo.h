#include <iostream>
using namespace std;

class Nodo{
    private:
        int* value;
        Nodo* next;
        int sizeMax,sizeActual;

    public:
        Nodo(Nodo* next);
        int getElement(int position);
        Nodo* getNext();
        void setNext(Nodo* next);
        void setValue(int position,int value);
        int getSizeActual();     
        int getSizeMax();   
};
