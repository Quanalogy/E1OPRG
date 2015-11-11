//
// Created by Munke on 08-10-2015.
//

#include "Cat.h"

#include <iostream>
using namespace std;

void Cat::speak(){
    if(happy){
        cout << "Miaaaauv" << endl;
    } else{
        cout << "Angry Miaaaaaauv!" << endl;
    }

}

void Cat::jump(){
    cout << "The cat just jumped!" << endl;
}