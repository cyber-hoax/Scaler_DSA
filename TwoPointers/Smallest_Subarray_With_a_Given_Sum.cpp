//
//  Smallest_Subarray_With_a_Given_Sum.cpp
//  TwoPointers
//
//  Created by CYBERHOAX on 18/01/22.
//
/*
 Given an array of positive numbers and a positive number ‘S’, find the length of the smallest contiguous subarray whose sum is greater than or equal to ‘S’. Return 0, if no such subarray exists.

 Example 1:

 Input: [2, 1, 5, 2, 3, 2], S=7
 Output: 2
 Explanation: The smallest subarray with a sum great than or equal to '7' is [5, 2].
 Example 2:

 Input: [2, 1, 5, 2, 8], S=7
 Output: 1
 Explanation: The smallest subarray with a sum greater than or equal to '7' is [8].
 Example 3:

 Input: [3, 4, 1, 1, 6], S=8
 Output: 3
 Explanation: Smallest subarrays with a sum greater than or equal to '8' are [3, 4, 1] or [1, 1, 6].
 */

#include<iostream>

using namespace std ;

int main(){
    int A[] = {2, 1, 5, 2, 3, 2};
    int k = 7;
    int  n = size(A);
    int windowSum = 0 , windowstart = 0 ;
    int minLength = INT_MAX;
    
    for(int windowEnd = 0; windowEnd < n ; windowEnd ++ ){
        windowSum += A[windowEnd] ;
        
        while(windowSum >= k){
            minLength = min(minLength, windowEnd - windowstart +1);
            windowSum -= A[windowstart] ;
            windowstart ++ ;
        }
    }
    return minLength == INT_MAX ? 0 : minLength;
}
