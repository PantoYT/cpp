#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
    protected:
        string first;
        string last;
    public:
        Person(string first, string last): first(first), last(last) {}

        Person() = default;

        void setFirstName(string first) { this->first = first; }
        void setLastName(string last) { this->last = last; }

        string getName() { return first + " " + last; }
        void printFullName() { cout<<first<<" "<<last<<endl; }

        virtual void printInfo() {
            cout<<"first name: "<<first<<endl;
            cout<<"last name: "<<last<<endl;
        }

        static void printPeople(vector<Person*> people) {
            for(auto person: people) {
                person->printInfo();
            }
        }
};

class Employee : public Person {
    private:
        string department;
    public:
        Employee(string firstName, string lastName, string department): Person(firstName, lastName), department(department) {}
        string getDepartment() {
            return department;
        }
        void setDepartment(string department) {
            this->department = department;
        }

        void printInfo() override {
            cout<<"first name: "<<first<<endl;
            cout<<"last name: "<<last<<endl;
            cout<<"department: "<<department<<endl;
        }
};

int main() {
    vector<Person*> people;

    Person p("first", "last");
    Employee e("first","last","sales");

    people.push_back(&p);
    people.push_back(&e);

    Person::printPeople(people);
    Person::printPeople(people);
    Person::printPeople(people);
    
    //class - describes the structure
    //object - a specific example of that structure (instance)
    //instance - another name for object
    //instantiating - creating an object from a class
    //data members - variables
    //methods - functions
    //Parent class (base class) - inherited FROM
    //Child class (derived class) - inherited TO

    //abstraction -- a concept where you make something easy by hiding the complicated stuff
    //encapsulation -- granting access to private data only through controlled public interfaces
    //inheritance -- We can create derived classess that inherit properties from their parent classes
    //polymorphism -- we can treat multiple different objects as their base object type

    return 0;
}