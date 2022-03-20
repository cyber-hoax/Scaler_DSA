//
//  reverseString.cpp
//  Recursion
//
//  Created by CYBERHOAX on 20/03/22.
//
/*
 Write a recursive function that, given a string S, prints the characters of S in reverse order.


 Problem Constraints

 1 <= |s| <= 1000


 Input Format

 First line of input contains a string S.



 Output Format

 Print the character of the string S in reverse order.


 Example Input

 Input 1:

  scaleracademy
 Input 2:

  cool


 Example Output

 Output 1:

  ymedacarelacs
 Output 2:

  looc


 Example Explanation

 Explanation 1:

  Print the reverse of the string in a single line.
 */

#include <stdio.h>
#include <iostream>

using namespace std ;

void reverseStr(string& A, int n , int i ){
    
    if(n<=i)
        return;
    else{
        swap(A[i] , A[n]);
        reverseStr(A ,n-1, i+1);
    }
        
    
}
 
int main(){
    string A = "";
    cin >> A ; 
    reverseStr(A , A.length()-1, 0 );
    cout << A ; 
}
