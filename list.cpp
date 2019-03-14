#include "list.h"

using namespace std;

collector* collector2  = collector::getInstance();
// Constructor por defecto
List::List()
{
    m_num_nodes = 0;
    m_head = nullptr;
}

// Insertar al final
void List ::add_end(int data_)
{
    Node  *new_node = new Node(data_);
    collector2->add(&new_node->data);
    Node  *temp = m_head;

    if (!m_head) {
        m_head = new_node;
        cout <<"entra 1 \n";
        this->print();
    } else {
        cout <<"entra al else de add_end \n";
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    m_num_nodes++;
    length++;
}

// Eliminar todos los nodos

void List ::del_all()
{
    m_head->delete_all();
    m_head = 0;
    length = 0;
}

void List::deleteVal(int value) {
    Node *temp = m_head;
    Node *temp1 = temp->next;
    if(temp == nullptr){
        cout << "Value not founded";
    }
    if(m_head->data == value){
        m_head->data = 0;
        delete m_head;
        collector2->setFree((int*) m_head);
        collector2->collect();
        m_head = temp1;
        length--;
    }else if(temp1->data == value){
        Node *aux_node = temp1;
        temp->next = temp1->next;
        aux_node->data = 0;
        delete aux_node;
        collector2->setFree((int*) aux_node);
        collector2->collect();
    }else{
        temp = temp->next;
        temp1 = temp1->next;
    }

}

/**
// Eliminar por posición del nodo
void List ::del_by_position(int pos)
{
    Node  *temp = m_head;
    Node  *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
        length--;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Node  *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                m_num_nodes--;
                length--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}

**/
// Llenar la Lista aleatoriamente para enteros

void List ::fill_random(int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        add_end(rand() % 100 +1);
    }
}


// Imprimir la Lista

void List ::print()
{
    Node  *temp = m_head;
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

// Buscar el dato de un nodo

int List ::search(int pos)
{
        int bus = 0;
        Node  *temp = m_head;
        if (pos < 0) {
            cout << "Error " << endl;
        } else {
            while (temp) {
                if (bus == pos){
                    int lbus = temp->data;
                    printf("%i" ,lbus);
                    return lbus;

                }

                //if (!temp->next) cout << "NULL";
                temp = temp->next;
                bus++;
            }
        }
        cout << endl << endl;
}

int* List ::searchValAd(int val) {
    Node  *temp = m_head;
    while (temp){
        if(val == temp->data){
            int* address = &temp->data;
            return address;
        }else{
            temp = temp->next;
        }

    }
    return nullptr;
}

List ::~List() {}






