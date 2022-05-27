//
//  Minimize the absolute difference Minimize the absolute difference Min_the_abs_diff.cpp
//  Arrays
//
//  Created by CYBERHOAX on 23/05/22.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    int diff = INT_MAX ;
    
    int A[] = { 1, 4, 5, 8, 10};
    int B[] ={6, 9, 10 };
    int C[] = {2,3,6,10,};
    
    int i = 0 , j = 0 , k = 0 ;
    while(i<size(A) && j<size(B) && i<size(C)){
        minimum = min(A[i] , min(B[j] , C[k]));
        maximum = max(A[i] , max(B[j] , C[k]));
        diff = min(diff, abs(maximum-minimum));
        
   
        if(A[i] == minimum) i++ ;
        else if(B[j] == minimum) j++ ;
        else{
         k++ ;
        }
    }
    return diff;

}
