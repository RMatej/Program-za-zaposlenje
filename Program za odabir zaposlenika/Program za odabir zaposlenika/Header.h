//
//  Header.h
//  Program za odabir zaposlenika
//
//  Created by Matej Rajcic on 19.11.2015..
//  Copyright (c) 2015. Matej Rajcic. All rights reserved.
//

#ifndef Program_za_odabir_zaposlenika_Header_h
#define Program_za_odabir_zaposlenika_Header_h

#include <iostream>
#include <vector>
#include <string>
using namespace std;


void UnesiIme (string ime, string prezime)
{
    cout<<"Unesite vase ime i prezime"<<endl;
    cin>>ime>>prezime;
    cout<<ime<<" "<<prezime<<endl;
}
void UnesiStarost(int godine)
{
    cout<<"Koliko imate godina? "<<endl;
    cin>>godine;
    if (godine < 18) {
        cout<<"Morate imati više od 18 godina da bih se mogli prijavit za posao!"<<endl;
    }
    exit(0);
    
}
void UnesiSrednjuSkolu(string skola)
{
    cout<<"Unesite vašu srednju školu !"<<endl;
    cin>>skola;
    if (skola == "ets") {
        cout<<"Super idemo na sljedeci korak !"<<endl;
    } else {
        cout<<"Zao nam je ne mozete biti dio ovog tima s tom srednjom školom... Hvala";
    }


}





#endif
