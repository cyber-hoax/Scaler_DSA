//
//  stack.cpp
//  LearningTheLang
//
//  Created by CYBERHOAX on 04/01/22.
//

#include <iostream>
#include <stack>

using namespace std ;

int n =100 , top = -1 ;
stack<int> stacktable ;
void push(int data){
    
    stacktable.push(data);
    
}

void pop(){
    if(stacktable.empty())
        cout<<"stack is empty";
    else{
        stacktable.pop();
    }
    
}

int main(){
    int val = 10;
    push(val);
    int c = stacktable.top();
//    cout<<stacktable.top() << endl;
//    int c = pop();
    cout << c ;
    
}


int n = a.size();
        int m = a[0].size();
        bool firstRow = false;  // do we need to set first row zero
        bool firstCol = false;  // do we need to ser first col zero
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    if(a[i][j] == 0){   // store rows and cols state in first row and col
                    if(i==0) firstRow = true;
                    if(j==0) firstCol = true;
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }
        // cout<<firstRow<<" "<<firstCol<<endl;
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<m;i++) a[0][i] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<n;i++) a[i][0] = 0;
        }
