#include <iostream>

using namespace std;
#include <bits/stdc++.h>

int main()
{
int num[10] = {};
 
int temp = 0;
int j =1; 
cout<<"Enter 10 Number:\n";
   

for (int i=0 ;i<10;i++) {
    cout << j<<"-";
    
	 cin>>num[i];
j++;
}
 int n = sizeof(num) / sizeof(num[0]);
	sort(num, num + n, greater<int>());  
j=1;
cout<< " The biggest 4 number"; 
  for (int i = 0; i < 3 ; ++i){
        cout<<"\n"<< j<<"-"<<num[i] ;
		j++;
		}


    return 0;
}





