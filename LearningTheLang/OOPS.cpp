//
//  OOPS.cpp
//  LearningTheLang
//
//  Created by CYBERHOAX on 24/03/22.
//

#include <stdio.h>
#include <iostream>

using namespace std ;

class employee{
    public :
    string Name;
    string Company;
    int Age;
    
    void printemployee(){
        cout << Name<< endl;
        cout << Company << endl ;
        cout << Age << endl;
    }
    
    employee(string name, string company , int age){
        Name = name;
        Company = company;
        Age = age ;
        
    }
    
};

int main(){
//    employee emp1;
//    emp1.Name = "raunak" ;
//    emp1.Company= " resolute";
//    emp1.Age = 25 ;
//    emp1.printemployee();
    
    employee emp1 = employee("raunak" , "resolute" , 25);
    emp1.printemployee() ;
    
}
