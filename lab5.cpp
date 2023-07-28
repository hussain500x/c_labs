// Convert a string to all uppercase letters
#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    char str[100];
    cout << "Enter any lower characters: ";
    cin >> str;
    size_t count = strlen(str);
for(int i=0 ;i <count;i++){
       str[i]=str[i]-32;
        cout<<str[i];
}
   return 0;
}
