//
//  Sliding_Window_Maximum.cpp
//  Queues
//
//  Created by CYBERHOAX on 16/04/22.
//
/*
 Given an array of integers A. There is a sliding window of size B, moving from the very left of the array to the very right. You can only see the B numbers in the window. Each time the sliding window moves rightwards by one position. You have to find the maximum for each window.

 Return an array C, where C[i] is the maximum value in the array from A[i] to A[i+B-1].

 Refer to the given example for clarity.

 NOTE: If B > length of the array, return 1 element with the max of the array.



 Problem Constraints
 1 <= |A|, B <= 106

 Input Format
 The first argument given is the integer array A.

 The second argument given is the integer B.

 Output Format
 Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1].


 Example Input
 Input 1:

  A = [1, 3, -1, -3, 5, 3, 6, 7]
  B = 3
 Input 2:

  A = [1, 2, 3, 4, 2, 7, 1, 3, 6]
  B = 6

 Example Output
 Output 1:

  [3, 3, 5, 5, 6, 7]
 Output 2:

  [7, 7, 7, 7]


 Example Explanation
 Explanation 1:

  Window position     | Max
  --------------------|-------
  [1 3 -1] -3 5 3 6 7 | 3
  1 [3 -1 -3] 5 3 6 7 | 3
  1 3 [-1 -3 5] 3 6 7 | 5
  1 3 -1 [-3 5 3] 6 7 | 5
  1 3 -1 -3 [5 3 6] 7 | 6
  1 3 -1 -3 5 [3 6 7] | 7
 Explanation 2:

  Window position     | Max
  --------------------|-------
  [1 2 3 4 2 7] 1 3 6 | 7
  1 [2 3 4 2 7 1] 3 6 | 7
  1 2 [3 4 2 7 1 3] 6 | 7
  1 2 3 [4 2 7 1 3 6] | 7


 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main(){
    int A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int B = 2;
    
    // brutforce TLE :
//
//    int i = 0;
//    int j = B-1 ;
//    int  l = i ;
//    int n = size(A);
//
//    vector<int> ans ;
//    while(j<n){
//        int maxm = INT_MIN ;
//        int l = i ;
//        while(l<=j){
//            maxm = max(maxm , A[l] );
//            l++ ;
//        }
//        ans.push_back(maxm);
//        i++;
//        j++;
//
//    }
//
//    for(auto x : ans)
//        cout << x << " " << endl ;
    
    vector<int> ans;
    deque<int> dq;
    int n = size(A);
    for(int i = 0 ; i<B; i++){
        while(!dq.empty() && dq.back() <A[i]){
            dq.pop_back();
        }
        dq.push_back(A[i]);
        
    }
    
    ans.push_back(dq.front());
    
    int i = 1;
    int j = B;
    
    while(j<n){
        if(A[i-1] == dq.front()){
            dq.pop_front();
        }
        while(!dq.empty() && dq.back() < A[j]){
            dq.pop_back();
        }
        dq.push_back(A[j]) ;
        ans.push_back(dq.front());
        i++ ;
        j++ ;
        
    }
    
    for(auto x : ans )
        cout << x << " " << endl  ;
}
