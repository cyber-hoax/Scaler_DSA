//
//  findGreatestCommonDivisorofArray.cpp
//  LeetCode
//
//  Created by CYBERHOAX on 27/01/22.
//
/*
 Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

 The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.


 Example 1:

 Input: nums = [2,5,6,9,10]
 Output: 2
 Explanation:
 The smallest number in nums is 2.
 The largest number in nums is 10.
 The greatest common divisor of 2 and 10 is 2.
 Example 2:

 Input: nums = [7,5,6,8,3]
 Output: 1
 Explanation:
 The smallest number in nums is 3.
 The largest number in nums is 8.
 The greatest common divisor of 3 and 8 is 1.
 Example 3:

 Input: nums = [3,3]
 Output: 3
 Explanation:
 The smallest number in nums is 3.
 The largest number in nums is 3.
 The greatest common divisor of 3 and 3 is 3.
  

 Constraints:

 2 <= nums.length <= 1000
 1 <= nums[i] <= 1000
 */

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int n , int m){
//    if(n == 0)
//        return m ;
//    if(m == 0)
//        return n;
//
//    if(n == m )
//        return n;
//
//    if(n>m)
//        return gcd(n-m, m);
//    return gcd(n, m-n);
    if(m==0)
        return n;
           
    return gcd(m,n % b);
}


int main(){
    vector<int> vect;
    vect.push_back(2);
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(9);
    vect.push_back(10);
    
    int minValue = *min_element(vect.begin(), vect.end());
    int maxValue = *max_element(vect.begin(), vect.end());
    return(minValue , maxValue);
    
}
