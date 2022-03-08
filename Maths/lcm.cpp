//
//  lcm.cpp
//  Maths
//
//  Created by CYBERHOAX on 08/03/22.
//
/*
 Write a function that takes to positive integers A and B and returns their LCM.


 Problem Constraints
 1 <= A,B <= 109


 Input Format
 The first argument is a single integer A
 The second argument is a single integer B


 Output Format
 Return a single integer that is the LCM of A and B.


 Example Input
 Input 1:
 A = 5
 B = 10
 Input 2:

 A = 2
 B = 3


 Example Output
 Output 1:
 10
 Output 2:

 6


 Example Explanation
 Explanation 1:
 LCM(5,10)=10
 Explanation 2:

 LCM(2,3)=6
 */

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A , B ,temp , lcm , gcd;
    
    A = 10 ;
    B = 5 ;
    int a = A;
    int b = B;
    
    while(B != 0)
        {
        temp = B ;
        B = A % B ;
        A = temp;
        }
    
    gcd = A;
    lcm = (a*b) /gcd;
    cout << lcm ; 
    
}
