//
//  conceptUnderstanding.cpp
//  LinkedList
//
//  Created by CYBERHOAX on 21/12/21.
//

#include <stdio.h>
#include <iostream>

using namespace std ;

struct Node{
    int data ;
    Node* next ;
};


int main(){
    // creating nodes
    Node* one = NULL;
    Node* two = NULL ;
    Node* three = NULL;
    
    one = new Node ;
    two = new Node;
    three = new Node;
    
    
    // inserting values in node -> data
    
    one -> data = 10;
    two -> data = 20;
    three -> data = 40;
    
    
    one -> next = two;
    two -> next = three ;
    three -> next = NULL;
    
    
    cout<< one -> data << endl;
    cout << two -> data << endl;
    cout << three -> data << endl ;
    
}


