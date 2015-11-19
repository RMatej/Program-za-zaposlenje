//
//  main.cpp
//  Program za odabir zaposlenika
//
//  Created by Matej Rajcic on 18.11.2015..
//  Copyright (c) 2015. Matej Rajcic. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;


int main() {
    string imeOsobe, PrezimeOsobe;
    int godine;
    string imeSkole;

    
    UnesiIme(imeOsobe,PrezimeOsobe);
    UnesiStarost(godine);
    UnesiSrednjuSkolu(imeSkole);
    
    
}
