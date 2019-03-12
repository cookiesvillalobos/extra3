#include "list.h"

using namespace std;

// Constructor por defecto
template <typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al final
template<typename T>
void List<T>::add_end(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}

// Eliminar todos los nodos
template<typename T>
void List<T>::del_all()
{
    m_head->delete_all();
    m_head = 0;
}

// Eliminar por posición del nodo
template<typename T>
void List<T>::del_by_position(int pos)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}


// Llenar la Lista aleatoriamente para enteros
template<typename T>
void List<T>::fill_random(int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        add_end(rand() % 100);
    }
}


// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = m_head;
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
template<typename T>
int List<T>::search(int pos)
{
        int bus = 0;
        Node<T> *temp = m_head;
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





template<typename T>
List<T>::~List() {}