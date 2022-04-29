//
//  MergeIntervals.cpp
//  Arrays
//
//  Created by CYBERHOAX on 27/04/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>

using namespace std ;

int main(){
    vector<vector<int>> intervals {
                                    {1,3},
                                    {6,9}};
    
    vector<vector<int>> newInterval {{1,5}};
  
   
    vector<vector<int>> ans ;
    vector<int> v;
       stack<int> st;
       int flag = 0 ;
       int curr = 0 ;
       for(int i = 0 ; i < intervals.size() ;i++){

           for(int j = 0 ; j<intervals[i].size(); i++){
               cout << " newinter" << intervals[i][j] <<endl;

               if(flag == 1){
                   
                   if(intervals[i][j] > newInterval[0][1]){

                       if(!st.empty() && st.top() < newInterval[0][1]){
                       v.push_back(newInterval[0][1]);
                           flag ++ ;
                           break;
                           
                       }
                       else{
                           curr = st.top();
                           v.push_back(curr);
                           flag ++ ;
                           break;
                       }
                      
                   }
                   else{
                       st.push(newInterval[i][j]);

                   }
                  
               }

               else if(flag >=2){
                   v.push_back(intervals[i][j]);
               }

               else{
                   if (intervals[i][j] > newInterval[0][0]){
                      
                    
                       v.push_back(newInterval[0][0]);
                       flag ++ ;


                   }
                   else{
                       
                       v.push_back(intervals[i][j]);
                       flag++ ;
                   }
               }
              
           }

           if(v.size() == 2){
               ans.push_back(v);
               v.clear();
           }
               
       }
        
    for (int i = 0; i < ans.size(); i++)
          for (int j = 0; j < ans[0].size() ; j++)
     
             // Prints ' ' if j != n-1 else prints '\n'
              cout << ans[i][j] << endl ;
    
       return 0 ;
    
    

}

