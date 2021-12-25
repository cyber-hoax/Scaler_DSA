//
//  subArrLeastAvrg.cpp
//  Arrays
//
//  Created by CYBERHOAX on 25/12/21.
//

/*
 Given an array of size N, Find the subarray with least average of size k.

 Problem Constraints
 1<=k<=N<=1e5
 -1e5<=A[i]<=1e5

 Input Format
 First argument contains an array A of integers of size N.
 Second argument contains integer k.


 Output Format
 Return the index of the first element of the subarray of size k that has least average.
 Array indexing starts from 0.


 Example Input
 Input 1:
 A=[3, 7, 90, 20, 10, 50, 40]
 B=3
 Input 2:

 A=[3, 7, 5, 20, -10, 0, 12]
 B=2


 Example Output
 Output 1:
 3
 Output 2:

 4
 
 Example Explanation
 Explanation 1:
 Subarray between indexes 3 and 5
 The subarray {20, 10, 50} has the least average
 among all subarrays of size 3.
 Explanation 2:

  Subarray between [4, 5] has minimum average
 */


//solved in slding window


//Here we are calculating the sum for each k
    // if sum is less than automatically the avg will be also less
    //    3, 7, 5, 20, -10, 0, 12/
    //    / k= 2 */
    //    3  + 7 = 10
    //    7 + 5 = 12
    //    5 + 20 = 25
    //    20 + -10 10
    //    -10 + 0 = -10
    //    0 +  12 = 12
#include <stdio.h>

#include <iostream>

using namespace std ;

int main(){
    int A[] = { 3, 7, 5, 20, -10, 0, 12};
    int B = 2 ;

    int n = size(A);
    

    int sum = 0 ;
    

    for(int i = 0 ; i < B ; i++){
        sum += A[i];
        
    }
    int min  = sum ;
    int result = 0;
    for(int  i = 1 ; i <= n-B ; i++ ){
        //removing previpous element adding next element
        sum = sum - A[i -1] + A[i+B-1] ;
        
       
        if(sum < min ){
            min = sum ;
            result = i;
        }
    }
    
    cout << result   ;
    return 0 ;
    
    
}

