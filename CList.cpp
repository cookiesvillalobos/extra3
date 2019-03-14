//
// Created by kei98 on 12/03/19.
//

#include "CList.h"

using namespace std;

// Constructor por defecto
CList::CList()
{
    m_num_nodes = 0;
    m_head = NULL;
    length = 0;
}

// Insertar al final
void CList::add_end(int* data_)
{
    CNode *new_CNode = new CNode(data_);
    CNode *temp = m_head;

    if (!m_head) {
        m_head = new_CNode;

    } else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_CNode;
    }
    m_num_nodes++;
    length++;
}

// Eliminar todos los nodos
void CList::del_all()
{
    m_head->delete_all();
    m_head = 0;
    length = 0;
}

// Eliminar por posición del nodo

void CList::del_by_position(int pos)
{
    CNode *temp = m_head;
    CNode *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
        length--;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                CNode *aux_CNode = temp1;
                temp->next = temp1->next;
                delete aux_CNode;
                m_num_nodes--;
                length--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}



// Imprimir la Lista

void CList::print()
{
    CNode *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl << endl;
}

int *CList::searchForFree() {
    CNode* temp = m_head;
    while(!temp->free){
        temp = temp->next;
    }
    return temp->data;
}


CList::~CList() {}

CNode *CList::getHead() {
    return this->m_head;
}


