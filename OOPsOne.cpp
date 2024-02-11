#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    // ctor: Default ctor

    //         Student(){
    //             cout<<"Student default ctor called"<<endl;
    //         }

    //         //Behaviour /Methods /functions

    //         void study(){
    //             cout<< this->name << " Studying"<<endl;
    //         }

    //         void sleep(){
    //             cout<<this->name <<" Sleeping"<<endl;
    //         }

    //         void bunk(){
    //             cout<<this->name << " Bunking"<<endl;
    //         }

    //          //dtor: Default ctor

    //         ~Student(){
    //             cout<<"Student default dtor called"<<endl;
    //         }

    //     };

    //     int main(){

    //         Student A;
    //         A.id=1;
    //         A.age=15;
    //         A.name="RAM";
    //         A.nos = 6;
    //         A.study();

    //         Student B;
    //         B.id=2;
    //         B.age=12;
    //         B.name="Sham";
    //         B.nos = 5;
    //         B.bunk();

    //     return 0;
    //  }

    // ctor: default ctor

    Student()
    {
        cout << "Student default ctor called" << endl;
    }

    // Parameterised Ctro

    Student(int id, int age, string name, int nos)
    {
        cout << "Student Parameterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    //Copy ctor
    Student (const Student &srcobj)
    {
        cout << "Student copy ctor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behaviour /Methods /functions

    void study()
    {
        cout << this->name << " Studying" << endl;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }

    void bunk()
    {
        cout << this->name << " Bunking" << endl;
    }

    // dtor: Default ctor

    ~Student()
    {
        cout << "Student default dtor called" << endl;
    }
};

int main()
{

    // Student A;
    // A.id=1;
    // A.age=15;
    // A.name="RAM";
    // A.nos = 6;
    // A.study();

    // Student B;
    // B.id=2;
    // B.age=12;
    // B.name="Sham";
    // B.nos = 5;
    // B.bunk();

    Student A(1, 15, "Ranu", 6); //Stack
    // Student B(1, 13, "CHutiya", 6);
    // Student C(1, 11, "Chacha", 6);
    // Student D(1, 14, "Rama", 6);
    // Student E(1, 15, "Rahul", 6);

    // cout<<A.name<<" "<<A.age<<endl;

    // A.bunk();
    // B.Sleep();
    
    //Copy ctor

    // Student  C(A);
    // cout<<C.name<<" " <<A.name<<endl;

    //Dyamic Memory Allocation

    // Student *A = new Student (1,14,"Babbar", 7);
    // cout << A->name<<endl;
    // cout << A->age<<endl;
    // A->Study();
    // delete A;




    
    return 0;
}