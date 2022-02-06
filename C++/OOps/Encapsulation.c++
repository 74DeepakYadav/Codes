// Using Setters and Getters providing other classes access to certain attributes from the parent class and Learning about Encapsulation 

#include <iostream>

using std::string;

// Creating a Super-class Employee
//also known as Ancestor class
//also known as Parent class
class Scientist{

    // Making the properties Private, as in Encapsulating (hiding them) them.
private:
    string Name;
    string College;
    int Age;

public:
    //Setter and getter for the attribute Name
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    //Setter and getter for the attribute College
    void setCollege(string college){
        College = college;
    }
    string getCollege(){
        return College;
    }

    //Setter and getter for the attribute Age
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    // A small method in a class for an scientist to introduce himself/herself
    void IntroduceYourSelf(){
        std::cout<<" Name: "<<Name<<std::endl;
        std::cout<<" College: "<<College<<std::endl;
        std::cout<<" Age: "<<Age<<std::endl;
    }

    // Creating an Constructor called Scientist
    Scientist(string name, string college, int age){
        Name = name;
        College = college;
        Age = age;
    }
};


int main(){

    // Creating an scientist1
   Scientist scientist1 = Scientist("Newton", "Trinity", 22);
   scientist1.IntroduceYourSelf();

   printf("\n");

   // Creating an scientist2
   Scientist scientist2 = Scientist("Einstein", "Zurich", 17);
   scientist2.IntroduceYourSelf();

   // Retrieving Encapsulated data by using setters and getters
    printf("\n");
    std::cout<<scientist1.getName()<<" studied Mathematics at the age of "<<scientist1.getAge()<<" from "<<scientist1.getCollege()<<" University. "<<std::endl;

    printf("\n");
    std::cout<<scientist2.getName()<<" studied Physics at the age of "<<scientist2.getAge()<<" from "<<scientist2.getCollege()<<" University. "<<std::endl;

}