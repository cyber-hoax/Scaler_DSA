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

using namespace std ;
int main(){
    string A = "aaaabaaa";
    int n =  size(A);
    int count = 0 ;
 
//    for(int i = 1 ; i<n; i++){
//        int pre = i , post =i;
//        while(pre >= 0 && post < n){
//            if(A[pre] == p)
//        }
//    }
//    
//    
    
    return 0 ;
    
    
}
