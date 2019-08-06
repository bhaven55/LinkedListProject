/*
 * File: List.h
 * Author: Bhaven Patel
 *
 * Created on August 6, 2019, 12:08 PM
 *
 * This is a linkedList Project to better understand how linkedList works.
 */
#ifndef LIST_H
#define LIST_H


class List
{
    private: // the variables here can only be accessed by public functions in the file
        typedef struct node // struct is kind of like a class but a much smaller version of it.
        {
            int data;
            node* next;
        } *nodePtr; // this way we can just refer to our *node as nodePtr

        // every time we call nodePtr it will created int data and a node pointer which will point to our struct;
        nodePtr head; // beginning of the list
        nodePtr curr; // where the pointer currently is
        nodePtr temp; // hold the data temporary

    public: // Functions go here
        List(); // creates all the data type that we have defined. / default value for head, curr, and temp.
        void addNode(int addData);
        void deleteNode(int delData);
        void printList();
};

#endif // LIST_H
