//
//  powerFunction.cpp
//  Recursion
//
//  Created by CYBERHOAX on 03/01/22.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int powerSum (int A ,  int B){
    if(B ==0 ){
        return 1;

    }
    else{
        int prevSum = powerSum(A, B-1);
        return A * prevSum ;
        
    }
}

int main(){
    int c = powerSum(-1, 1) ;
    cout << c %20 << endl;
    return 0;
}


