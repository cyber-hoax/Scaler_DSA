//
//  creation.cpp
//  Trees
//
//  Created by CYBERHOAX on 29/05/22.
//

#include <stdio.h>
#include <iostream>
#include<vector>
#include<climits>
#include<string>

using namespace std;

struct Node{
    int val ;
    Node *left ;
    Node *right;
    
    Node(int data){
        val = data ;
        left = NULL;
        right = NULL ;
    }
    
    
};

void Inorder(Node* root){
    if(root != NULL){
        
       
    cout <<  root->val<< " -> " ;
     Inorder(root -> left);
    
    
    Inorder(root -> right) ;
   
}
}

//Q1. sum of all Nodes

int sumOffAllNodes(Node* root){
    if(!root){
        return 0 ;
    }
    int left = sumOffAllNodes(root->left);
    int right = sumOffAllNodes(root->right) ;
    return left+ right + root->val;
}


int maxPathCount(Node* root){
    if(!root){
        return 0;
    }
    
    int left = maxPathCount(root->left );
    int right = maxPathCount(root->right);
    return 1+ max(left,right);
}


//Q3. max path sum

int maxpathSum(Node* root, int &maxsum){
    if(!root){
        return 0 ;
    }
    
    int left = maxpathSum(root->left , maxsum);
    int right = maxpathSum(root->right , maxsum);
    int maxcurr = max(root->val + left , max (root->val +right , root->val)) ;
    maxsum = max(maxsum, max(maxcurr , left + right + root->val));
    return maxcurr;
    
}

Node* construct(vector<int> A){
     vector<Node*> Nodes;
    Node* root;
    int n = A.size();
 
    for(int i = 0 ; i<n; i++){
        
        Nodes.push_back(new Node(i));
        
    }
    
    for (int i= 0; i<n; i++) {
        if(A[i] == -1){
            root = Nodes[i];
             continue;
        }
           
        Node * parent = Nodes[A[i]];
        Node * child = Nodes[i];
        
        if(parent->left == NULL){
            parent->left = child ;
            
        }
        else if(parent->right == NULL){
            parent->right = child;
        }
        
    }
    
    return root;
}

int main()
{
    vector<int> A = {-1,0,0,1,1,2,2} ;
   
    Node* root = construct(A);
    

    Inorder(root) ;
    
    int x = sumOffAllNodes(root);
    cout << endl ;
    cout <<  "sum of all nodes " << x;
    
    int maxcount = maxPathCount(root);
     cout << endl ;
    cout <<  "max node count  " <<  maxcount;
    
    
    int maxsum = INT_MIN ;
    maxpathSum(root, maxsum);
    cout << endl;
    cout<< maxsum;
    
}
