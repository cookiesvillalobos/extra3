
#include<iostream>

#include "list.h"

using namespace std;


int main()
{
    List list_1;




    list_1.add_end(2);
    list_1.add_end(3);
    cout << "ho \n";
    list_1.add_end(4);
    list_1.add_end(5);
    list_1.add_end(6);
    list_1.add_end(7);

    list_1.add_end(8);
    cout << "li \n";

    list_1.print();
/**


    list_1.search(2);
    cout << "\n";

    cout << list_1.searchValAd(3);
**/

    return 0;
}