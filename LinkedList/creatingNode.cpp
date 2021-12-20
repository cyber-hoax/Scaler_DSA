//
//  creatingNode.cpp
//  LinkedList
//
//  Created by CYBERHOAX on 20/12/21.
//

#include <stdio.h>
#include <iostream>


using namespace std;

class Node{
public:
    int value;
    Node * next ;
};


int main(){
    Node * head ;
    Node * one  = NULL ;
    Node * two = NULL ;
    Node * three = NULL;
    
    
    //allocate nodes in heap
    
    one = new Node();
    two = new Node();
    three = new Node() ;
    
    
    //assign the values
    
    one -> value = 1;
    two -> value =2;
    three -> value =3 ;
    
    
    //connect nodes
    
    one ->  next = two;
    two -> next = three ;
    three -> next = NULL ;
    
    
    //print the linkde list value
    
    head = one;
    int count  = 0;
    while (head ) {
        count ++ ;
        cout << head-> value << endl ;
        head = head -> next ;
    }
    cout << count ;
    return 0 ;
}
