#include <iostream>
using namespace std;
#include "Nodo.h"

class Lista{
    private:
        Nodo* head;
        Nodo* tail;
        int currentSize;    

    public:
        Lista();
        ~Lista();
        int size();
        void addfirst(int element);
        //int first();
        void addLast(int element);
        //int last();
        void add(int position, int value);
};