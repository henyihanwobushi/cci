#include <iostream>

using namespace std;

bool anagram(char * s1, char * s2);
int* char_map(char * s);

int main(){
    char input_1[256], input_2[256]; 
    cout << "Enter a string:" << endl;
    cin.getline(input_1, 256);
    cout << "Enter an other string:" << endl;
    cin.getline(input_2, 256);
    cout << "Anagram? " << (anagram(input_1, input_2)?"True":"False") << endl;
    return 0;
}

bool anagram(char * s1, char * s2){
    int *a1 = char_map(s1), *a2 = char_map(s2);
    for(int i = 0; i < 256; i++) if(a1[i] != a2[i]) return false;
    return true;
}

int* char_map(char * s){
    char * c = s;
    int *t = new int[256];
    for(int i = 0; i < 256; i++) t[i] = 0;
    while(*c != '\0') t[*(c++)] += 1;
    return t;
}
