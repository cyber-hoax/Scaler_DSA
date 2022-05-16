//
//  Distribute_candy.cpp
//  Greedy
//
//  Created by CYBERHOAX on 13/05/22.
//

#include <stdio.h>
#include <queue>
#include <iostream>

using namespace std ;
int main(){
    int A[] = {1,8,9,10,2,3,4,5 };
    int n = size(A);
    vector<int> left;
        vector<int> right;
        
        int count1 = 1;
        int count2 = 1;
        left.push_back(count1);
        right.push_back(count2);
        for(int i = 1 ; i < n ;i++){
            if(A[i-1] < A[i]){
                count1 ++ ;
                left.push_back(count1);
            }
            else{
                count1= 1 ;
                left.push_back(count1);
            }
        }

    reverse(right.begin() , right.end());
    
        for(int i = n-2 ; i >=0 ;i--){
        
            if(A[i] > A[i+1]){
               
                count2 ++ ;
                right.push_back(count2);
            }
            else{
                count2 = 1 ;
                right.push_back(count2);
            }
        }

        int ans = 0 ;
    reverse(right.begin() , right.end());
    for(int i = 0 ; i<n ; i++){
            ans += max(right[i], left[i]);
//        cout <<ans<<endl ;
        
    }
    



    cout << ans <<endl  ;
    
    for(auto x : right)
        cout << x <<endl ;
    
  

}
