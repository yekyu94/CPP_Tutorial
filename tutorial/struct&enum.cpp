#include <iostream>
using namespace std;

struct brand{
    enum{
        NAME_LEN = 20,
        LOC_LEN = 20
    };

    int ID;
    char name[NAME_LEN];
    char loc[LOC_LEN];

    void Show();
}; // typedef 명시 불필요

int main(void)
{
    brand BuggerKing = {1, "BuggerKing", "유성온천역"};
    brand PizzaHot = {2, "PizzaHot", "충남대학교"};

    cout << BuggerKing.ID << BuggerKing.name << BuggerKing.loc << endl;
    cout << PizzaHot.ID << PizzaHot.name << PizzaHot.loc << endl;
    
    BuggerKing.Show();
    return 0;
}

void brand::Show(){
    cout << "ID : " << ID << "\nname : " << name << "\nloc : " << loc << endl;
}