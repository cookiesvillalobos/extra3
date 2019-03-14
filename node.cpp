//
// Created by viviana on 08/03/19.
//<>

#include "node.h"

// Constructor por defecto

collector* collector1 = collector::getInstance();

Node ::Node()
{
    data = -1;
    next = nullptr;
}

// Constructor por parámetro
Node ::Node(int data_)
{
    data = data_;
    next = nullptr;
}



// Eliminar todos los Nodos
void Node ::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo

void Node ::print() {
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}


void *Node::operator new(size_t sz) {

    if(collector1->free > 0){
        void* p;
        p = collector1->getFreeAd();
        return p;

    }else {
        void* p = malloc(sz);
        return p;
    }

}

void Node::operator delete(void *p) {

}

