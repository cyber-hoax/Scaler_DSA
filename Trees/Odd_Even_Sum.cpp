//
//  Odd_Even_Sum.cpp
//  Trees
//
//  Created by CYBERHOAX on 21/04/22.
//recursive and iterative

#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>;


    
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

int EvenMaxDifference(TreeNode * A){
    
    if(A == NULL) return 0;
    queue<TreeNode *> q;
    q.push(A);
    int evensum =0 ;
    int oddsum = 0 ;
    int level = 0 ;
    while(!q.empty()){
       
        int n = q.size();
        level ^= 1;
        
        while (n--) {
            TreeNode * temp = q.front();
            q.pop();
            if (temp -> left)
                q.push(temp -> left);
            if (temp -> right)
                q.push(temp -> right);
            if (level)
                oddsum += temp -> val;
            else
                evensum += temp -> val;
}
    
    }
    return (oddsum - evensum);

}
int main(){
    TreeNode * A = new TreeNode(1);
    A->left = new TreeNode(2);
    A->right = new TreeNode(10);
    A->left->right = new TreeNode(4);
    
 
    
    cout << EvenMaxDifference(A);
    
    
}


/*
 int difference(TreeNode* A ){
    if(A == NULL) return 0;
       return A->val - difference(A->left) - difference(A->right);
         
 }


 int Solution::solve(TreeNode* A) {
     int ans = difference(A );
     return ans;
     
 }

 */
