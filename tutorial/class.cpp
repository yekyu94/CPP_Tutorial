#include <iostream>
using namespace std;

class brand{
private:
    int ID;
    char Name[20];
    char Loc[20];
    
public:
    void Init(int ID, char *Name, char *Loc);
    void ShowInfo();
};
// 클래스의 변수들은 main등에서 직접 접근이 불가능하다.
// 따라서 클래스내의 변수에 접근할때는 클래스에 선언된 함수를 통해서 접근한다.
// 또한 이러한 접근에 있어서 클래스에는 '접근제어 지시자'라는 녀석을 통해서 접근 권한을 표시할 수 있다.
// 접근제어 지시자는 public, protected, private 의 3가지 경우가 존재한다.

int main(void)
{
    brand PB, PZ;
    PB.Init(1, "파리바게트", "충남대");
    PZ.Init(2, "피자헛", "유온역");
    PB.ShowInfo();
    PZ.ShowInfo();
    
    return 0;
}

void brand::Init(int I_ID, char *I_Name, char *I_Loc){
    ID = I_ID;
    strcpy(Name, I_Name);
    strcpy(Loc, I_Loc);
}

void brand::ShowInfo(){
    cout << ID << endl;
    cout << Name << endl;
    cout << Loc << endl;
}
