//
//  Preorder_Traversal.cpp
//  Trees
//
//  Created by CYBERHOAX on 20/04/22.
//
/*
 preorder raversal using recursion and iterative
 */
#include <stdio.h>
#include<stack>
#include <vector>
#include <iostream>

using namespace std;

struct Node{
    int val;
    Node * left ;
    Node * right ;
    
    Node(int value){
        val = value ;
        left = NULL;
        right = NULL ;
        
    }
};


int main(){
    
    Node * A = new Node(1);
    A->left = new Node(6);
    A->right = new Node(2);
    A-> right -> left = new Node(3);
    
    
    stack<Node* > st ;
    vector<int> ans;
    Node* node = A; 
    while(true){
        if(node != NULL){
            ans.push_back(node->val);
            st.push(node);
            node = node-> left;
            
        }
        else{
            if(st.empty())
                return 0;
            else{
               
                node = st.top();
                st.pop();
                node = node-> right ;
            }
        }
    }
    
    for(auto x : ans)
        cout << x <<endl ;;
    
}
