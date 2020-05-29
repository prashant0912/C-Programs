/*
Celsius to Fahrenheit Conversion
Problem 17, Chapter-7 Sumita Arora Book
*/
#include<iostream>
using namespace std;

int main()

{	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	float celsius,fahrenheit;
	cout<<"Enter Temperature in Celsius scale : ";
	cin>>celsius;
	fahrenheit=celsius*9/5 + 32;

	cout<<" The temperature in fahrenheit is = "<<fahrenheit;


reuturn 0;

}

