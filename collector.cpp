//
// Created by viviana on 11/03/19.
//
#include "collector.h"


using namespace std;


collector::collector() {
    free = 0;
    free_d = 0;
}

void collector::add(int* direction) {
    clist.add_end(direction);
    this->free++;
//    if (free == 0){
//        clist.add_end(direction);
//        return direction;
//    }
//    else{
//        free--;
//        free_d = clist.search(clist.m_num_nodes-1-free);
//    }

}

void collector::collect() {
    free++;


}

int* collector::getFreeAd() {
    return clist.searchForFree();
}

void collector::setFree(int *pInt) {
    CNode *temp = clist.getHead();
    while(temp->data != pInt){
        temp = temp->next;
    }
    temp->free = true;

}

collector* collector:: instance = nullptr;

collector *collector::getInstance() {
    if(instance == nullptr){
        instance = new collector();
    }

    return instance;
}
