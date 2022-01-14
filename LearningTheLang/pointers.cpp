//
//  pointers.cpp
//  LearningTheLang
//
//  Created by CYBERHOAX on 20/12/21.
//

#include <stdio.h>
#include <iostream>

using namespace std ;


int main(){
    int a = 10 ;
    int *p = &a;
   
    
    cout << &a << endl;
    cout << p;
    
    //memory allocating array in heap
    
//    p = new int[5];
//    int &d = a;
//    cout << a <<endl;
//    d++;
//    cout<< a;
    
    
    return 0 ;
    
}
