#include <iostream>

/* Inline 함수 시작 */
inline int SUM(int x, int y){
    return x+y;
}

/* 매크로 함수 시작 */
# define SQUARE(x) (x*x)


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    printf("%d\n", SQUARE(10));
    printf("%d\n", SUM(1,2));

    return 0;
}