//
//  SumOfPairK.cpp
//  Hashing
//
//  Created by CYBERHOAX on 18/12/21.
//

#include <stdio.h>
#include <iostream>
#include <unordered_map>
using namespace std ;

int main() {
 int A[] = {1,2,3,4,5};
int B = 5;
int n = size(A);

unordered_map<int, int> K ;

for(int i = 0 ; i <n ; i++ ){
    if(K.find(A[i]) == K.end()){
        K.insert({A[i],1}) ;
    }
    
}


for(int i = 0 ; i<n ;i++){
    
    if(K.find(B - A[i]) != K.end() && A[i] != B - A[i]){
        cout <<A[i] <<" " ;
    }
    
}
    

return 0 ;
}



