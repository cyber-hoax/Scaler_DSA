//
//  largestNumnber.cpp
//  Sorting
//
//  Created by CYBERHOAX on 27/12/21.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A[] = {3,30,34,5,9};
    int n = size(A);
    vector<string> vect ;
    for(auto i : A)
        vect.push_back(to_string(i));
    sort(vect.begin() , vect.end() , [](string &s1, string &s2) {
        return s1 +s2> s2+s1 ;
    });
    string res ;
    for(auto s : vect)
        res += s ;
    
    while(res[0] == '0' && res.length()>1)
        res.erase(1,0);
    
    cout << res;
    return 0;
}
