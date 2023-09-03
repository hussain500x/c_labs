
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two number\n";
    cin >> num1;
    cin >> num2;

    cout << num1<<"X"<<num2<< "=" << num1 * num2 << endl;
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    cout << num1 << "-" << num2 <<  "=" << num1 - num2 << endl;
    cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
    cout << num1 << "^" << num2 << "=" << pow(num1, num2);


}
