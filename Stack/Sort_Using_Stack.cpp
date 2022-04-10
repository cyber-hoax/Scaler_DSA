
//
//  Sort_Using_Stack.cpp
//  Stack
//
//  Created by CYBERHOAX on 10/04/22.
//
/*
 Given a stack of integers A, sort it using another stack.

 Return the array of integers after sorting the stack using another stack.



 Problem Constraints
 1 <= |A| <= 5000

 0 <= A[i] <= 109



 Input Format
 The only argument is a stack given as an integer array A.



 Output Format
 Return the array of integers after sorting the stack using another stack.



 Example Input
 Input 1:

  A = [5, 4, 3, 2, 1]
 Input 2:

  A = [5, 17, 100, 11]


 Example Output
 Output 1:

  [1, 2, 3, 4, 5]
 Output 2:

  [5, 11, 17, 100]


 Example Explanation
 Explanation 1:

  Just sort the given numbers.
 Explanation 2:

  Just sort the given numbers.
 */

#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std ;

int main (){
    int A[] = {66, 96, 43, 28, 14, 1, 41, 76, 70, 81, 22, 11, 42, 78, 4, 88, 70, 43, 90, 6, 12};
    stack<int> st1 ;
    stack<int> st2;
    st1.push(A[0]);
    int n = size(A);
    
    for(int i=1; i<n ;i ++ ){
        if(A[i] > st1.top())
            st1.push(A[i]);
        else{
            while(st1.top() > A[i]){
                st2.push(st1.top());
                st1.pop();
            }
            st2.push(A[i]);
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop() ;
            
        }
            
    }
        
}
    
    while(!st1.empty()){
        cout << st1.top() << endl ;
        st1.pop();
    }
        
}
