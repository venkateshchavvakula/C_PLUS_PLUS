#include <iostream>

int addNumber(int a, int b){
    return a + b;
}

int main(){
    int firstNumber {13};
    int secondNumber {13};
    int sum = firstNumber + secondNumber;
    std::cout << sum << std::endl;
    std::cout << addNumber(1,2) << std::endl;
    return 0;
}