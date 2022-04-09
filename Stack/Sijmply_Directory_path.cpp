//
//  Sijmply_Directory_path.cpp
//  Stack
//
//  Created by CYBERHOAX on 09/04/22.
//
/*
 Given a string A representing an absolute path for a file (Unix-style).

 Return the string A after simplifying the absolute path.

 Note:

 Absolute path always begin with '/' ( root directory ).

 Path will not have whitespace characters.


 Input Format

 The only argument given is string A.
 Output Format

 Return a string denoting the simplified absolue path for a file (Unix-style).
 For Example

 Input 1:
     A = "/home/"
 Output 1:
     "/home"

 Input 2:
     A = "/a/./b/../../c/"
 Output 2:
     "/c"
 */

#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    string path = "/home//foo";
    stack<string> st;
   string res;
   
   for(int i = 0;  i<path.size(); i++)
   {
       if(path[i] == '/')
           continue;
       string temp;
       // iterate till we doesn't traverse the whole string and doesn't encounter the last /
       while(i < path.size() && path[i] != '/')
       {
           // add path to temp string
           temp += path[i];
       
           i++;
       }
       if(temp == ".")
           continue;
       // pop the top element from stack if exists
       else if(temp == "..")
       {
           if(!st.empty())
               st.pop();
       }
       else
       // push the directory file name to stack
           st.push(temp);
   }
   
   // adding all the stack elements to res
   while(!st.empty())
   {
       string r = st.top();
       reverse(r.begin(), r.end());
   
   res += r+"/" ;
       st.pop();
   }
   
   // if no directory or file is present
   if(res.size() == 0)
       cout << "/";
    reverse(res.begin(), res.end());
   cout << res ;
}

