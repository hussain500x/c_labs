///print first letter from 5 words
#include <iostream>
using namespace std;

int main() {
  string  cars[5] = {"Ali", "Hussain", "Sara", "Mohammed","Zean"};
 
for (int i = 0; i< 5;i++){
  cout << cars[i].at(0) ; 
  cout<<  " - ";
 }
   return 0;
}