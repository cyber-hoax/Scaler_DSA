
//
//  longestConsecutiveSequence.cpp
//  Arrays
//
//  Created by CYBERHOAX on 29/12/21.
//
/*
 Given an unsorted integer array A of size N.

 Find the length of the longest set of consecutive elements from the array A.


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
#include <vector>

using namespace std ;
int main(){
    int A[] = {100,4,200,1,3,2};
    int n = size(A);
    unordered_set<int> unord;
   
    
    
    for(int i = 0 ; i<n ; i++){
        unord.insert(A[i]);
    }
    int ans ;
    int maxm = 0 ;
   
    for(auto m  : unord){
        if (unord.find(m -1) != unord.end()){
            
            int  x = m;
            int ans = 1 ;
            
           
            while(unord.find(x) != unord.end()){
              
                ans ++ ;
                x++ ;
               
            }
            maxm = max(maxm, ans);
        }
        
    }
   
    
    cout << maxm ;
    return 0; ;
}
