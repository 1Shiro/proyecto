#include "Nodo.h"

Nodo::Nodo(Nodo* next){
    this->sizeActual = 0; 
    this->sizeMax = 2;
    this->value = new int[2];
    this->next = next;
}

int Nodo::getElement(int position){
    return value[position];
}

Nodo* Nodo::getNext(){
    return next;
}

void Nodo::setNext(Nodo *next){
    this->next = next;
}

void Nodo::setValue(int position, int value){
    this->value[position] = value;
}

int Nodo::getSizeActual(){
    return sizeActual;
}
int Nodo::getSizeMax(){
    return sizeMax;
}
