//
//  singleNumber2.cpp
//  BitManipulation
//
//  Created by CYBERHOAX on 30/01/22.
//

/*
 Given an array of integers, every element appears thrice except for one which occurs once.

 Find that element which does not appear thrice.

 NOTE: Your algorithm should have a linear runtime complexity.

 Could you implement it without using extra memory?




 Problem Constraints

 2 <= A <= 5*106

 0 <= A <= INTMAX



 Input Format

 First and only argument of input contains an integer array A.



 Output Format

 Return a single integer.



 Example Input

 Input 1:

  A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
 Input 2:

  A = [0, 0, 0, 1]


 Example Output

 Output 1:

  4
 Output 2:

  1


 Example Explanation

 Explanation 1:

  4 occurs exactly once in Input 1.
  1 occurs exactly once in Input 2.

 */


#include <stdio.h>
#include <iostream>

using namespace std ;

int main(){
    
    int nums[] = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1} ;
    int counterOne = 0;
         int counterTwo = 0;
         
         for (int i = 0; i < size(nums); i++){
             counterOne = (~counterTwo) & (counterOne ^ nums[i]);
             counterTwo = (~counterOne) & (counterTwo ^ nums[i]);
         }
         return counterOne;
    
}
