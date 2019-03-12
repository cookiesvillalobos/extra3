
#include <iostream>

#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
    List<int> list_1;



    list_1.add_end(2);
    list_1.add_end(3);
    list_1.add_end(4);
    list_1.add_end(5);
    list_1.add_end(6);
    list_1.add_end(7);
    list_1.add_end(8);

    list_1.print();
    list_1.search(2);


    return 0;
}