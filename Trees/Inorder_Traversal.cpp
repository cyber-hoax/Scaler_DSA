//
//  Inorder_Traversal.cpp
//  Trees
//
//  Created by CYBERHOAX on 20/04/22.
//
//Inorder Traversal using both iterative and recursion


/*
            1
           / \
          6   2
             /
            3
 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>

using namespace std ;


struct Node{
    int val;
    Node *left ;
    Node *right ;
    
    Node(int value){
        val = value ;
        left = NULL;
        right = NULL;
    }
};


int main(){
    Node * A = new Node(1);
    A->left = new Node(6);
    A -> right = new Node(2);
    A->right->left = new Node(3);
    
    
    
   
    stack<Node *> st ;
    vector<int> ans ;
    Node* node = A;
    
    
  
    while(true){
        if(node != NULL){
            st.push(node);
            
            node = node->left ;
        }
        else{
            if(st.empty())
               return 0;
        
        node = st.top();
        st.pop();
        
        ans.push_back(node->val);
        node = node -> right ;
        }
    }
    
    
    for(auto x : ans)
        cout << x << endl ;
    
}

