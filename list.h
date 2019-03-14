//
// Created by viviana on 08/03/19.
//<>
#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "node.h"

using namespace std;


class List
{
public:
    List();

    int m_num_nodes;

    void add_end(int);
    void del_all();
    void del_by_position(int);
    void fill_random(int);
    void print();
    int search(int);
    int length;
    int* searchValAd(int);
    void deleteVal(int);
    void printCL();

private:
    Node *m_head;

};

#endif // LIST_H