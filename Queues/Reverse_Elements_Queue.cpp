//
//  Reverse_Elements_Queue.cpp
//  Queues
//
//  Created by CYBERHOAX on 14/04/22.
//
/*
 Given an array of integers A and an integer B, we need to reverse the order of the first B elements of the array, leaving the other elements in the same relative order.

 NOTE: You are required to the first insert elements into an auxiliary queue then perform Reversal of first B elements.



 Problem Constraints
 1 <= B <= length of the array <= 500000
 1 <= A[i] <= 100000



 Input Format
 The argument given is the integer array A and an integer B.

 Output Format
 Return an array of integer after reversing the first B elements of A using queue.


 Example Input
 Input 1:

  A = [1, 2, 3, 4, 5]
  B = 3
 Input 2:

  A = [5, 17, 100, 11]
  B = 2


 Example Output
 Output 1:

  [3, 2, 1, 4, 5]
 Output 2:

  [17, 5, 100, 11]


 Example Explanation
 Explanation 1:

  Reverse first 3 elements so the array becomes [3, 2, 1, 4, 5]
 Explanation 2:

  Reverse first 2 elements so the array becomes [17, 5, 100, 11]
 */

#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
    int A[] = {1,2,3,4,5};
    int B = 3;
    
    
//
//    int count = 0;
//    int n = size(A);
//
//    stack<int> st ;
//
//    queue<int> q ;
//
//    vector<int> v;
//
//    for(int i =0 ;i<n ;i++)
//        q.push(A[i]);
//
//
//
//    while(count < B){
//        st.push( q.front()) ;
//        q.pop();
//        count ++;
//    }
//
//    while(!st.empty()){
//
//        v.push_back(st.top());
//        st.pop();
//    }
//
//    for (int i = B; i<n; i++) {
//        v.push_back(A[i]);
//    }
//
//    for(auto x : v)
//        cout << x << endl ;
    
    
    queue<int> q;
    
    int i;
        // Insert first B elements in queue
        for (i = 0; i < B; i++)
            q.push(A[i]);
        // Reverse the first B elements in the array A
        while (!q.empty()) {
            i--;
            A[i] = q.front();
            q.pop();
        }
    
    
      for(auto x : A)
          cout << x ;
    
}
