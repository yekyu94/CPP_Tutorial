#include <iostream>
using namespace std;

class user{
    int ID;
    int PW;
    char name[20];
    
public:
    user(){
        ID = 0;
        PW = 0;
        strcpy(name, "홍길동");
    }
    // 초기화의 다른 방법
    user(int A, int B, char *C):ID(A), PW(B){
        strcpy(name, C);
    }
    
    void show(){
        cout << ID << endl;
        cout << PW << endl;
        cout << name << endl;
    }
};

int main(void){
    user A;
    user B(100, 100, "하이");
    
    
    A.show();
    B.show();
    
    // 동적할당
    user *ptrObj = new user(1,1, "홍");
    ptrObj->show();
    
    return 0;
}
