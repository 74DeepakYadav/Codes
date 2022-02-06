// Using Polymorphism to create a Method work seperate for Physicist class & a Mathematician class.

//The most common use of polymorphism is when a parent class reference is used to refer to a child class object

/*If the child class have its own instruction for a method which is also present in parent class, 
then with the help of polymorphism we tell the system to execute the one which child class have and skips the one by parent class*/

#include <iostream>

using std::string;

//Abstracting the Scientist class
class AbstractScientist{
    virtual void Theory() = 0;
};

//Scientist class signs a contract of abstraction with class AbstractScientist
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

     // We have to make the work method virtual to check implementation in the derived classes, i.e Work() for Physicist (at line 93) and Work() for Mathematician (at line 108)
    virtual void Work(){
        std::cout<< Name <<" is doing research. "<< std::endl;
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

        void Work(){
            std::cout << getName() <<" is doing research on "<< Topic <<std::endl;
        }
    };

// Creating a sub-class of Mathematician and linking it to Super-class Scientist (Contract)
class Mathematician:public Scientist{
public:
    string Award;

    // Adding a simple method specifically to the Mathematician class
    void Respect(){
        std::cout<<getName()<<" was awarded with "<<Award<<"."<<std::endl;
    }

     void Work(){
            std::cout << getName() <<" is on the way to get his 2nd "<< Award <<std::endl;
        }

    // Creating a separate constructor for Mathematician
    Mathematician(string name, string college, int age, string award):Scientist(name, college, age){
        Award = award;
    }
};

int main(){
    
    // Created a Physicist 
    Physicist discovery = Physicist("Newton", "Trinity", 22, "Gravity");
    discovery.Work();

   // Created a Mathematician
   
   Mathematician fame = Mathematician("Einstein", "Zurich", 17, "Noble Prize");
   fame.Work();

   //Creating a Pointer from a Base class to refer it to a child class
    // Based Class pointer -> Derived class object
   Scientist* s1 = &discovery;
   Scientist* s2 = &fame;

   printf("\n");
    // Referencing the Work method that has polymorphism
   s1->Work();
   s2->Work();
   
}
