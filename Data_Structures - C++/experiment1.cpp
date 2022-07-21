#include <iostream>
#include <string>

using namespace std;

struct employee {
int age;
string name;
long int ssn;
string dob;
} manager, supervisor, regular_member;

int main()
{
employee manager;
employee supervisor;
employee regular_member;

string option;
std::cout<<"Employee Database - 2022";
std::cout<<"Choose what to do - Add, Delete, Edit";
cin>>option;


    if(option=="Add")
    {
    string my_str;
    std::cout<<"Enter name for employee: ";
    cin>>my_str;
    stringstream(my_str)>>manager.name;

    int my_int;
    std::cout<<"Enter age of employee: ";
    cin>>my_int
    stringstream(my_int)>>manager.age;
    
    long int my_longint;
    std::cout<<"Social Security Number: ";
    cin>>my_longint;
    stringstream(my_longint)>>manager.ssn;
    
    string my_str1;
    std::cout<<"Date of Birth: ";
    cin>>my_str1;
    stringstream(my_str1)>>manager.dob;
    }



}


