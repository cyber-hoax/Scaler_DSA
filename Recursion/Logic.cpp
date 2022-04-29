//
//  Logic.cpp
//  Recursion
//
//  Created by CYBERHOAX on 28/04/22.
//

#include <stdio.h>
#include <iostream>

using namespace std;


bool fun(int i, string&n ){
    if(i == n.length()/2)
        return true;
    if(n[i] != n[n.length()-i-1])
        return false;
    return fun(i+1 , n ) ;
    
    
}

int main(){
    string n = "naman";
    return fun(0,n);
  
}
