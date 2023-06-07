#include <iostream>

class Demo

{

private:
    int demoId;

public:
    explicit Demo(int id) : demoId(id) {}

    ~Demo() {}
};

void magic(Demo obj)

{
    std::cout << "Function is called: \n";
}

int main()

{
    Demo d1(10);

    magic(d1);
    // magic(10);
}