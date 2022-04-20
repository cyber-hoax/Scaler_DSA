//
//  Node_Sum.cpp
//  Trees
//
//  Created by CYBERHOAX on 20/04/22.
//
// node sum using recursion and iterative

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

void NodeSum(Node* A, int ans){
    if(A==NULL)
        return;
    ans += A->val;
    NodeSum(A->left , ans);
    NodeSum(A->right , ans);

}


int main(){
    Node * A = new Node(1);
    A->left = new Node(6);
    A->right = new Node(2);
    A->right->left = new Node(3);
    
    int ans = 0 ;
        NodeSum(A, ans );
        return ans;
    
    
    // iteratvie
    // stack<TreeNode*> st;
       //   vector<int> v;
       //   int sum = 0 ;
       // TreeNode* node = A ;
       // while(true){
       //     if(node != NULL){
       //         st.push(node);
       //         node = node->left;
       //     }

       //     else{
       //         if(st.empty() == true)
       //             break;
       //         node = st.top();
       //         st.pop() ;
       //         v.push_back(node->val);
       //         node = node->right;
       //     }
       // }
       // for(auto x : v)
       // sum += x ;

       // return sum ; 
}
