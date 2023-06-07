#include <iostream>
enum class Gear: int{
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH,
    REVERSE

};

enum class Color: char{

    Red,
    Green,
    Blue
};

void magic(int value){
    // something
}

int main(){
    enum class Gear g1 = Gear::FIRST;
    enum class Color c1= Color::Red;
    magic(g1);
    // std::cout<<(g1==c1);

}