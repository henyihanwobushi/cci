/* ========================================================
 *   Copyright (C) 2015 All rights reserved.
 *   
 *   filename : 1_1_unique_char.cpp
 *   author   : ***
 *   date     : 2015-03-17
 *   info     : 
 * ======================================================== */
#include <iostream>
using namespace std;
bool unique(char*);
int main(){
    char input[256]; 
    cout << "Enter a string:" << endl;
    cin.getline(input, 256);
    cout << "Unique? " << (unique(input)?"True":"False") << endl;
}

bool unique(char * s){
    char * c = s;
    bool t[256];
    for(int i = 0; i < 256; i++) t[i] = false;
    while(*c != '\0'){
        if(t[*c] == true) return false;
        t[*(c++)] = true;
    }
}
