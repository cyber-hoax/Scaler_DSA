//
//  longestPalindromicSubstring.cpp
//  Strings
//
//  Created by CYBERHOAX on 24/12/21.
//
/*
 Problem Description

 Given a string A of size N, find and return the longest palindromic substring in A.

 Substring of string A is A[i...j] where 0 <= i <= j < len(A)

 Palindrome string:
 A string which reads the same backwards. More formally, A is palindrome if reverse(A) = A.

 Incase of conflict, return the substring which occurs first ( with the least starting index).

 Problem Constraints

 1 <= N <= 10000

 Input Format

 First and only argument is a string A.

 Output Format

 Return a string denoting the longest palindromic substring of string A.

 Example Input

 A = "aaaabaaa"

 Example Output

 "aaabaaa"

 Example Explanation

 We can see that longest palindromic substring is of length 7 and the string is "aaabaaa".
 */

#include <stdio.h>
#include <iostream>
#include <unordered_map>

using namespace std ;
int main(){
    string A = "abcdedc";
    int n = size(A);
    
    unordered_map<char, int> hash;
    
    for (int i = 0 ; i<n; i++) {
        hash[A[i]] ++ ;
    }
    
    int frq  = 1 ;
    for(auto m : hash){
        if (m.second > 1) {
            frq += 1;
        break ;
        }
            
        
    
    }
    if(frq <=1) return A[0];
        
    int halfString  = n/2 ;
    int leftSide = INT_MAX;
    int rigtside = INT_MIN ;
    int leftcount = 0 ;
    int rightcount = 0 ;
    for(int i = halfString -1 ; i>=1  ; i --){
        if(A[i-1] == A[i+1]){
            leftcount ++ ;
            leftSide = min(halfString, i-1) ;
        }
            
    }
    for(int i = halfString-1 ; i<n-1  ; i ++){
        if(A[i-1] == A[i+1]){
            rightcount ++ ;
            rigtside = min(halfString, i) ;
        }
            
    }
        
    if(rightcount < leftcount){
        string B ;
        for(int i = )
    }
  

    return 0 ;
    
}
