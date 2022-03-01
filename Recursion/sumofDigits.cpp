//
//  sumofDigits.cpp
//  Recursion
//
//  Created by CYBERHOAX on 25/02/22.
//

#include <iostream>
using namespace std ;

int sumOfDigit(int n){
    if(n == 0)
        return 0;
    else{
        return (n%10 + sumOfDigit(n/10));
    }
}

int main(){
    int A = 12345;
    return sumOfDigit(A);
}

