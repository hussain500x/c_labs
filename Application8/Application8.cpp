// Application8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void myProcedures() {
    cout << " you are on Procedures";
}


int function() {
    int x= 5;
    int y = 2;
        return x  * y;
}
int main()
{int rul= function();
    cout << "Hello World!\n";
    cout << "your function is :" << rul << endl;
    myProcedures();
    return 0;
}
