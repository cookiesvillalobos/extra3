//
// Created by kei98 on 12/03/19.
//

#ifndef EXTRA3_CLIST_H
#define EXTRA3_CLIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "CNode.h"

using namespace std;

class CList {
public:
    CList();
    ~CList();

    int m_num_nodes;

    void add_end(int*);
    void del_all();
    void del_by_position(int);
    void print();
    int* searchForFree();
    CNode* getHead();
    int length;

private:
    CNode *m_head;
};


#endif //EXTRA3_CLIST_H
