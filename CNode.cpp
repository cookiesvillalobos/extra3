//
// Created by kei98 on 12/03/19.
//

#include "CNode.h"


CNode ::CNode()
{
    data = NULL;
    next = NULL;
    free = false;
}

// Constructor por parámetro
CNode::CNode(int* data_)
{
    data = data_;
    next = NULL;
    free = false;
}

// Eliminar todos los Nodos
void CNode::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo

void CNode::print()
{
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
