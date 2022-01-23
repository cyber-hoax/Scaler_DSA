//
//  pairSumDivisibleBYM.cpp
//  Maths
//
//  Created by CYBERHOAX on 21/01/22.
//
/*
 Given an array of integers A and an integer B, find and return the number of pairs in A whose sum is divisible by B.

 Since the answer may be large, return the answer modulo (109 + 7).



 Problem Constraints

 1 <= length of the array <= 100000
 1 <= A[i] <= 109
 1 <= B <= 106



 Input Format

 The first argument given is the integer array A.
 The second argument given is the integer B.



 Output Format

 Return the total number of pairs for which the sum is divisible by B modulo (109 + 7).



 Example Input

 Input 1:

  A = [1, 2, 3, 4, 5]
  B = 2
 Input 2:

  A = [5, 17, 100, 11]
  B = 28


 Example Output

 Output 1:

  4
 Output 2:

  1


 Example Explanation

 Explanation 1:

  All pairs which are divisible by 2 are (1,3), (1,5), (2,4), (3,5).
  So total 4 pairs.
 */

#include <iostream>
#include<unordered_map>
using namespace std;

int main(){
    int A[] = { 5, 17, 100, 11 };
    int B = 28;
    
    
    // create a hashtable to create a mod ans as key and counts as frequency
    unordered_map<int, int> hash;
    int n = size(A);
    for(int i = 0 ; i <n ; i++ ){
        hash[A[i] % B] ++ ;
    }
    int mod= 1000000007;
    
    //this is 0 remainder with NCr2
    int count  = hash[0] * (hash[0] -1)  /2 % mod ;
    
    int i = 1 ;
    int j = B-1 ;
    
    // now chjeck the condtion uif i + j remainder eual to mod value
    while(i<j){
        if(i+j ==B)
        count = count +  hash[i] * hash[j]  % mod;
        i++ ;
        j-- ;
    }
    
    
  
    if(B%2 == 0){
        count += hash[B/2] * (hash[B/2]-1) /2  % mod;
    }
   
    cout << count %mod;
}

