//
//  maxDistance.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 14/01/22.
//
/*
 Given an array A of integers of size N. Find the maximum of value of j - i such that A[i] <= A[j].



 Problem Constraints

 1 <= N <= 1000000

 -109 <= A[i] <= 109



 Input Format

 First argument is an integer array A of size N.



 Output Format

 Return an integer denoting the maximum value of j - i.



 Example Input

 Input 1:

 A = [3, 5, 4, 2]


 Example Output

 Output 1:

 2


 Example Explanation

 Explanation 1:

 For A[0] = 3 and A[2] = 4, the ans is (2 - 0) = 2.
 */

//make right max find max from left arr with right max

#include <stdio.h>
#include <iostream>

using namespace std;
 
int main(){
    int arr[] = {1,10};
    int n = size(arr);
    int rightMax[n];
    rightMax[n-1]= arr[n-1];
    for(int i = n-2; i>=0; i--)
        rightMax[i] = max(rightMax[i+1] , arr[i]);
     
    //rightMax[i] = max{ arr[i...(n-1] }


     
    int maxDist = INT_MIN;
    int i = 0, j = 0;
    while(i<n && j<n)
    {
        if(rightMax[j] >= arr[i])
        {
            maxDist = max( maxDist, j-i );
            j++;
        }
        else // if(rightMax[j] < leftMin[i])
            i++;
    }
     
    return maxDist;
     
             
}
