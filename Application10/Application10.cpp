using namespace std;
#include <iostream>


void PrintName (string name){
	cout << "your name is " << name;
}


int main()
{
	string nam;
	cout << "Enter Your name\n";
	cin >> nam;

	PrintName(nam);

}
