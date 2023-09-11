using namespace std;

#include <iostream>
enum enPassFail { Pass = 1,Fail=2 };
void Rednumber(int& Mark1, int& Mark2, int& Mark3) {
	cout << "Please enter Mark 1";
	cin >> Mark1;
	cout << "Please enter Mark 2";
	cin >> Mark2;
	cout << "Please enter Mark 3";
	cin >> Mark3;
}

int sumOf3MArke(int Mark1, int Mark2, int Mark3) {
	return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3) {
	return (float)sumOf3MArke(Mark1, Mark2, Mark3) / 3;
}
enPassFail CheckAvrge(float Avrge) {
	if (Avrge)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintResult(float Avrge) {
	cout << "\n Your Averge is: " << Avrge << endl;

	if (CheckAvrge(Avrge) == enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You faild";
}

int main()
{
	cout << "Hello World!\n";

	int Mark1, Mark2, Mark3;
	Rednumber(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));

}
