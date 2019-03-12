//
// Created by viviana on 11/03/19.
//

#include "collector.h"


using namespace std;

collector::collector(){
    free = 0;
    free_d = NULL;

}

int collector::add(int direction) {
    if (free == 0){
        list.add_end(direction);
        return direction;
    }
    else{
        free--;
        free_d = list.search(list.m_num_nodes-1-free);
    }

}

void collector::collect() {
    free++;

}