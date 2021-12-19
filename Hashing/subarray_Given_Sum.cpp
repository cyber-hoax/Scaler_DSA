//
//  subarray_Given_Sum.cpp
//  Hashing
//
//  Created by CYBERHOAX on 17/12/21.
//
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>

using namespace std ;

int main() {
int A [] = {5, 10, 20, 100, 105};
int B = 110;
int n = size(A);
int sum = 0;
    
unordered_map<long, int> result ;

for(int i = 0 ; i < n ; i ++) {
    sum += A[i] ;
    if(sum <= B){
        result.insert({A[i],1});
    }
    else{
            result.insert({A[i],1});
        break;
    }
    
}
   

    for (int m = 0 ; m < size(result) ; m++){
        if(result.find(B - result[m]) == result.end()){
            
            result.erase(result.find(result[m]));
           
            
        }
        else{
            break ;
        }
    

    }
   

   
    for (auto i :  A)
        if(result.find(i) != result.end()){
            cout<< i << " " ;
        }
        else{
            cout << -1 ;
        }
    
     return 0 ;

}
