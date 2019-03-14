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
    } else {
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
        collector2->setFree(searchValAd(value));
        collector2->collect();
        m_head = temp->next;
        length--;
    }else if(temp1->data == value){
        if(temp1->next != nullptr){
            Node *aux_node = temp1;
            collector2->setFree((searchValAd(value)));
            collector2->collect();
            temp->next = temp1->next;
            delete aux_node;
            length--;
        } else{
            collector2->setFree((searchValAd(value)));
            collector2->collect();
            cout <<"\n";
            cout <<temp->data;
            cout <<"\n";
            temp->next = nullptr;
            length--;
        }

    }else{
        temp = temp->next;
        temp1 = temp1->next;
    }

}

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

void List::printCL() {
    collector2->printL();

}








