//
//  identicaBinaryTrees.cpp
//  Trees
//
//  Created by CYBERHOAX on 19/01/22.
//
/*
 Problem Description

 Given two binary trees, check if they are equal or not.

 Two binary trees are considered equal if they are structurally identical and the nodes have the same value.



 Problem Constraints

 1 <= number of nodes <= 105



 Input Format

 First argument is a root node of first tree, A.

 Second argument is a root node of second tree, B.



 Output Format

 Return 0 / 1 ( 0 for false, 1 for true ) for this problem.



 Example Input

 Input 1:

    1       1
   / \     / \
  2   3   2   3
 Input 2:

    1       1
   / \     / \
  2   3   3   3


 Example Output

 Output 1:

  1
 Output 2:

  0


 Example Explanation

 Explanation 1:

  Both trees are structurally identical and the nodes have the same value.
 Explanation 2:

  Value of left child of the tree is different.
 */


#include <stdio.h>
#include <iostream>
#include<vector>

using namespace std;

struct Node{
    int val ;
    Node* left ;
    Node* right ;
    
    Node(int value){
        val = value;
        left = NULL;
        right = NULL ;
        
    }
};
//vector<int > a;
//vector<int > b ;
//
//void Identical(Node* A, Node* B){
//    if(A!=NULL && B != NULL){
//        Identical(A->left , B-> left);
//        a.push_back(A->val);
//        b.push_back(B->val);
//        Identical(A->right, B->right) ;
//    }
//}


int main(){
    Node* A = new Node(5);
    
    A -> left = new Node(5);
   A -> right = new Node(10);
    
    Node* B = new Node(5);
    
    B -> left = new Node(5);
    B -> right = new Node(10);
  
    
    if(A == NULL && B == NULL) return true;
    if(A == NULL || B ==NULL) return false;
    return ((A->val==B->val)&&(A->left,B->left)&&(A->right,B->right));

}

