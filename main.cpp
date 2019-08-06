#include <iostream>
#include "List.h"
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
    List Bhaven;

    Bhaven.addNode(1);
    Bhaven.addNode(2);
    Bhaven.addNode(3);

    cout << "\n";
    Bhaven.printList();

    /*
    Bhaven.addNode(3);
    Bhaven.addNode(5);
    Bhaven.addNode(7);
    Bhaven.printList();

    Bhaven.deleteNode(5);
    Bhaven.printList();

    Bhaven.deleteNode(7);
    Bhaven.deleteNode(3);
    Bhaven.printList();

    Bhaven.addNode(3);
    Bhaven.addNode(5);
    Bhaven.addNode(7);
    Bhaven.printList();

    Bhaven.deleteNode(2);

    Bhaven.deleteNode(1);
    Bhaven.printList();
    */
    return 0;
}
