//
//  arrayWIthConsecElems.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 11/02/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std ;

int main (){
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(5);
    sort(A.begin(), A.end());
       if(A.size() ==1)
       return 1;
       else{
       for(int i = 1 ; i < A.size()-1 ; i++){
           if(A[i -1 ] + 1 != A[i] || A[i-1] == A[i])
           return 0;
       }

       }
       return 1;
}
