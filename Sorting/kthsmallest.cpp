//
//  kthsmallest.cpp
//  Sorting
//
//  Created by CYBERHOAX on 20/03/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector<int> A;
    A.push_back(2);
    A.push_back(1);
    A.push_back(4);
    A.push_back(3);
    A.push_back(2);
    int B= 3 ;
    sort(A.begin() , A.end());
     
        // Return k'th element in the sorted array
        return A[B - 1];
}
