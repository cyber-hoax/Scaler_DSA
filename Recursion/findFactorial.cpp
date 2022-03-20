//
//  findFactorial.cpp
//  Recursion
//
//  Created by CYBERHOAX on 20/03/22.
//
/*
 Write a program to find the factorial of the given number A.


 Problem Constraints

 0 <= A <= 12

 Input Format

 First and only argument is an integer A.

 Output Format

 Return an integer denoting the factorial of the number A.


 Example Input

 Input 1:

  A = 4
 Input 2:

  A = 1


 Example Output

 Output 1:

  24
 Output 2:

  1


 Example Explanation

 Explanation 1:

  Factorial of 4 = 4 * 3 * 2 * 1 = 24
 Explanation 2:

  Factorial of 1 = 1
 */

#include <stdio.h>
#include <iostream>

using namespace std ;

int finFact(int A ){
    if(A == 1 || A == 0)
        return A;
    else{
        return A * finFact(A-1);
    }
}

int main(){
    int A = 4;
   
    return finFact(A );
}
