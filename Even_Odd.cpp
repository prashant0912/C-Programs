#include<iostream>
using namespace std;

int main()
{ 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int num;
	cin>>num;
	if(num%2==0)
		cout<<"Even";	
	else cout<<"Odd";	
	return 0;

}