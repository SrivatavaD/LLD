#include<iostream>
using namespace std;

//class creation
class Student{
    public:

    //Properties

    int age;
    string name;
    int weight;
    int height;


    //behaviour

    void running(){
        cout<<"I am running"<< endl;
    }
    void studying(){
        cout<<name<<"is studying"<<endl;
    }

};

int main() {
    //cout<<sizeof(Student)<<endl;

    //object Creation
    //Static way

    Student s1;
    s1.age = 50;
    s1.name = "babbar";


    //Dynamic way
    Student *s = new Student();
    (*s).age = 10;
    (*s).weight = 60;
    (*s).height = 40;
    
    

    
    return 0 ;
}
