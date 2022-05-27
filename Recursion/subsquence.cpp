//
//  subsquence.cpp
//  Recursion
//
//  Created by CYBERHOAX on 21/05/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void printSeq(vector<int> v, int index, vector<int> &arr, int n){
    
    if(index == n){
        for(auto it: arr){
            cout << it <<" ";
        }
        if(arr.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    
    arr.push_back(v[index]);
    printSeq(v, index+1, arr, n);
    arr.pop_back();
   
    printSeq(v, index+1, arr, n);
}



bool printSumSeq(vector<int> v, int index, vector<int> &arr, int n, int B, int sum){
    
    if(index == n){
        if (sum == B){
           
            return true;
        }
        else{
            return false;
        }
    }
    
    arr.push_back(v[index]);
    sum += v[index];
    if(printSumSeq(v, index+1, arr, n, B, sum) == true){
        return true;
    }
    sum -= v[index];
   
    
    arr.pop_back();
   
    if(printSumSeq(v, index+1, arr, n, B, sum) == true )
        return true;
    
    return false;
}



int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    int n = v.size();
    vector<int> arr;

//    printSeq(v, 0, arr, n);
    
    //subsequence sum == B
//    int B = 5;
//    int count = 0 ;
//    printSumSeq(v, 0, arr, n, 0 , B, count);
//    return count ;
    int sum = 0;
    int B = 5 ;
    
//    return printSumSeq(v, 0, arr, n, B, sum);
     
    
}
