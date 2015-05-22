/*
* number1.cpp
* Name: [omini okoi nnanna]
* Department: [Computer Science]
* Matric No: [45636345gd]
* create a body mass index (BMI) calculator application that reads the users weight in kg and height in meter, calculate and display the users body mass index 
*
* Stub file to enable you complete assignment#1-question#6
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "Enter user weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter user height(m): " <<endl;
	cin >> height;
	
	BMI = weight / pow(height , 2);
	
	cout << setprecision(2) << fixed << "User BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "user is under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "user weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "user is over-weight." <<endl;
	else
	cout << "user is Obese." <<endl;

	return 0;	
}
