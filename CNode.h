//
// Created by kei98 on 12/03/19.
//

#ifndef EXTRA3_CNODE_H
#define EXTRA3_CNODE_H

#include <iostream>

using namespace std;


class CNode {
public:
    CNode();
    CNode(int*);

    CNode *next;
    int* data;
    bool free;

    void delete_all();
    void print();

};


#endif //EXTRA3_CNODE_H
