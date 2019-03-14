//
// Created by viviana on 11/03/19.
//

#ifndef COLLECTOR_H
#define COLLECTOR_H

#include <iostream>
#include "CList.h"

using namespace std;


class collector {

    public:
        int free_d;

        void add(int*);
        void collect();

        int colle();
        int length;
        int free;
        void setFree(int*);
        int* getFreeAd();
        static collector* getInstance();
        void printL();


    private:
        CList clist;
        static collector* instance;
        collector();




};


#endif //EXTRA3_COLLECTOR_H
