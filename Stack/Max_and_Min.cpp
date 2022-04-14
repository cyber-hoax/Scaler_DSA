//
//  Max_and_Min.cpp
//  Stack
//
//  Created by CYBERHOAX on 13/04/22.
//
/*
 Given an array of integers A.

 value of a array = max(array) - min(array).

 Calculate and return the sum of values of all possible subarrays of A modulo 109+7.

 Problem Constraints
 1 <= |A| <= 100000

 1 <= A[i] <= 1000000

 Input Format
 The first and only argument given is the integer array A.

 Output Format
 Return the sum of values of all possible subarrays of A modulo 109+7.

 Example Input
 Input 1:

  A = [1]
 Input 2:

  A = [4, 7, 3, 8]


 Example Output
 Output 1:

  0
 Output 2:

  26

 Example Explanation
 Explanation 1:

 Only 1 subarray exists. Its value is 0.
 Explanation 2:

 value ( [4] ) = 4 - 4 = 0
 value ( [7] ) = 7 - 7 = 0
 value ( [3] ) = 3 - 3 = 0
 value ( [8] ) = 8 - 8 = 0
 value ( [4, 7] ) = 7 - 4 = 3
 value ( [7, 3] ) = 7 - 3 = 4
 value ( [3, 8] ) = 8 - 3 = 5
 value ( [4, 7, 3] ) = 7 - 3 = 4
 value ( [7, 3, 8] ) = 8 - 3 = 5
 value ( [4, 7, 3, 8] ) = 8 - 3 = 5
 sum of values % 10^9+7 = 26
 */

#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main (){
    int A[]= {4, 7, 3, 8};
    
    int n = size(A);
    int mod = 1e9+7 ;
    
    stack<int> st1;
    stack<int> st2;
    vector<int> gLeft(n,-1);
    vector<int> gRight(n,n);
    
    long long int min =0 , max =0 , ans;
    for(int i =0 ; i<n ;i++){
        while(!st1.empty() && A[st1.top()] >= A[i]){
            st1.pop();
        }
        if(st1.size()> 0){
            gLeft[i] = st1.top();
        }
        st1.push(i);
        
    }
    
    for(int i =n-1 ; i>=0 ;i--){
        while(!st2.empty() && A[st2.top()] >= A[i]){
            st2.pop();
        }
        if(st2.size()> 0)
            gRight[i] = st2.top();
        st2.push(i);
            
    }
    
    while(!st1.empty()){
        st1.pop();
    }
    while(!st2.empty()){
        st2.pop();
    }
    
    vector<int> sLeft(n,-1);
    vector<int> sRight(n,n);
    
    for(int i =0 ; i<n ;i++){
        while(!st1.empty() && A[st1.top()] <= A[i]){
            st1.pop();
        }
        if(st1.size()> 0)
            gLeft[i] = st1.top();
        st1.push(i);
            
    }
    
    
    
    for(int i =n-1 ; i>=0 ;i--){
        while(!st2.empty() && A[st2.top()] <= A[i]){
            st2.pop();
        }
        if(st2.size()> 0)
            gRight[i] = st2.top();
        st2.push(i);
            
    }
    
    for(int i = 0 ; i<n ;i++){
//        long long int left = i - gLeft[i];
//        long long int right = gRight[i] - i;
//        max += ((left* right) % mod * A[i]) % mod;
//        max %= mod;
//        left = i - sLeft[i] ;
//        right = sRight[i] - i ;
//        min += ((left* right) % mod * A[i]) % mod;
//        min %= mod;
//        ans = (max - min + mod )% mod;
        
        max = ((i - gLeft[i]) * (gRight[i] - i)  * A[i] + mod) % mod ;
        min = ((i - sLeft[i]) * (sRight[i] - i)  * A[i] +mod) % mod;
        ans += ((max-min)+mod) %mod ;
        ans %=  mod ;
    }
    
//    ans = (max - min + mod )% mod;
    
    cout << ans % mod ;
}
