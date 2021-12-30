//
//  largestContinuousSeqSum.cpp
//  Arrays
//
//  Created by CYBERHOAX on 30/12/21.
//

/*
 Given an array A of N integers.

 Find the largest continuous sequence in a array which sums to zero.

 Problem Constraints

 1 <= N <= 106

 -107 <= A[i] <= 107

 Input Format

 Single argument which is an integer array A.

 Output Format

 Return an array denoting the longest continuous sequence with total sum of zero.

 NOTE : If there are multiple correct answers, return the sequence which occurs first in the array.

 Example Input

 A = [1,2,-2,4,-4]

 Example Output

 [2,-2,4,-4]

 Example Explanation

 [2,-2,4,-4] is the longest sequence with total sum of zero.


 See Expected Output
 Your input
 8 -1 5 -8 -2 -1 3 -5 2
 Output
 -2 -1 3
 */


#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;

int main(){
    int A[] = {1,2,-2,4,-4};
    int n = size(A);
    vector<long long> prefixSum ;
    
    unordered_map<long long, int > hash;
    int sum = 0 ;
    int  star
    for(int i = 0 ; i < n ; i++ ){
        sum += A[i] ;
        
        if(sum ==0  &&  i)
    }
     
        
        
     
        
            
   
    return 0 ;
}


