#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double num{};
	
	cout << "Enter a number (double): ";
	cin >> num;
	
	cout << "The sqrt of" << num << "is: " << sqrt(num) << endl;
	cout << "The cubed root of" << num << "is: " << cbrt(num) << endl;
	
	cout << "The sine of" << num << "is: " << sin(num) << endl;
	cout << "The cosine of" << num << "is: " << cos(num) << endl;
	
	cout << "The ceil of" << num << "is: " << ceil(num) << endl;
	cout << "The floor of" << num << "is: " << floor(num) << endl;
	
	
	
	
	
	return 0;
}
