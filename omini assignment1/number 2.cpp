/*
* number1.cpp
* Name: [omini okoi nnanna]
* Department: [Computer Science]
* Matric No: [45636345gd]
* A program that reads two integers and determines and prints if the first is a multiple of the second
*
* Stub file to enable you complete assignment#1-question#2
*/
#include <iostream>
using namespace std;
int main()
{
	int firstnumber;
	int secondnumber;
	int thirdnumber;
	
	cout <<"enter a number ";
	cin >> firstnumber;
	
	cout <<"enter a second number: ";
	cin >> secondnumber;
	
	thirdnumber = firstnumber / secondnumber;
	if (firstnumber % secondnumber == 0)
	cout << firstnumber <<" is a multiple of " << secondnumber;
	
	else
	cout << firstnumber << "is not a multiple of"<< secondnumber;
	
	return 0;
}
	
	
	

