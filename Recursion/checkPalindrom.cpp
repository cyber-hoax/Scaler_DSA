//
//  checkPalindrom.cpp
//  Recursion
//
//  Created by CYBERHOAX on 25/01/22.
//

/*
 Problem Description

 Write a recursive function that checks whether a string A is a palindrome or Not.
 Return 1 if the string A is palindrome, else return 0.

 Note: A palindrome is a string that's the same when reads forwards and backwards.



 Problem Constraints

 1 <= A <= 50000

 String A consist only of lowercase letters.



 Input Format

 First and only argument is a string A.



 Output Format

 Return 1 if the string A is palindrome, else return 0.



 Example Input

 Input 1:

  A = "naman"
 Input 2:

  A = "strings"


 Example Output

 Output 1:

  1
 Output 2:

  0


 Example Explanation

 Explanation 1:

  "naman" is a palindomic string, so return 1.
 Explanation 2:

  "strings" is not a palindrome, so return 0.
 */


#include <stdio.h>
#include <iostream>
using namespace std;


bool isPalindrom(string &A, int low, int high){
 
    if(low >= high)
        return true;
    if(A[low] != A[high])
        return false;
    return isPalindrom(A, low+1, high -1 );
}

int main(){
    string A = "naman";
    int n = A.size();
    int low = 0;
    int high = n-1;
    return(isPalindrom(A, low , high));
}
