#include <iostream>

void  calculator(int varA, int varB);

int main(){
    int var1;
    int var2;
    int answer;

    while(true){
        calculator(var1, var2);
    }

    return 1;
}

void  calculator(int varA, int varB){
    std::cout << "what is the first number: ";
    std::cin >> varA;
    std::cout << "what is the second number: ";
    std::cin >> varB;

    int answer = varA + varB;
    
    std::cout << varA << " + " << varB << " = " << answer << "\n";
}