/*
Cubic Feet to Gallon Conversion.
*/#include<iostream>
using namespace std;

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt" , "w",stdout);


	 float gallons,cubicfeet;
	 cin>>gallons;

	 cubicfeet = gallons/7.481;

	 cout<<"Total cubic feet ="<<cubicfeet;

	 return 0;

}