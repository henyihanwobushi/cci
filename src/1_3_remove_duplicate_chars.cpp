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
char* unique(char*);
void swap(char* a, char* b);

int main(){
    char input[256];
    cout << "Enter a string:" << endl;
    cin.getline(input, 256);
    cout << "Unique: " << unique(input) << endl;
}

char* unique(char * s){
  char* end = s, *begin = s, *i;
  while(*end != '\0') ++end; --end;
  while(begin < end){
    i = end;
    while(i > begin){
//      cout << s << endl;
      if(*i == *begin) swap(i--, end--);
      else --i;
    }
    ++begin;
  }
  *(end + 1) = '\0';
  return s;
}

void swap(char* a, char* b){
  char tmp = *a;
  *a = *b;
  *b = tmp;
}
