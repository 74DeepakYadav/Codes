// Using Inheritance to create a Physicist class & a Mathematician class to inherit from Scientist

#include <iostream>

using std::string;

//Abstracting the Scientist class
class AbstractScientist{
    virtual void Theory() = 0;
};

//Employee class signs a contract of abstraction with class AbstractScientist
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

    // Implementing the Pure Virtual function from the abstract class to be used by the Scientist class
    void Theory(){

        // Setting a condition for implementation of the Theory function
        if(Age > 20){
        std::cout<< Name <<" published a Theory. "<<std::endl;}
        else{
        std::cout<< Name <<" didn't published any Theory. "<<std::endl;}
    }
};

// Creating a sub-class of Physicist and linking it to Super-class Scientist (Contract)
class Physicist:public Scientist{
public:
        string Topic;

        // Adding a simple method specifically to the Physicist class
        void Physics(){
            std::cout<<getName()<<" discovered "<< Topic <<"."<<std::endl;
        }

        // Creating a separate constructor for Physicist
        Physicist(string name, string college, int age, string topic): Scientist(name, college,age){
            Topic = topic;
        }

    };

// Creating a sub-class of Mathematician and linking it to Super-class Scientist (Contract)
class Mathematician:public Scientist{
public:
    string Award;

    // Adding a simple method specifically to the Mathematician class
    void Respect(){
        std::cout<<getName()<<" published a Theory & was awarded with "<<Award<<"."<<std::endl;
    }

    // Creating a separate constructor for Mathematician
    Mathematician(string name, string college, int age, string award):Scientist(name, college, age){
        Award = award;
    }
};

int main(){
    
    // Created a Physicist 
    Physicist discovery = Physicist("Newton", "Trinity", 22, "Gravity");
    discovery.Physics();
    discovery.Theory();

   // Created a Mathematician
   printf("\n");
   Mathematician fame = Mathematician("Einstein", "Zurich", 17, "Noble Prize");
   fame.Theory();
   fame.Respect();
   
}
