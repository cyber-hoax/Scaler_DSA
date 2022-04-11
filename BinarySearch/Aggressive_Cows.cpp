//
//  Aggressive_Cows.cpp
//  BinarySearch
//
//  Created by CYBERHOAX on 11/04/22.
//
/*
 Farmer John has built a new long barn with N stalls. Given an array of integers A of size N where each element of the array represents the location of the stall and an integer B which represents the number of cows.

 His cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, John wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?



 Problem Constraints
 2 <= N <= 100000
 0 <= A[i] <= 109
 2 <= B <= N



 Input Format
 The first argument given is the integer array A.
 The second argument given is the integer B.



 Output Format
 Return the largest minimum distance possible among the cows.



 Example Input
 Input 1:

 A = [1, 2, 3, 4, 5]
 B = 3
 Input 2:

 A = [1, 2]
 B = 2


 Example Output
 Output 1:

  2
 Output 2:

  1


 Example Explanation
 Explanation 1:

  John can assign the stalls at location 1, 3 and 5 to the 3 cows respectively. So the minimum distance will be 2.
 Explanation 2:

  The minimum distance will be 1.
 */

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> A , int B , int mid , int n){
    int cowCount = 1;
    int lastPos = A[0];
    
    for(int i = 0 ; i < n ; i++){
        if(A[i] - lastPos >= mid){
            cowCount ++;
            if(cowCount == B){
                return true;
            }
            lastPos = A[i];
        }
    }
    return false;
}

int main(){
   
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(5);
    int B = 3 ;
    
    sort(A.begin() , A.end());
    
    int start = 0;
    int n = A.size();
    int end = A[n-1];
    int ans = -1;
    int mid = start + (end-start)/2 ;
    
    while(start<=end){
        if(isPossible(A, B, mid , n)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2 ;
        
    }
    
    return ans;
    
    
}
