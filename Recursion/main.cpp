//
//  main.cpp
//  Recursion
//
//  Created by CYBERHOAX on 03/01/22.
//

#include <iostream>


using namespace std ;

int Sum(int n){
    if(n == 0 ){
        return 0;
        
    }else{
        int prevSum = Sum(n-1);
        return n + prevSum ;
        
    }
    
}

int main(){
    
    int n = 5 ;
    cout<<Sum(n)<< endl ;
    
}
