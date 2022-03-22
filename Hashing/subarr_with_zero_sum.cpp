//
//  subarr_with_zero_sum.cpp
//  Hashing
//
//  Created by CYBERHOAX on 22/03/22.
//

#include <stdio.h>
#include <iostream>
#include <unordered_set>

using namespace std ;

int main (){
    int A[]= {96, -71, 18, 66, -39, -32, -16, -83, -11, -92, 55, 66, 93, 5, 50, -45, 66, -28, 69, -4, -34, -87, -32, 7, -53, 33, -12, -94, -80, -71, 48, -93, 62};
    int sum = A[0];
//    int maxm = INT_MIN ;
    int n = size(A);
    unordered_set<int> sl;

    for(int i = 1 ; i <n ; i++){
        
        sum += A[i];
        if(sum == 0 || sl.find(sum) != sl.end() )
            return 1;
        else{
            sl.insert(sum);
        }
    }
    return 0;
}

