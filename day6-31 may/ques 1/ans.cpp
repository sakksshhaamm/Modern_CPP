#include <iostream>
#include <string>
#include<list>
#include<functional>
using namespace std;

class Automobile
{
private:
    string automobileNumber;
    std::reference_wrapper<std::list<float>> automobileReading;

public:
    Automobile(string automobileNumber, std::reference_wrapper<std::list<float>>  reading)
    : automobileReading(reading), automobileNumber(automobileNumber)
    {
      
    }

    void display()
    {
        cout << "Automobile Number: " << automobileNumber << "\n";
        for(auto& a:automobileReading.get()){
            cout<<a;
        }
    }

    string getAutomobileNumber() const { return automobileNumber; }
    void setAutomobileNumber(const string &automobileNumber_) { automobileNumber = automobileNumber_; }

};

int main()
{
    list<float> l={10.7,40.6,30.9};

    Automobile* a1 = new Automobile("676guygyg",l);

    a1->display();

    return 0;
}
