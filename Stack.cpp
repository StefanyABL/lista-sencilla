/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.cpp
 * Author: Sala 6
 * 
 * Created on 27 de agosto de 2018, 11:31 AM
 */
#include "Stack.hpp"
#include <cstdlib>
template<class T>
Stack<T>::Stack(const Stack& orig) {

}

template <class T>
Stack<T>::Stack() {
    top=NULL; //pila vacia
}

template<class T>
bool Stack<T>::isEmpty() {
    return top==NULL;
}

template<class T>
T Stack<T>::pop() {
    ListNode<T>* aux=top;
    top=top->next;
    T object=aux->info;
    delete(aux);
    return object;
}

template<class T>
void Stack<T>::push(T info) {
    if(isEmpty()){
      top=new ListNode<T>(info);
    }
    else{
       ListNode<T>* newNode= new ListNode<T>(info); 
       newNode->next=top;
       top=newNode;
     
    }
        
}

template <class T>
Stack<T>::~Stack<T>(){
   
}

