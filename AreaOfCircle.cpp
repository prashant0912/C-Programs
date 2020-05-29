/*
Print the area of circle given its radius.
*/
#include<iostream>
using namespace std;

int main()

{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int radius;
	cin>>radius;
	cout<<" area of circle ="<< 3.14*(radius*radius);
	return 0;
}