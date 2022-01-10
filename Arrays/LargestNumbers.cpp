//
//  LargestNumbers.cpp
//  Arrays
//
//  Created by CYBERHOAX on 06/01/22.
//

#include <stdio.h>
#include <iostream>
//#include <string>
#include <vector>

using namespace std ;

int main(){
    vector<int> A;
    A.push_back(8);
    A.push_back(0);
    A.push_back(10);
    
    sort(A.begin(), A.end(),greater<int>());
    
     int n = A.size();
     int ans = 0;
     int sum = 0;
   
     for(int i = 0 ;i < n ; i++ ){
         sum =0 ;
        for(int j = i+1  ; j< n ; j++){
            sum += A[j];
            cout << "sum" << sum << endl ;
        }
        ans += A[i] + sum ;
         cout << ans << endl ;
     }
  
     return ans ;
 }


