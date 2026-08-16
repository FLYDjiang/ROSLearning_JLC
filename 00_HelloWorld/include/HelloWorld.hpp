#include <string>

class HelloWorld 
{
public:
    HelloWorld(std::string name,int age); 
    void myPrint();
private:
    std::string name;
    int age;
};