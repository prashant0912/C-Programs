/*
Program to find the avergae marks.
*/
#include<iostream>
using namespace std;

int main()

{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	float sub1,sub2,sub3,sub4,sub5,marks,average;

	cout<<"Enter your  marks"<<endl;

	cin>>sub1>>sub2>>sub3>>sub4>>sub5;
	marks=sub1+sub2+sub3+sub4+sub5;
	cout<<"average="<< marks/5;
	return 0;
}
