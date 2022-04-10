//
//  Baseball_Game.cpp
//  LeetCode
//
//  Created by CYBERHOAX on 10/04/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main (){
    string ops[] = {"1"};
    
    int temp ;
    vector<int> vec;
    int n = size(ops);
    for(int i = 0; i<n ; i++){
        if(ops[i] == "C")
            vec.pop_back();
        else if(ops[i] == "D"){
           
            int mul = vec[vec.size()-1] * 2;
          
        vec.push_back(mul);
            temp = mul ;
        }
        else if(ops[i] == "+"){
            int add = vec[vec.size()-1 ]+ vec[vec.size()-2 ];
           
            vec.push_back(add);
            temp = add;
        }
        
        else{
            int number = stoi(ops[i]);
            vec.push_back(number);
            temp = number;
        }
    }
    
    int sum = 0;
    for(int i = 0 ; i < vec.size() ; i++){
        sum += vec[i];
    }
    
    cout << sum ; 
    
}
