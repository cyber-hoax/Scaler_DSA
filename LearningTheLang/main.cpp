//
//  main.cpp
//  LearningTheLang
//
//  Created by CYBERHOAX on 20/12/21.
//

#include <iostream>


using namespace std;

struct Name {
    string firstName;
    string LastName ;
    
};

int main(){
    struct Name name ;
    
    name.firstName = "Raunak";
    name.LastName = "Tamang" ;
    
    
    cout << name.firstName << " " + name.LastName;
    
    return 0 ;
}






