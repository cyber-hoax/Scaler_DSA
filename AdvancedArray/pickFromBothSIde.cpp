//
//  pickFromBothSIde.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 09/01/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>
 
using namespace std;

int main() {
    vector<int> A ;
    A.push_back(5) ;
    A.push_back(-2) ;
    A.push_back(1) ;
    A.push_back(3) ;
    A.push_back(2) ;
    
    
    int B = 3;
    
    int n = A.size();
    
    int leftSum = 0 ;
    int rightSum =  0 ;
    int maxSum = INT_MIN ;
    for(int i = 0 ; i < B ; i++){
        leftSum += A[i];
        
    }
    
 
    
  
    
    
    for(int i = n-1 ; i >=n-B ; i--){
        rightSum += A[i];
      
        
    }
    maxSum = max(leftSum, rightSum);
    
    
   
    
    int j = 0 ;
    int  k = n-B ;
    int currSum = INT_MIN ;
    int tempSum = 0 ;
    leftSum = 0 ;
    while(k <n ){
        
        rightSum -= A[k];
        leftSum += A[j];
        tempSum = rightSum + leftSum ;
        currSum = max(currSum, tempSum);
        j++ ;
        k++ ;
    }
    maxSum = max(currSum, maxSum);
    cout << maxSum ;
    return 0 ;
}
