#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char *RTStringArray(int);

int main(void)
{
    char *str = RTStringArray(10);
    strcpy(str, "Hello World");

    cout<< str << endl;


    int *ptr = new int;
    int &ref = *ptr;
    ref = 20;
    cout << ref << endl;
    cout << &ref << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}

char *RTStringArray(int len){
    char *str = new char[len];
    return str;
}