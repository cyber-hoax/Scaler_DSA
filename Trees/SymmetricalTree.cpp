//
//  SymmetricalTree.cpp
//  Trees
//
//  Created by CYBERHOAX on 21/01/22.
//
/*
 Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

 Problem Constraints

 1 <= number of nodes <= 105

 Input Format

 First and only argument is the root node of the binary tree.

 Output Format

 Return 0 / 1 ( 0 for false, 1 for true ).

 Example Input

 Input 1:

     1
    / \
   2   2
  / \ / \
 3  4 4  3
 Input 2:

     1
    / \
   2   2
    \   \
    3    3

 Example Output

 Output 1:

  1
 Output 2:

  0

 Example Explanation

 Explanation 1:

  The above binary tree is symmetric.
 Explanation 2:

 The above binary tree is not symmetric.
 */

#include <iostream>

using namespace std;


struct Node{
    int val;
    Node* left ;
    Node* right ;
    
    Node(int value){
        val = value;
        left = NULL;
        right =NULL ;
    }
};


int isSymmetry(Node*A , Node*B){
    if(A == NULL && B== NULL) return 1;
    if(A== NULL || B == NULL) return 0;
    if(A->val!=B->val) return 0;
    return isSymmetry(A->left,B->right) && isSymmetry(A->right,B->left);
}

int main(){
    Node* A = new Node(1);
    A -> left = new Node(2);
    A -> right = new Node(2);
    
    A->left -> left = new Node(3);
    A->left -> right = new Node(4);
    
    A->right -> left = new Node(3);
    A->right -> right = new Node(4);
    
 
    
    return isSymmetry(A->left , A->right);
    
}
