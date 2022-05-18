//
//  subset.cpp
//  Backtracking
//
//  Created by CYBERHOAX on 18/05/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std ;
void subsetUtils(vector<int> &A , vector<vector<int>> &res , vector<int> &curr , int index){
    res.push_back(curr);
    
    for(int i = index ; i < A.size() ;i++){
        curr.push_back(A[i]);
        
        subsetUtils(A, res,curr, i +1);
        curr.pop_back() ;
    }
}


int main(){
    
    vector<int> A ;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    
    vector<int> curr;
    vector<vector<int>> res;
    int index = 0 ;
    
    subsetUtils(A,res , curr, index);
    
    
    
    return 0;
}


