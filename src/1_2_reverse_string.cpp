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
char* reverse(char*);
void swap(char* a, char* b);

int main(){
    char input[256];
    cout << "Enter a string:" << endl;
    cin.getline(input, 256);
    cout << "Reverse: " << reverse(input) << endl;
}

char* reverse(char * s){
    char* e = s, *b = s;
    while(*e != '\0') ++e;
    --e;
    while(b < e) swap(e--, b++);
    return s;
}

void swap(char* a, char* b){
  char tmp = *a;
  *a = *b;
  *b = tmp;
}
