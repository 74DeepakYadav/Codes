// Using Abstraction to check wheather a Scientist published a Theory or not.

#include <iostream>

using std::string;

// Creating an Abstract class
class AbstractScientist{
    virtual void Theory() = 0;
};

//Linking the Scientist class to the Abstract class by using (contracts) i.e :
class Scientist:AbstractScientist{

private:
// Making the Properties Private to implement Encapsulation
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

    //Method for an Scientist to introduce himself/herself
    void IntroduceYourSelf(){
        std::cout<<" Name: "<<Name<<std::endl;
        std::cout<<" College: "<<College<<std::endl;
        std::cout<<" Age: "<<Age<<std::endl;
    }

    // User-defined Constructor that is used to create an Object from the properties inside a Class
    Scientist(string name, string college, int age){
        Name = name;
        College = college;
        Age = age;
    }

    // Implementing the Pure Virtual function from the abstract class to be used by the Employee class
    void Theory(){

        // Setting a condition for implementation of the promotion function
        if(Age > 20){
        std::cout<< Name <<" published a Theory. "<<std::endl;}
        else{
        std::cout<< Name <<" didn't published any Theory. "<<std::endl;}
    }
};

int main(){
    
    // Created scientist1
   Scientist scientist1 = Scientist("Newton", "Trinity", 22);
   scientist1.IntroduceYourSelf();

   // Created scientist2
   printf("\n");
   Scientist scientist2 = Scientist("Einstein", "Zurich", 17);
   scientist2.IntroduceYourSelf();

   //Using the setter and getter methods to access the Encapsulated properties of Scientist class
    printf("\n");
    std::cout<<scientist1.getName()<<" studied Mathematics at the age of "<<scientist1.getAge()<<" from "<<scientist1.getCollege()<<" University. "<<std::endl;

    printf("\n");
    std::cout<<scientist2.getName()<<" studied Physics at the age of "<<scientist2.getAge()<<" from "<<scientist2.getCollege()<<" University. "<<std::endl;

     // Calling the Theory method
    printf("\n");
    scientist1.Theory();

    printf("\n");
    scientist2.Theory();

    // Testing the condition of Theory method
    printf("\n");
    scientist2.setAge(21);
    std::cout<<"Finally at the age of "<<scientist2.getAge()<<","<<std::endl;
    scientist2.Theory();
    }