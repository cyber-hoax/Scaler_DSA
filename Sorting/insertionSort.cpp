//
//  insertionSort.cpp
//  Sorting
//
//  Created by CYBERHOAX on 10/02/22.
//
// sorting using insertionsort


#include <stdio.h>
#include <iostream>

using namespace std ;

int main(){
    int A[] = {4,2,5,6,7,1,5};
    int n = size(A);
    for(int i = 1 ; i< n ; i++){
        int temp = A[i];
        int j= i-1;
        
        while(temp < A[j] && j>= 0){
            A[j+1] = A[j];
            j-- ;
        }
        
        A[j+1] =temp;
    }
    
    for(auto n: A)
        cout<< n << " " ;
}
