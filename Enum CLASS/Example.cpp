/*
    problem with regular enum (c language based)

*/

enum Gear{
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH,
    REVERSE

};

enum Color{
    Red,
    Green,
    Blue

};
void magic(int value){
    //something
}
int main(){

    enum Gear e1 = Gear::FIRST;
    enum Color e2= Color::Red;
    int n1 = (int) e1;
    magic(e1); // conversion



// std::cout<<(e1==e2)
}   