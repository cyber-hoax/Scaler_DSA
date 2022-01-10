//
//  balancedParanthesis.cpp
//  Stack
//
//  Created by CYBERHOAX on 04/01/22.
//

/*
 
 */

#include <stdio.h>
#include <iostream>
#include <map>


using namespace std ;

int main(){
    string A ="{([])}" ;
    stack<char> st;
    for(auto s : A){
        if(s == '{' || s == '(' || s = '[') st.push(s);
        else{
            if(st.empty() || (st.top() == '(' && s!=')') || (st.top() == '{' && s!='}') or (s.top() == '[' && s! !=']')) {
                return false;
                
        }
            st.pop() ;
            
    
    }
       
}
    return st.empty();
}
