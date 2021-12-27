//
//  searchSortedMatrix.cpp
//  Arrays
//
//  Created by CYBERHOAX on 27/12/21.
//
/*
 Given a matrix of integers A of size N x M and an integer B.
 In the given matrix every row and column is sorted in increasing order. Find and return the position of B in the matrix in the given form:
 If A[i][j] = B then return (i * 1009 + j)
 If B is not present return -1.

 Note 1: Rows are numbered from top to bottom and columns are numbered from left to right.
 Note 2: If there are multiple B in A then return the smallest value of i*1009 +j such that A[i][j]=B.

 Problem Constraints

 1 <= N, M <= 1000
 -100000 <= A[i] <= 100000
 -100000 <= B <= 100000

 Input Format

 The first argument given is the integer matrix A.
 The second argument given is the integer B.

 Output Format

 Return the position of B and if it is not present in A return -1 instead.

 Example Input

 A = [ [1, 2, 3]
           [4, 5, 6]
           [7, 8, 9] ]
 B = 2


 Example Output

 1011

 Example Explanation

 A[1][2]= 2
 1*1009 + 2 =1011
 */

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std ;

int main () {
    int A[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    
    int B = 2 ;
    int rowSize = size(A);

    int i  = 0 ;
    int j = size(A[0]) -1 ;
    int result = INT_MAX;
    while(i < rowSize&& j >=0){
        if(A[i][j] == B){
            
            result  = min(result , ((i+1) *1009 + j+1) );
            cout << result << endl ;
            cout << A[i][j] ;
            
            j -- ;
            
           
            
            
        }else if (A[i][j] < B){
            i++ ;
            
            
        }
        else if (A[i][j] > B){
            j -- ;
        }
    }
  
    // cout << result ;
        if(result  == INT_MAX){
            result = -1 ;
        }
        return result  ;
    }
