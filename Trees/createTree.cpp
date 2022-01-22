//
//  createTree.cpp
//  Trees
//
//  Created by CYBERHOAX on 16/01/22.
//


// how to create the tree


#include <stdio.h>
#include <iostream>

using namespace std ;

struct Node {
    int data ;               // creating data value
    Node* left;              //create left node or edges
    Node* right;            // create right ndoe or edges
    
    Node(int value){
        data = value ;
        left = NULL ;                       //initialising the left and right child null
        right = NULL ;
    }
};

void Inorder(Node* root){
    if(root != NULL){
        Inorder(root -> left);
    
    cout <<  root->data << " -> " ;
    
    Inorder(root -> right) ;
}
}



int main(){
    Node* root = new Node(1);
    
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    
    
    

    
    cout << "inorder traversal: " ;
    Inorder(root) ;
    

    

    return 0 ; 
}


