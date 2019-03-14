//
// Created by viviana on 08/03/19.
//<>
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "collector.h"


using namespace std;


class Node
{
public:
    Node();
    Node(int);

    Node *next;
    int data;

    void delete_all();
    void print();
    void* operator new(size_t);
    void operator delete(void* p);


};

#endif // NODE_H