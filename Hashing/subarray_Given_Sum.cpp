//
//  subarray_Given_Sum.cpp
//  Hashing
//
//  Created by CYBERHOAX on 17/12/21.
//
//

#include <stdio.h>
#include <iostream>
using namespace std ;

int main() {
int A [] = {1,2,3,4,5};
int B = 5;
int n = size(A);
    int sum = 0 ;

for(int i = 0 ; i<n ;i++  ){
    sum += A[i] ;
  
    
    if(sum <= B){
        if(A[i] + A[i+1] == B){
            cout<<A[i] +A[i+1];
        }
    
//    cout << sum << endl ;
    }
    }
    
    




    
return 0 ;

}
