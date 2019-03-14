
#include<iostream>

#include "list.h"

using namespace std;


int main()
{
    List list_1;




    list_1.add_end(2);
    list_1.add_end(3);
    list_1.add_end(4);
    list_1.add_end(5);
    list_1.add_end(6);
    list_1.add_end(7);

    list_1.add_end(8);

    list_1.deleteVal(3);
    list_1.add_end(12);
    list_1.deleteVal(2);
    list_1.add_end(15);
    list_1.print();
    list_1.printCL();


    return 0;
}