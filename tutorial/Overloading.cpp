#include <iostream>

int MyFunc();
int MyFunc(int);
int MyFunc(int, int);
char* MyFunc(char);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    printf("%d\n", MyFunc());
    printf("%d\n", MyFunc(1));
    printf("%d\n", MyFunc(1,2));
    printf("%s\n", MyFunc('A'));

    return 0;
}

/* 함수 오버로딩 시작 */
int MyFunc(void){
    return 0;
}

int MyFunc(int num){
    return ++num;
}

int MyFunc(int num1, int num2){
    return num1+num2;
}

char* MyFunc(char x){
    static char tmp[3];
    tmp[0] = x;
    tmp[1] = x;
    tmp[2] = '\0';
    return tmp;
}