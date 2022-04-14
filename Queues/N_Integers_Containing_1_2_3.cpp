//
//  N_Integers_Containing_1_2_3.cpp
//  Queues
//
//  Created by CYBERHOAX on 14/04/22.
//
/*
 Given an integer, A. Find and Return first positive A integers in ascending order containing only digits 1, 2, and 3.

 NOTE: All the A integers will fit in 32-bit integers.

 Problem Constraints
 1 <= A <= 29500

 Input Format
 The only argument given is integer A.

 Output Format
 Return an integer array denoting the first positive A integers in ascending order containing only digits 1, 2 and 3.

 Example Input
 Input 1:

  A = 3
 Input 2:

  A = 7

 Example Output
 Output 1:

  [1, 2, 3]
 Output 2:

  [1, 2, 3, 11, 12, 13, 21]


 Example Explanation
 Explanation 1:

  Output denotes the first 3 integers that contains only digits 1, 2 and 3.
 Explanation 2:

  Output denotes the first 3 integers that contains only digits 1, 2 and 3.
 */

#include <stdio.h>
#include <queue>
#include <stack>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int A = 7;
    
    queue<int> q ;
    vector<int> v;
    
   
    int count = v.size();
    
    if(A <=3){
        for(int i = 0 ; i<A ;i++){
            v.push_back(i+1);
            if(v.size() == A)
                return v.size();
        }
        
        
    }
    
    
    else{
    q.push(1);
    q.push(2);
    q.push(3);
        
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    
    
   
    int ans ;
        
    count = v.size();
    
    while(count < A){
            
        int frontpop = q.front();
        q.pop();
        
        for(int i=1 ;i <=3 ; i++){
            
            if(count == A){
                break ;
            }else{
                ans = frontpop * 10 + i ;
                q.push(ans);
                v.push_back(ans);
                
                count ++ ;
                
            }
        }
    }
    
}
    
    for(auto x : v)
        cout << x << endl ;
    
}
