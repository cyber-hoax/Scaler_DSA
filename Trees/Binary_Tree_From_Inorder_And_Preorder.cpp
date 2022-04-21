//
//  Binary_Tree_From_Inorder_And_Preorder.cpp
//  Trees
//
//  Created by CYBERHOAX on 21/04/22.
//

#include <stdio.h>

 /**
  * Definition for binary tree
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  * };
  */
// TreeNode * build(vector<int>&A , vector<int> &B , int &rootIdx , int left , int right , unordered_map<int, int> &hm){
//     if(left > right)
//         return NULL;
//
//     int pivot = hm[A[rootIdx]] ;
//
//     TreeNode * node = new TreeNode(B[pivot]);
//     rootIdx ++ ;
//
//     node->left = build(A,B , rootIdx , left , pivot -1 , hm);
//     node->right = build(A,B , rootIdx , pivot+1 , right , hm );
//
//     return node ;
// }
//
// TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
//     int rootIdx = 0 ;
//     unordered_map<int, int> hm ;
//
//     for(int i = 0; i< B.size() ; i++){
//         hm[B[i]] = i ;
//     }
//     return build(A, B , rootIdx,  0 , B.size()-1 , hm);
//
//
// }

