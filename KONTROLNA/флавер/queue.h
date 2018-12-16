//
// Created by Nick Marhal on 12/3/17.
//

#ifndef KONTROLNA_QUEUE_H
#define KONTROLNA_QUEUE_H

#include <cstddef>

template<class T>
struct Queue
{
    Node *first;
    Node *last;
    size_t size;

    struct Node
    {
        Node *next;
        T item;
    };

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T item)
    {
        Node *oldLast = last;
        last = {void, item};

        if (isEmpty()) {
            first = last;
        } else {
            oldLast->next = last;
        }

        size++;

    }

};

#endif //KONTROLNA_QUEUE_H
