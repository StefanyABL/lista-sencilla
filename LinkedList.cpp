/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: Sala 6
 * 
 * Created on 3 de septiembre de 2018, 10:55 AM
 */

#include "LinkedList.hpp"
#include <vector>
#include <valarray>

template<class T>
LinkedList<T>::LinkedList() {
    head=NULL;
}

template<class T>
void LinkedList<T>::addAfterTo(ListNode<T>*, T) {

}

template<class T>
void LinkedList<T>::addBeforeTo(ListNode<T>*, T) {

}

template<class T>
void LinkedList<T>::addFirst(T) {

}

template<class T>
void LinkedList<T>::addLast(T) {

}

template<class T>
void LinkedList<T>::addNode(T) {

}

template<class T>
void LinkedList<T>::addSort(T info) {
    if(isEmpty()){
        head=new ListNode<T>(info);
    }
    else{
        ListNode<T>*actually =head;
        ListNode<T>*previous=NULL;
        ListNode<T>*newNode=new ListNode<T>(info);
        while(actually!=NULL&& info.getId().compare(info.getId())<0){
            previous=actually;
            actually=actually->next;
        }
        if(previous==NULL){
            newNode->next=head;
            head=newNode;
        }
        else{
            previous->next=newNode;
            newNode->next=actually;
        }
    }
}

template<class T>
T LinkedList<T>::deleteNode(ListNode<T>*) {

}

template<class T>
ListNode<T>* LinkedList<T>::findNode(std::string id) {
    ListNode<T>* aux=head;
    while(aux!=NULL){
        if(aux->info.getId().compare(id)==0){
            return aux;
        }
        aux=aux->next;
    }
    return NULL;
}

template<class T>
T* LinkedList<T>::findObject(std::string) {

}

template<class T>
T LinkedList<T>::getFirst() {

}

template<class T>
T LinkedList<T>::getLast() {

}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    std::vector<T>output;
    ListNode<T>* aux=head;
    while(aux!=NULL){
        output.push_back(aux->info);
        aux=aux->next;
    }
    return output;
}

template<class T>
T* LinkedList<T>::getObject(int) {

}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head==NULL;
}
template<class T>
LinkedList<T>::~LinkedList<T>() {
}


