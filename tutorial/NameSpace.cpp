#include <iostream>

/* NameSpace 시작 */
namespace NS1 {
    void MyFunc();
}
namespace NS2 {
    void MyFunc();
}
namespace DoubleS1 {
    namespace DoubleS2{
        void MyFunc(){
            std::cout << "DoubleS1~2 - MyFunc" << std::endl;
        }
    }
        namespace DoubleS3{
            void UsingFunc(){
                std::cout << "DoubleS1-3 - UsingFunc" << std::endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    NS1::MyFunc();
    NS2::MyFunc();
    DoubleS1::DoubleS2::MyFunc();
    using DoubleS1::DoubleS3::UsingFunc;
    UsingFunc();

    return 0;
}

void NS1::MyFunc(){
    std::cout << "NS1 - MyFunc" << std::endl;
}

void NS2::MyFunc(){
    std::cout << "NS2 - MyFunc" << std::endl;
}