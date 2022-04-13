//
//  Next_Greater_Element.cpp
//  Stack
//
//  Created by CYBERHOAX on 13/04/22.
//
/*
 Given an array A, find the next greater element G[i] for every element A[i] in the array.
 The next greater element for an element A[i] is the first greater element on the right side of A[i] in the array, A.

 More formally:

 G[i] for an element A[i] = an element A[j] such that
     j is minimum possible AND
     j > i AND
     A[j] > A[i]
 Elements for which no greater element exists, consider the next greater element as -1.



 Problem Constraints
 1 <= |A| <= 105

 1 <= A[i] <= 107



 Input Format
 The first and the only argument of input contains the integer array, A.



 Output Format
 Return an integer array representing the next greater element for each index in A.



 Example Input
 Input 1:

  A = [4, 5, 2, 10]
 Input 2:

  A = [3, 2, 1]


 Example Output
 Output 1:

  [5, 10, 10, -1]
 Output 2:

  [-1, -1, -1]


 Example Explanation
 Explanation 1:

 For 4, the next greater element towards its right is 5.
 For 5 and 2, the next greater element towards their right is 10.
 For 10, there is no next greater element towards its right.
 Explanation 2:

 As the array is in descending order, there is no next greater element for all the elements.
 */

#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std ;

int main(){
    int A[] = {4,5,2,10,8};
    int n = size(A);
    
    stack<int> st;
    vector<int> v(n);
    
    
    for(int i = n-1 ; i >=0  ; i-- ){
        
        int curr = A[i];
       
        if(st.empty()){
            v[i] = -1 ;
            st.push(A[i]);
        }
        else{
            while (!st.empty() && st.top() <= curr) {
                st.pop();
            }
            v[i] = st.empty() ? -1 : st.top();
            st.push(A[i]);
        }
    
   
    
}
    for(auto x : v){
        cout << x << endl ;
    }
}
