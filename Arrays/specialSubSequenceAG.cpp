//
//  specialSubSequenceAG.cpp
//  Arrays
//
//  Created by CYBERHOAX on 26/12/21.
//

/*
 You have given a string A having Uppercase English letters.

 You have to find that how many times subsequence "AG" is there in the given string.

 NOTE: Return the answer modulo 109 + 7 as the answer can be very large.



 Problem Constraints

 1 <= length(A) <= 105



 Input Format

 First and only argument is a string A.



 Output Format

 Return an integer denoting the answer.



 Example Input

 Input 1:

  A = "ABCGAG"
 Input 2:

  A = "GAB"


 Example Output

 Output 1:

  3
 Output 2:

  0


 Example Explanation

 Explanation 1:

  Subsequence "AG" is 3 times in given string
 Explanation 2:

  There is no subsequence "AG" in the given string.
 */


#include <stdio.h>
#include <iostream>

using namespace std  ;
int main (){
    
    string A = "ABCGABG" ;
    int n = size(A);
   
    int curerentA = 0 ;
    int currentAG =  0 ;
  
    for(int i = 0 ; i < n ; i++ ){
        if(A[i] == 'A'){
            curerentA += 1 ;  }
            if(A[i]  == 'G'  ){
                currentAG += curerentA ;
            }
  
    }
    return currentAG % 1000000007 ;
}
