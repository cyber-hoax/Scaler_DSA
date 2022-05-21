//
//  fibonacci.cpp
//  DynamicProgramming
//
//  Created by CYBERHOAX on 21/05/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n =4;
//    cin >> n;
    
    vector<int> v(n+1 , -1);
    
    v[0] = 1;
    v[1] = 0;
    
    for(int i=2 ; i<=n ;i++){
        v[i] = v[i-1] + v[i-2];
    }
    
    cout << v[n];
    
}
