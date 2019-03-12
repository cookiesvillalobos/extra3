//
// Created by viviana on 11/03/19.
//

#ifndef COLLECTOR_H
#define COLLECTOR_H

#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;


class collector {

    public:
        collector();
        ~collector();

        int free_d;

        int add(int);
        void collect();

        int colle();




    private:
        int free;
        List<int> list;



};


#endif //EXTRA3_COLLECTOR_H
