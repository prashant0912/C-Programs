/*
Problem 18, Chapter-7 Sumita Arora Book
*/

#include<iostream>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	float w,x,y,z,p;

	cin>>w>>x>>y>>z;

	//p = w + x/y - z;
	if(y-z == 0)
		cout<<"Enter valid values for y and z!";
	else
	{
		p = (w+x) / (y-z);
		cout<<"p = "<<p;
	}
	
	return 0;
}
