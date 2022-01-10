//
//  firstMisisngInteger.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 07/01/22.
//

/*
 Given an unsorted integer array A of size N. Find the first missing positive integer.

 Note: Your algorithm should run in O(n) time and use constant space.

 Problem Constraints

 1 <= N <= 1000000

 -109 <= A[i] <= 109


 Input Format

 First argument is an integer array A.

 Output Format

 Return an integer denoting the first missing positive integer.



 Example Input

 Input 1:

 [1, 2, 0]
 Input 2:

 [3, 4, -1, 1]
 Input 3:

 [-8, -7, -6]


 Example Output

 Output 1:

 3
 Output 2:

 2
 Output 3:

 1


 Example Explanation

 Explanation 1:

 A = [1, 2, 0]
 First positive integer missing from the array is 3.
 */


#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std ;

int main() {
    vector<int> A ;
    A.push_back(1);
    A.push_back(2);
    A.push_back(0);
    int n = A.size();
    for(int i = 0 ; i < n  ; i++) {
        if(A[i] <= 0) A[i] = n+2 ;
    }
    
    for(int i = 0 ; i <n ; i++){
        int els = A[i] ;
        if(els >=1  && els <= n){
            int index =  els -1 ;
            A[index] = -1 * abs(A[index]);
        }
   
    }
    
    for(int i = 0 ; i < n ; i ++){
        if(A[i] > 0) return i+1 ;
    }
    
   
    return n+1 ;
}
