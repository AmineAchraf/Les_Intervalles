// IntervalleEX2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "TableauBorne.h"
#include <iostream>
    using namespace std;

    int main() {
        cout << "--- Test 1 : Tableau ---" << endl;
        Tableau t(3);
        t[0] = 7.5; t[1] = 2.5; t[2] = 3.5;
        t.affiche();             
        cout << "--- Test 2 : recopie et affectation ---" << endl;
        Tableau t2(t);
        t2[0] = 79;
        t.affiche();                       
        t2.affiche();                       
        Tableau t3(2);
        t3 = t;
        t3.affiche();                       
        cout << "--- Test 3 : TableauBorne ---" << endl;
        TableauBorne tb(5, 0, 10);
        tb.affiche();                       
        cout << "tb[2] = " << tb[2] << endl;    

        cout << "--- Test 4 : modification controlee ---" << endl;
        tb(1, 3);                           
        tb(2, 27);                      
        tb(10, 5);                         
        tb.affiche();                      
        return 0;
    }

