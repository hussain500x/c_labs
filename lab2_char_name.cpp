///print first letter from 5 words
#include <iostream>
using namespace std;

int main() {
  string  name[5] = {"Ali", "Hussain", "Sara", "Mohammed","Zean"};
 
for (int i = 0; i< 5;i++){
  cout << name[i].at(0) ; 
  cout<<  " - ";
 }
   return 0;
}