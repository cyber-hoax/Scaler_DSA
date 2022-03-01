//
//  countTheNodes.cpp
//  Trees
//
//  Created by CYBERHOAX on 01/03/22.
//
/*
 Problem Description

 Given the root of a tree A with each node having a certain value, find the count of nodes which have more value than all its ancestor

 Problem Constraints

 1 <= Number of Nodes <= 200000

 1 <= Value of Nodes <= 2000000000

 Input Format

 First and only argument of input is a tree node.



 Output Format

 Return a single integer denoting count of nodes which have more value than all of it's ancestor.

 Example Input

 Input 1:

  
      3
 Input 2:

  
     4
    / \
   5   2
      / \
     3   6


 Example Output

 Output 1:

  1
 Output 2:

  3


 Example Explanation

 Explanation 1:

  One node is valid
 Explanation 2:

  Three nodes are 4, 5 and 6.
 */

#include <stdio.h>
#include <iostream>
using namespace std ;

struct Node{
    int val ;
    Node* left;
    Node* right ;
    
    Node(int value){
        val = value;
        left = NULL ;
        right =NULL;
    }
};

void countNodes(Node* A , int maxx , int& count){
    if(A == NULL)
        return;
    else{
        if(A->val > maxx)
            count ++ ;
    }
    
    countNodes(A->left , max(maxx, A->val), count );
    
    countNodes(A->right , max(maxx, A->val), count );
    
}



int main(){
    Node* A = new Node(4);
    A -> left = new Node(5);
    A -> right = new Node(2);
    A -> right ->left = new Node(3);
    A -> right -> right = new Node(6);
    
    int count = 0 ;
    
    countNodes(A, INT_MIN , count);
    
    cout << count ; 
    

}

