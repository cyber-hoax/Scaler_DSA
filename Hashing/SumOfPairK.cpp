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
 int A[] = {2,7,11,15};
int k = 13;
int n = size(A);

unordered_map<int, int> B ;

for(int i = 0 ; i <n ; i++ ){
    if(B.find(A[i]) == B.end()){
        B.insert({A[i],1}) ;
    }
    
}


for(int i = 0 ; i<n ;i++){
    
    if(B.find(k - A[i]) != B.end() && A[i] != k - A[i]){
        cout <<A[i] << endl;
    }
    
}
return 0 ;
}



