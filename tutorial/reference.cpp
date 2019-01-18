#include <iostream>

using namespace std;

void RFFunc(int &ref){
    ref++;
}

int& RTFunc1(int &ref){
    return ref;
}

int RTFunc2(int &ref){
    return ref;
}

int main(int argc, const char * argv[]) {
    int id = 1004;
    int &id2 = id;
    id2 = 2000;
    
    cout<<id<<endl;
    cout<<id2<<endl;
    cout<<&id<<endl;
    cout<<&id2<<endl;
    
    int x = 0;
    cout<<x<<endl;  // 0 출력
    RFFunc(x);      // x를 1로 변경시킴
    cout<<x<<endl;  // 1 출력
    
    int &tmp1 = RTFunc1(x);
    // int &tmp2 = RTFunc2(x); // 애러 발생

    cout<< "tmp1 :" << tmp1 <<endl; 
    cout<< "&x :" << &x << endl;
    cout<< "&tmp1 :" << &tmp1 << endl;
    cout<< "&function :" << &RTFunc1(x) << endl;

    const int conData = 10;
    const int &conRef = conData;    // 상수를 참조자는 상수로 선언해야 함(아니면 애러)
    

    return 0;
}

