using namespace std; 
#include <iostream>
int main()
{
	string Nmae = "Hussain ALmarzooq";
	int Age = 21;
	string city = "alhsa";
	string contry = "KSA";
	int Monthly = 51000;
	int yearsly = 5660;
	char gendr = 'M';
	bool marrd = 1;
	cout << "Please Enter Your Name";
	cin >> Nmae;
	cout << "Please Enter Your Age";
	cin >> Age;
	cout << "Please Enter Your gendr M/F";
	cin >> gendr;
	cout << "********************************\n";
	cout << "Name : "+ Nmae+"\n";
	cout << "Age :"<<Age<<"years\n";
	cout << "city: "+ city+"\n";
	cout << "conutry :"+ contry+"\n";
	cout << "Monthly Salary :" << Monthly << "\n";
	cout << "yearly Salary :" << yearsly << "\n";
	cout << "gendr :" << gendr << "\n";
	cout << " married :" << marrd  << "\n";
	cout << "********************************\n";


}

