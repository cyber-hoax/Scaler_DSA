//
//  Postrorder_Traversal.cpp
//  Trees
//
//  Created by CYBERHOAX on 20/04/22.
//
/*
 postorder using recursion and iterative
 
 */
#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>

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

int main(){
    Node * A = new Node(1);
    A->left = new Node(6);
    A->right = new Node(2);
    A->right->left = new Node(3);
    
    stack<Node* > st ;
    vector<int> ans;
   Node* node = A;
     
       while(!st.empty() || node !=NULL){
           if(node != NULL){
               st.push(node);
               
               node = node->left ;
           }
           else{
               Node * temp = st.top()-> right;

           if (temp == NULL){
               temp = st.top();
               st.pop();
               ans.push_back(temp->val);
               while(!st.empty() && temp == st.top()->right){
                   temp = st.top();
                   st.pop() ;
                   ans.push_back(temp->val) ;

               }

           }
           else{
               node = temp;
           }
               
           }}

       for(auto x : ans )
           cout << x << endl ;
}

