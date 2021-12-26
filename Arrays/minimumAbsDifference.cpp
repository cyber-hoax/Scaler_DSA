//
//  minimumAbsDifference.cpp
//  Arrays
//
//  Created by CYBERHOAX on 26/12/21.
//

/*
 Given an array of integers A, find and return the minimum value of | A [ i ] - A [ j ] | where i != j and |x| denotes the absolute value of x.

 Problem Constraints

 1 <= length of the array <= 100000

 -109 <= A[i] <= 109

 Input Format

 The only argument given is the integer array A.



 Output Format

 Return the minimum value of | A[i] - A[j] |.



 Example Input

 Input 1:

  A = [1, 2, 3, 4, 5]
 Input 2:

  A = [5, 17, 100, 11]


 Example Output

 Output 1:

  1
 Output 2:

  6


 Example Explanation

 Explanation 1:

  The absolute difference between any two adjacent elements is 1, which is the minimum value.
 Explanation 2:

  The minimum value is 6 (|11 - 5| or |17 - 11|).
 */

#include <stdio.h>
#include <iostream>

using namespace std ;

int main(){
    
    int A[] { 37, 19, 71, 72, 5, 4, 74, 2, 30, 33, 85, 1, 7, 14, 98, 27, 51, 7, 24, 88, 86, 81, 77, 64, 13, 3, 63, 75, 29, 50, 90, 3, 22, 94, 40, 72, 75, 26, 32, 64, 62, 59, 19, 16};
    int n = size(A);
        
        long long  ans = INT_MAX ;

        sort(A, A+n);

        for(int i =0 ; i<n-1 ; i++){
            if (A[i+1] - A[i] < ans)
              ans = A[i+1] - A[i];
     
        }
        
        return ans ;
    
}
