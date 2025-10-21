#include <iostream>

using namespace std;
int add();
int main(){
    int counter;
    counter = add();
    return 1;
}

int add(){
    int counter = 0, addNum;

    // == equals / != not equals / > greater than / < less than / >= greater and equal
    

    while(addNum != 0){
        cout << "input number to add to counter (0 to quit): " << endl;
        cin >> addNum;
        counter += addNum;      
    }
    
    return counter;
}