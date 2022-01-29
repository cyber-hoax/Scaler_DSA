//
//  RowwithMaxNumberOfOnes.cpp
//  AdvancedArray
//
//  Created by CYBERHOAX on 29/01/22.
//
/*
 Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.

 NOTE:

 If two rows have the maximum number of 1 then return the row which has a lower index.
 Rows are numbered from top to bottom and columns are numbered from left to right.
 Assume 0-based indexing.
 Assume each row to be sorted by values.
 Expected time complexity is O(rows).


 Problem Constraints

 1 <= N <= 1000

 0 <= A[i] <= 1



 Input Format

 The only argument given is the integer matrix A.



 Output Format

 Return the row with the maximum number of 1.



 Example Input

 Input 1:

  A = [   [0, 1, 1]
          [0, 0, 1]
          [0, 1, 1]   ]
 Input 2:

  A = [   [0, 0, 0, 0]
          [0, 1, 1, 1]    ]


 Example Output

 Output 1:

  0
 Output 2:

  1


 Example Explanation

 Explanation 1:

  Row 0 has maximum number of 1s.
 Explanation 2:

  Row 1 has maximum number of 1s.
 */


#include <stdio.h>
#include <iostream>

using namespace std ;

int main(){
    int A[2][4] = {{0,0,0,0} , {0,1,1,1}};
    
    
    //brutrforce approach
    int  nrow = size(A);
    int ncol = size(A[0]);
    
    int maxOne = 0;
    int maxRow = INT_MAX ;

    for(int i = 0 ; i < nrow ; i++ ){
        int temp = 0  ;
        for(int j = 0 ; j <ncol ; j++){
            if(A[i][j] == 1)
               temp ++ ;
        }
        if(maxOne == temp )
            maxRow = min(maxRow ,  i);
        else{
            if(temp > maxOne){
                maxOne = temp ;
                maxRow = i;
            }
        }
    }
    cout << maxRow ;

}

