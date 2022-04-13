//
//  Largest_Rectangle_in_histogram.cpp
//  Stack
//
//  Created by CYBERHOAX on 13/04/22.
//

/*
 Given an array of integers A.

 A represents a histogram i.e A[i] denotes the height of the ith histogram's bar. Width of each bar is 1.

 Find the area of the largest rectangle formed by the histogram.



 Problem Constraints
 1 <= |A| <= 100000

 1 <= A[i] <= 1000000000



 Input Format
 The only argument given is the integer array A.



 Output Format
 Return the area of the largest rectangle in the histogram.



 Example Input
 Input 1:

  A = [2, 1, 5, 6, 2, 3]
 Input 2:

  A = [2]


 Example Output
 Output 1:

  10
 Output 2:

  2


 Example Explanation
 Explanation 1:

 The largest rectangle has area = 10 unit. Formed by A[3] to A[4].
 Explanation 2:

 Largest rectangle has area 2.


 */

#include <stdio.h>
#include <stack>
#include <vector>
#include <iostream>

using namespace std ;

int main (){
    int A[] = {90, 58, 69, 70, 82, 100, 13, 57, 47, 18 };
    if(size(A) == 1){
            return A[0];
        }
        int N = size(A);
        vector<int> p1(N, -1);
        stack <int> st1;
        vector<int> p2(N, N);
        stack<int> st2;
        int ans = INT_MIN;


        for(int i=0; i<N; i++){
            while(!st1.empty() && A[st1.top()] >= A[i]){
                st1.pop();
            }
            if(st1.size() > 0){
                p1[i] = st1.top();
            }
            st1.push(i);
        }

        for(int i=N; i>=0; i--){
            while(!st2.empty() && A[st2.top()] >= A[i]){
                st2.pop();
            }
            if(st2.size() > 0){
                p2[i] = st2.top();
            }
            st2.push(i);
        }

        for(int i=0; i<N; i++){
            int h = A[i];
            int w = (p2[i] - p1[i] - 1);
            int area = w*h;
            ans = max(ans, area);
        }
    cout << ans ;
        return ans;

}
