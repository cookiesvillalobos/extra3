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
    bool in = false;
    CNode *temp = clist.getHead();
    for(int i = 0; i < clist.length; i++) {
        if(direction == temp->data){
            return;
        } else{
            temp = temp->next;
        }
    }
    if(!in){
        clist.add_end(direction);
    }

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

void collector::printL() {
    clist.print();

}
