//
//  PrintNumbers.cpp
//  RecursionPractice
//
//  Created by CYBERHOAX on 24/05/22.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int printNum(int A){
    if(A <=0)
        return 0;
    cout<< A << endl ;
    printNum(A-1);
    cout<< A << endl ;
    return 0;
}

int main(){
    int A= 10;
    printNum(A);
    
}
