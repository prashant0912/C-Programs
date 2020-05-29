#include<iostream>
using namespace std;

int main(){
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	string sound;
	cout<<"Enter sound : ";
	cin>>sound;

	if(sound == "Meow")
		cout<<"Cat\n";
	else if(sound == "Bow")
		cout<<"Dog\n";
	else if(sound == "Moo")
		cout<<"Cow\n";
	else if(sound == "Hiss")
		cout<<"Snake\n";
	else cout <<"Don't Know";

	return 0;
}