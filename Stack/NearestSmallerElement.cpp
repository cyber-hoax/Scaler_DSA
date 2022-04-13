//
//  NearestSmallerElement.cpp
//  Stack
//
//  Created by CYBERHOAX on 12/04/22.
//
/*
 Given an array A, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

 More formally,

 G[i] for an element A[i] = an element A[j] such that

 j is maximum possible AND

 j < i AND

 A[j] < A[i]

 Elements for which no smaller element exist, consider the next smaller element as -1.



 Problem Constraints
 1 <= |A| <= 100000

 -109 <= A[i] <= 109



 Input Format
 The only argument given is integer array A.



 Output Format
 Return the integar array G such that G[i] contains the nearest smaller number than A[i]. If no such element occurs G[i] should be -1.



 Example Input
 Input 1:

  A = [4, 5, 2, 10, 8]
 Input 2:

  A = [3, 2, 1]

 
 */

#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std ;

int main(){
    int A[] = {4, 5, 2, 10, 8};
    int n = size(A);
    vector<int> v(n);
    stack<int> st;
   
    
   
    
    st.push(-1);
  
    
    
    for(int i = 0; i< n ; i++){
        
        int curr = A[i];
        while(st.top() >= curr ){
            st.pop();
        }
        v[i]=st.top();

        st.push(curr);
        
    }

    for(int i = 0 ; i <n ; i++){
        cout << v[i] << endl ;
    }
   
   
}
