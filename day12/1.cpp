#include <iostream>
#include <variant>


std::variant<int, float> data;


int main() {
int a = 5;
float b = 5.0f;

std::variant<int, float> result_a 
std::variant<int, float> result_b

std::cout << "Result of a: " << std::get<int>(result_a) << std::endl;
std::cout << "Result of b: " << std::get<float>(result_b)<<std::endl;
}