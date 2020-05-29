/*
 Lowercase to Uppercase conversion
*/
#include<iostream>
using namespace std;

int main()

{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char ch, res;

	cin>>ch;
	
	res  = ch - 32 ;
	cout<<res<<endl;
	return 0;
}
