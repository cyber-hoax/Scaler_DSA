//
//  stairs.cpp
//  DynamicProgramming
//
//  Created by CYBERHOAX on 21/05/22.
//

#include <stdio.h>
#include <iostream>


using namespace std;

int main(){
    int A = 5;
    
    int ways[A+1];
    ways[0] =1;
    ways[1] =1;
    
    for (int i = 2; i <= A; i++){
        ways[i] = ways[i-1] + ways[i-2];
        
    }
    return ways[A];
}

