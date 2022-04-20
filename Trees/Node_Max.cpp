//
//  Node_Max.cpp
//  Trees
//
//  Created by CYBERHOAX on 20/04/22.
//


#include <stdio.h>
#include <iostream>


using namespace std ;

struct Node{
    int val;
    Node* left;
    Node* right;
    
    Node(int value){
        val = value;
        left = NULL;
        right=NULL;
        
    }
    
};
void NodeMax(Node* A, int ans){
    if(A==NULL)
        return;
    ans = max(A->val , ans);
    NodeMax(A->left , ans);
    NodeMax(A->right , ans);
    

}


int main(){
    Node * A = new Node(1);
    A->left = new Node(6);
    A->right = new Node(2);
    A->right->left = new Node(3);
    
    int ans = INT_MIN ;
    c = NodeMax(A, ans);
    cout << c;
    return ans;
}
