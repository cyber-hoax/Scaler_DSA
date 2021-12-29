//
//  lengthLonogestConsecutiveOnes.cpp
//  Arrays
//
//  Created by CYBERHOAX on 27/12/21.
//

/*
 Given a binary string A. It is allowed to do at most one swap between any 0 and 1. Find and return the length of the longest consecutive 1’s that can be achieved.

 Input Format

 The only argument given is string A.
 Output Format

 Return the length of the longest consecutive 1’s that can be achieved.
 Constraints

 1 <= length of string <= 1000000
 A contains only characters 0 and 1.
 For Example

 Input 1:
     A = "111000"
 Output 1:
     3

 Input 2:
     A = "111011101"
 Output 2:
     7
 */

#include <stdio.h>
#include <iostream>

using namespace std ;

int main() {
    string A = "11100011111";
    int B = size(A);
    
    int count = 0 ;
    int maxCount = 0;
    
    for(int i = 0; i < B ; i++){
        if(A[i] == '1') {
            count ++ ;
            
        }else{
            count = 0 ;
        }
    }
    
    maxCount = max(maxCount,count);
    
    return  maxCount;

}
