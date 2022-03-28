//
//  longest_consecutive_seq.cpp
//  Hashing
//
//  Created by CYBERHOAX on 22/03/22.
//
/*
 Given an unsorted integer array A of size N.

 Find the length of the longest set of consecutive elements from array A.


 Problem Constraints
 1 <= N <= 106

 -106 <= A[i] <= 106


 Input Format
 First argument is an integer array A of size N.


 Output Format
 Return an integer denoting the length of the longest set of consecutive elements from the array A.


 Example Input
 Input 1:

 A = [100, 4, 200, 1, 3, 2]
 Input 2:

 A = [2, 1]


 Example Output
 Output 1:

  4
 Output 2:

  2


 Example Explanation
 Explanation 1:

  The set of consecutive elements will be [1, 2, 3, 4].
 Explanation 2:

  The set of consecutive elements will be [1, 2].
 */

#include <stdio.h>
#include <iostream>
#include <unordered_set>

using namespace std ;
int main(){
    int A []= {100, 4, 200, 1, 3, 2 ,5};
    int n = size(A);
    unordered_set<int> sl ;
  
    int ans = 0 ;
    for(int i = 0 ; i<n ; i++){
        
        sl.insert(A[i]);
    }
    
    for(int j = 0 ; j < n ; j++){
        
        if(sl.find(A[j] -1) == sl.end()){
            
            int k = A[j];
            
            while(sl.find(k) != sl.end())
                k++;
            ans = max(ans, k - A[j]);
            
        }
    }
    return ans;
    
    
    
}
