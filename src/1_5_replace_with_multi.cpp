#include <iostream>
using namespace std;

char* replace(char*);

int main(){
    char input[256];
    cout << "Enter a string:" << endl;
    cin.getline(input, 256);
    cout << "Result: " << replace(input) << endl;
}

char* replace(char* s){
    char * b = s;
    int space_count = 0, str_len = 0;
    while(*b != '\0'){
        str_len++;
        if(*b++ == ' ') space_count++;
    }
    int r_len = str_len + 2 * space_count + 1;
    char* r = new char[r_len];
    str_len = 0;
    b = s;
    r[r_len] = '\0';
    while(*b != '\0'){
        if(*b != ' ')
            r[str_len++] = *b;
        else{
            r[str_len++] = '%';
            r[str_len++] = '2';
            r[str_len++] = '0';
        }
        b++;
    }
    return r;
}
