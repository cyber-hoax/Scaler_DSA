//
//  largestNumnber.cpp
//  Sorting
//
//  Created by CYBERHOAX on 27/12/21.
//

#include <stdio.h>
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int A[] = {3,30,34,5,9};
    int n = size(A);
    string result = to_string(A[0]);
    for(int i = 1; i < n ; i++){
        if(to_string(A[i]) >= result){
            result += A[i];
        }else{
            result += A[i];
        }
    }
    cout << result ;
    return 0;
}
