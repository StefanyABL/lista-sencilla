/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListNote.hpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:27 PM
 */

#ifndef LISTNOTE_HPP
#define LISTNOTE_HPP
#include <cstdlib>
template<class T>class Stack;
template<class T>class Tail;
template<class T>class LinkedList;
template<class T> class ListNode {
public:
    friend class Stack<T>;
    friend class Tail<T>;
    friend class LinkedList<T>;
    ListNode();
    ListNode(T);
    T getInfo();
    virtual ~ListNode();
private:
    T info;
    ListNode<T>* next;
};
template <class T>
ListNode<T>::ListNode(){
    next=NULL;
}
template <class T>
ListNode<T>::ListNode(T info){
    this->info = info;
    next=NULL;
}
template <class T>
ListNode<T>::~ListNode(){
   
}



#endif /* LISTNOTE_HPP */

