// Application7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
struct Coruses {
    string Coruses;
    int Times;
};
struct Students
{
    string Name;
    int age;
    Coruses Coruse;
};
int main()
{
    Students Student1;
    Student1.Name = "Hussain";
    Student1.age = 52;
    Student1.Coruse.Coruses = "math";
    Student1.Coruse.Times = 150;


    cout << Student1.Name <<endl <<Student1.age <<endl  <<Student1.Coruse.Coruses <<endl << Student1.Coruse.Times ;


}
