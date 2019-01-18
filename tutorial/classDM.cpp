#include <iostream>
using namespace std;

class user{
    int ID;
    int PW;
    char name[20];
    
public:
    void Init(int userID, int userPW, char *userName){
        ID = userID;
        PW = userPW;
        strcpy(name, userName);
    }
    
    void show(){
        cout << ID << endl;
        cout << PW << endl;
        cout << name << endl;
    }
};

int main(void){
    user A, B;
    A.Init(1, 123, "IM_A");
    B.Init(2, 123, "IAM_B");
    
    A.show();
    B.show();
    
    // 동적할당
    user *ptrObj = new user;
    ptrObj->Init(3, 123, "IM_DM");
    ptrObj->show();
    
    return 0;
}
