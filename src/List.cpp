#include<cstdlib>
#include<iostream>

using namespace std;

#include "List.h"

List::List()
{
    head = NULL;
    cout << "This is the head node " << head << endl;

    curr = NULL;
    cout << "This is the curr node " << curr << endl;

    temp = NULL;
    cout << "This is the temp node " << temp << endl;

    cout << "end of initialization" << endl;
    cout << "\n";
}

void List::addNode(int addData)
{
    nodePtr n = new node;
    cout << "This is the new node created " << n << endl;;
    n->next = NULL;
    cout << "This is the value of n->next " << n->next << endl;
    n->data = addData;
    cout << "This is the value of n->data " << n->data << endl;

    if(head != NULL)
    {
        curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
            cout << "This curr is inside the while loop " << curr << endl;
        }
        curr->next = n;
        cout << "This is the curr node " << curr << endl;
        cout << "This is the curr->next " << curr->next << endl;
        cout << "This is the curr->data " << curr->data << endl;
    }
    else
    {
        head = n;
        cout << "This is the head node " << head << endl;
        cout << "This is the head->next " << head->next << endl;
        cout << "This is the head->data " << head->data << endl;
    }

}

void List::deleteNode(int delData)
{
    nodePtr delPtr = NULL; // deletion pointer
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != delData) // addNote
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout << delData << " was not in the list\n";
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head)
        {
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << delData << " was deleted\n";
    }
}

void List::printList()
{
    curr = head;
    while(curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
