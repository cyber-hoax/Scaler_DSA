//
//  closestMinMax.cpp
//  Arrays
//
//  Created by CYBERHOAX on 25/12/21.
//
/*
 Problem Description

 Given an array A. Find the size of the smallest subarray such that it contains atleast one occurrence of the maximum value of the array

 and atleast one occurrence of the minimum value of the array.



 Problem Constraints

 1 <= |A| <= 2000



 Input Format

 First and only argument is vector A



 Output Format

 Return the length of the smallest subarray which has atleast one occurrence of minimum and maximum element of the array



 Example Input

 Input 1:

 A = [1, 3]
 Input 2:

 A = [2]


 Example Output

 Output 1:

  2
 Output 2:

  1


 Example Explanation

 Explanation 1:

  Only choice is to take both elements.
 Explanation 2:

  Take the whole array.
 */

/*
 approach --------- >
 
 //        20, 3, 13, 5
         //
         //        20 -
         //        20, 3 +
         //        20, 3, 13 +
         //        20, 3, 13, 5 +
         //        3, -
         //        3, 13 -
         //        3, 13, 5 -
         //        13 -
         //        13 5 -
         //        5 -
         // o/p - 2 smallest length
 
 */

#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std ;
 
int main(){
    int A[] = {20, 3, 13, 5};
    
    int n = size(A);
//    int max = *max_element(A , A+n) ;
//    int min = *min_element(A , A+n) ; ;
//    int result = 0 ;
//
//    vector<int> minm ;
//    vector<int> maxm ;
//
//    if(n == 1 || n == 0){
//        result = 1;
//        return result ;
//    }
//    else{
//    for(int i = 0 ; i< n  ; i++){
//        if(A[i] == min  ){
//            minm.push_back(i);
//        }
//        else if(A[i] == max){
//            maxm.push_back(i);
//
//        }
//    }
//
////    for (auto m : minm){
////        cout << m << " "  ;
////    }
////
////    cout << endl;
////    for (auto j : maxm){
////        cout << j<< " " ;
////    }
//
//    sort(minm.begin(), minm.end());
//
//    sort(maxm.begin(), maxm.end());
//
//    cout << endl ;
//            cout << min << " " << max <<endl;
//    for (auto m : minm){
//        cout << m << " "  ;
//    }
//
//    cout << endl;
//    for (auto j : maxm){
//        cout << j<< " " ;
//    }
//
//    result = abs(minm[0] - maxm[0]) +1 ;
//
////    cout << result ;
//
//    }
//    return result ;
//
//
    
    int minValue = *min_element(A, A + n);
        int maxValue = *max_element(A, A + n);

        int pos_min = -1, pos_max = -1, ans = INT_MAX;


        for (int i = 0; i < n; i++) {

            if (A[i] == minValue)
                pos_min = i;

            if (A[i] == maxValue)
                pos_max = i;

            if (pos_max != -1 and pos_min != -1)
                ans = min(ans, abs(pos_min - pos_max) + 1);
        }

        return ans;
    
}


