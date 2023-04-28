#include "Lista.h"

Lista::Lista(){
    this->head = new Nodo(nullptr);
    this->tail = head;
    this->currentSize = 1;
}

Lista::~Lista(){
    
}

int Lista::size(){
    return currentSize;
}

void Lista::addfirst(int element){
    if(head->getSizeActual() == head->getSizeMax() && head->getNext()->getSizeActual() == head->getSizeMax()){
        Nodo* aux = new Nodo(head->getNext());
        head->setNext(aux);
        int aux2 = head->getElement(head->getSizeMax());
        aux->setValue(0,aux2);
        for(int i = head->getSizeMax(); i >= 0;i--){
            head->setValue(i,i-1);
        }
        head->setValue(0,element);
    }
    if(head->getSizeActual() == head->getSizeMax() && head->getNext()->getSizeActual() != head->getSizeMax()){
        Nodo* actual = head->getNext();
        for(int i = actual->getSizeActual(); i >= 0; i--){
            actual->setValue(i,i-1);
        }
        actual->setValue(0,head->getElement(head->getSizeMax()));
    }

}

void Lista::addLast(int element){
}

void Lista::add(int position, int value)
{
}
