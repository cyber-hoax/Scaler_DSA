//
//  powerExponential.cpp
//  Recursion
//
//  Created by CYBERHOAX on 02/02/22.
//

// use power function to use power exponential and use mod


#include <stdio.h>
#include <iostream>

using namespace std ;

int pow(int a ,  int n,  int p ){
    
    if(a == 0)
        return 0;
    if(n == 0 )
        return 1;
    
    if(a<0 && n== 1)
        return ((a+p ) % p );
    
    int hp = pow(a, n/2 , p);
    
    if(n % 2 == 0)
        return (hp * hp) % p ;
    
    else
        return ((hp * hp)%p * n %p) %p ; 
    
}



int main (){
    int a = -1;
    int b = 1;
    int c = 20 ;
    
    return pow(a,b,c) ;
    
    
    
}
