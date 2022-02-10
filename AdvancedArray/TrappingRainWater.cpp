//
//  TrappingRainWater.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 29/01/22.
//

/*
 Given a vector A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

 Problem Constraints

 1 <= |A| <= 100000



 Input Format

 First and only argument is the vector A


 Output Format

 Return one integer, the answer to the question



 Example Input

 Input 1:

 A = [0, 1, 0, 2]
 Input 2:

 A = [1, 2]


 Example Output

 Output 1:

 1
 Output 2:

 0


 Example Explanation

 Explanation 1:

 1 unit is trapped on top of the 3rd element.
 Explanation 2:

 No water is trapped.
 */


#include <stdio.h>
#include <iostream>

using namespace std ;

int main(){
    
    int A[] = {1,2};
    int ans = 0 ;
    int left = 0 ;
    int right = size(A) -1  ;
    int leftMax = 0 ;
    int rightMax = 0 ;
    
    while(left <= right){
        if(A[left] <= A[right]) {
            
            if(A[left] > leftMax){
                leftMax = A[left];
            }
            else{
                ans += leftMax - A[left];
                
            }
            left ++ ;
            
        }
        
        else{
            if(A[right] >= rightMax) {
                rightMax = A[right] ;
                
            }
            else{
                ans += rightMax - A[right];
            }
            right -- ;
        }
        
        
    }
    
    return  ans; 
    
}

