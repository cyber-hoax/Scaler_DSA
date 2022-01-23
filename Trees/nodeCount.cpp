//
//  nodeCount.cpp
//  Trees
//
//  Created by CYBERHOAX on 22/01/22.
//
/*
 You are given the root node of a binary tree A. You have to find the number of nodes in this tree.
 Problem Constraints

 1 <= Number of nodes in the tree <= 105

 0 <= Value of each node <= 107


 Input Format

 First and only argument is a tree node A.


 Output Format

 Return an integer denoting the number of nodes of the tree.


 Example Input

 Input 1:

  Values =  1
           / \
          4   3
 Input 2:

  
  Values =  1
           / \
          4   3
         /
        2


 Example Output

 Output 1:

  3
 Output 2:

  4

 Example Explanation

 Explanation 1:

 Clearly, there are 3 nodes 1, 4 and 3.
 Explanation 2:

 Clearly, there are 4 nodes 1, 4, 3 and 2.
 */

#include <stdio.h>
#include <iostream>
#include <cmath>


using namespace std ;

struct Node{
    int val ;
    Node * left ;
    Node * right ;
    
    Node(int value){
        val = value ;
        left = NULL;
        right = NULL ;
    }
};

int countNodes (Node* A ){

    if(A ==NULL) return 0   ;
    
    int NodeLeft = 0 , Noderight = 0 ;
    
    Node *l = A , *r = A;
    
    while(l) {
        NodeLeft ++ ;
        l = l->left;
        
    }
    while(r) {
        Noderight ++ ;
        r = r->right;
        
    }
    
    if(Noderight == NodeLeft) return pow(2,NodeLeft) -1 ;
    
    return 1+ countNodes(A->left) + countNodes(A->right);
    
}

int main () {
    
    Node* A = new Node(1);
    A -> left = new Node(4);
    A -> right = new Node(3);
    
    A->left -> left = new Node(2);
//    A->left -> right = new Node(4);
//
//    A->right -> left = new Node(3);
//    A->right -> right = new Node(4);
//
    countNodes(A) ;
   
}

