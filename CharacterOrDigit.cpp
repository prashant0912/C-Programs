#include<iostream>
using namespace std;

int main()

{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	char ch;
	cin>>ch;

	if(ch>=48 && ch<=54)
		cout<<"You Entered a  digit ";
	else if (ch>=65 && ch<=90)
		cout<<" You entered an upper case!";
	else if(ch>=97 && ch<=122)
		cout<<"you entered a lower case!";
	else 
		cout<<"You entered a special character!";

	return 0;
}
