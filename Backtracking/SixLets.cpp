//
//  SixLets.cpp
//  Backtracking
//
//  Created by CYBERHOAX on 19/05/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;


void subsetUtils(vector<int> &A, vector<int>&subset  , int index , int B , int count ){
    if(subset.size() ==B){
        count ++;
    }
    
    for(int i = 0 ; i<A.size() ; i++){
        subset.push_back(A[i]);
        
        subsetUtils(A, subset, i+1, B , count );
        subset.pop_back();
        }
    }



int main(){
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(8);
    int B =2;
    if(A.size() == B)
        return 0 ;
    
    vector<int> subset;
   
    
    int count = 0 ;
    
    subsetUtils(A, subset, 0 , B ,count );
    
    return count ;
}
