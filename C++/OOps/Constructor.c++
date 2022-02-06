#include <iostream>

using std::string;

// creating a class Scientist
class Scientist{

//There are 3 types of Access Modifiers
// 1. Private (By default in C++)
// 2. Public
// 3. Protected


// Now keeping the properties Public for simplicity 
public:
    string Name;
    string College;
    int Age;

     // Creating a method for Scientist to introduce themselves
    void IntroduceYourSelf(){
        std::cout<<" Name: "<<Name<<std::endl;
        std::cout<<" College: "<<College<<std::endl;
        std::cout<<" Age: "<<Age<<std::endl;
    }

    // Created a Constructor

    // Rules for Creating a Constructor
    // 1. An User-defined Constructor has no specified data type
    // 2. An User-defined Constructor must have the same name as that of the Class
    // 3. An User-defined Constructor must be Public inside the Class

    Scientist(string name, string college, int age){
        Name = name;
        College = college;
        Age = age;
    }
};


int main(){
   
   Scientist scientist1 = Scientist("Newton", "Trinity", 22);
   scientist1.IntroduceYourSelf();

   printf("\n");

   // Creating scientist2
   Scientist scientist2 = Scientist("Einstein", "Zurich", 17);
   scientist2.IntroduceYourSelf();
}