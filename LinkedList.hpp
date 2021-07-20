/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.hpp
 * Author: Sala 6
 *
 * Created on 3 de septiembre de 2018, 10:55 AM
 */

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <vector>
#include <string>
#include "ListNode_1.hpp"
using namespace std;
template <class T>
class LinkedList {
public:
    LinkedList();
    bool isEmpty();
    ListNode<T>* findNode(std::string);
    T* findObject(std::string);
    void addNode(T);
    void addFirst(T);
    void addLast(T);
    void addBeforeTo(ListNode<T>*,T);
    void addAfterTo(ListNode<T>*,T);
    void addSort(T);
    std::vector<T> getLinkedList();
    T* getObject(int);
    T getFirst();
    T getLast();
    T deleteNode(ListNode<T>*);
          
     virtual ~LinkedList();
private:
ListNode<T>* head;

};

#endif /* LINKEDLIST_HPP */

