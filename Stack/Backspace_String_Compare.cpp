//
//  Backspace_String_Compare.cpp
//  Stack
//
//  Created by CYBERHOAX on 01/05/22.
//

#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std ;

int main(){
    string s = "xywrrmp";
    string t ="xywrrmu#p" ;
    
    //O(n) solution
//            stack<char> st1;
//            stack<char> st2 ;
//
//            for(int i = 0 ; i < s.length() ; i++){
//                if(s[i] != '#'){
//                    st1.push(s[i]);
//                }
//                else{
//                    if(!st1.empty())
//                        st1.pop();
//                }
//
//            }
//
//            for(int i = 0 ; i<t.length() ; i++){
//
//                if(t[i] != '#'){
//                    st2.push(t[i]);
//                }
//                else{
//                    if(!st2.empty()){
//                        st2.pop();
//                    }
//                }
//
//            }
//
////    while(!st2.empty()){
////        cout <<st2.top();
////        st2.pop();
////    }
//    cout << st1.size() <<endl;
//    cout << st2.size() << endl ;
//
////    cout << st1.size();
//
//
//            if(st1.size() != st2.size())
//                cout << false;
//
//
//            while(!st1.empty()){
//                if(st1.top() !=st2.top())
//                    cout << false;
////                    return false;
//                st1.pop();
//                st2.pop();
//            }
//
//    cout<<true;
//            return true;
//    string s = "xywrrmp";
//    string t ="xywrrmu#p" ;
//
    int k = 0 , p = 0;
    
    for(int i = 0 ; i <s.length() ; i++){
        if(s[i] == '#'){
            k -- ;
            k = max(0,k);
        }
        else{
            s[k] = s[i];
            k++ ;
        }
    }
    
    for(int i = 0 ; i <t.length(); i++){
        if(t[i] == '#'){
            p--;
            p = max(0,p);
        }
        else{
            cout << t[p] << endl ;
            t[p] = t[i];
            p ++ ;
        }
    }
    
    if(k!=p)
        return false;
    for(int i = 0 ; i <p ; i++){
        if(s[i] != t[i])
            return false;
        
    }
    
    return true ;
    
}
