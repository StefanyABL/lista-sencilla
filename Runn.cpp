/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Runn.cpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:04 PM
 */

#include <cstdlib>

#include<stdio.h>
#include<iostream>
#include "ListNode_1.hpp";
#include "VideoCamera.hpp"
#include "Stack.hpp"
#include "Stack.cpp"
#include "Tail.hpp"
#include "Tail.cpp"
#include "LinkedList.hpp"
#include "LinkedList.cpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
   // Tail<VideoCamera>*tl=new Tail<VideoCamera>();
   //tl->addNode(VideoCamera("2010","Samsung",158000,false));
    //tl->addNode(VideoCamera("4050","LG",125000,true));
    //tl->addNode(VideoCamera("2389","ABC",123000,false));
    //tl->addNode(VideoCamera("1083","unit",140000,true));
    //tl->addNode(VideoCamera("1256","DCA",120000,false));
    //while(!tl->isEmpty()){
      //  cout<<tl->getNode().toString()<<endl;
    //}
    
    //ListNode<VideoCamera>* node=new ListNode<VideoCamera> (VideoCamera ("25368", "SONY", 120000, true));
    //cout<<node<<endl;
    //printf("%p\n",node);
    //Stack<VideoCamera>*list=new Stack<VideoCamera>();
    //list->push(VideoCamera("3698","Samsung",152000,false));
    //list->push(VideoCamera("2014","LG",230000,true));
    //list->push(VideoCamera("1263","ADC",123000,false));
    //while(!list->isEmpty()){
      //  cout<<list->pop().toString()<<endl;
    
   // }
    LinkedList<VideoCamera>* linked= new LinkedList<VideoCamera>();
    linked->addSort(VideoCamera("20","LG",146000,true));
    linked->addSort(VideoCamera("10","Samsung",116000,false));
    linked->addSort(VideoCamera("35","Unit",156000,true));
    linked->addSort(VideoCamera("5","ADC",112000,false));                                                                  
    for(VideoCamera vd:linked->getLinkedList()){
        cout<<vd.toString()<<endl;
    }
    //TERMINARRR
    ListNode<VideoCamera>* find= new ListNode<VideoCamera>();
    linked->findNode("3169","LG",126000,false);
    if(find!=NULL){
        //EXISTE
    }else{
        //NO EXISTE
    }
}
