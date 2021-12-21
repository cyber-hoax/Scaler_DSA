//
//  func.cpp
//  LearningTheLang
//
//  Created by CYBERHOAX on 21/12/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//call by values
int add(int a, int b){
    int c ;
    c = a+ b ;
    return(c);
}

//call by addresses
void swap(int *m , int *n ){
    int temps ;
    
    temps = *m;
    *m = *n;
    *n = temps ;
    
}


//call by reference


void swaps(int &f, int &g){
    int temp;
    temp = f;
    f = g;
    g =temp ;
}


//returning an array

//int [] fun(int n){
//    int *p ;
//    p
//}


int main(){
    int x,y, z ;
    x = 10;
    y = 5;
    z = add(x,y);
    cout << z << endl;
    
    int r,s;
    r = 10;
    s =20;
    swap(&r,&s);
    cout << r<< endl ;
    
    int t,u;
    t =30 ;
    u = 50;
    swap(t,u);
    cout<<t <<" " << u << endl;
    
    return 0;
    
}
