//
//  Level_order_traversal.cpp
//  Trees
//
//  Created by CYBERHOAX on 21/04/22.
//
/*
 Given a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).



 Problem Constraints
 1 <= number of nodes <= 105



 Input Format
 First and only argument is root node of the binary tree, A.



 Output Format
 Return a 2D integer array denoting the zigzag level order traversal of the given binary tree.



 Example Input
 Input 1:

     3
    / \
   9  20
     /  \
    15   7
 Input 2:

    1
   / \
  6   2
     /
    3


 Example Output
 Output 1:

  [
    [3],
    [9, 20],
    [15, 7]
  ]
 Output 2:

  [
    [1]
    [6, 2]
    [3]
  ]


 Example Explanation
 Explanation 1:

  Return the 2D array. Each row denotes the traversal of each level.
 
 
 logic
 1. create quue for storing the visited note and their children
 2. run loop while q is not empty take the size and do the logic;
 */


#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>


using namespace std ;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int value){
        val = value;
        left = NULL;
        right=NULL;
        
    }
    
};



int main(){
    TreeNode * A = new TreeNode(1);
    A->left = new TreeNode(6);
    A->right = new TreeNode(2);
    A->right->left = new TreeNode(3);
    
    vector<vector<int>> ans;
    if(A == NULL ) return 0;
    queue<TreeNode * > q;
    q.push(A);
    
    while(!q.empty()){
        vector<int> v ;
        long long  qSize = q.size();
        for(int i = 0  ; i<qSize ; i++){
            TreeNode* temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp -> left != NULL)q.push(temp->left);
            if(temp-> right != NULL)q.push(temp->right);
            
        }
        ans.push_back(v);
    }
    
    
}
