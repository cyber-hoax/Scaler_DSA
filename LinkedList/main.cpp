//
//  main.cpp
//  LinkedList
//
//  Created by CYBERHOAX on 20/12/21.
//

#include <iostream>

using  namespace std ;

int main(){
    
    struct Node {
        int data ;
        Node * link ;
    };
    
    Node * head ;
    head = NULL ;
    
    Node * temp = new Node();
    
    temp -> data = 2 ;
    temp -> link = NULL;
    
    head = temp;
    
    temp = new Node ();
    temp -> data = 3;
    temp -> link = NULL ;
    
//    cout << head -> data<< endl;
//    
//    cout << temp << endl;
    
    
    while (head -> link != NULL){
        cout<< head -> data ;
        head = head -> link;
        
    }
    
   
    
    return 0;
    
}
