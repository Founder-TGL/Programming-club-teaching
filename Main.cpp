#include <iostream>

int main(){

    int var1;
    int var2;
    int answer;

    std::cout << "what is the first number: ";
    std::cin >> var1;
    std::cout << "what is the second number: ";
    std::cin >> var2;
    
    answer = var1 + var2;

    std::cout << var1 << " + " << var2 << " = " << answer << "\n";


    return 1;
}