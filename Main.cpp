#include <iostream>
#include <string>

using namespace std;

class people{
    private: 
        string name;
        int age;
        string occupation;
        string branch;
    public: 
        people(){
            name = "That one Speed kid";
            age = 1000;
            occupation = "my mom is kinda homeless";
            branch = "outreach";
    
        }
        people(string name, int age, string occupation){
            this->name = name;
            this->age = age;
            this->occupation = occupation;
        }
        int getAge() {
            return age;
        }
        void setAge(int age) {
            this->age = age;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        string getOccupation(){
            return occupation;
        }
        void setOccupation(string occupation){
            this->occupation = occupation;
        }


};



int main(){

    people danna = people("Danna", 15, "Student");
    people Alejandra = people("Alejandra", 16, "student");
    people Muratalla = people("Muratalla", 33, "counselor");
    people Ashton = people("Ashton", 62, "Homeless");
    people paul = people("paul", 17, "pinar");

    danna.setAge(16);

    cout << "Age: " << danna.getAge() << endl;
}