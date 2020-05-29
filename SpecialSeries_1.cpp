#include<iostream>
#include<cmath>
using namespace std;

int fact(int num){
	if(num == 0)
		return 1;
	return fact(num-1)*num;
}


int main(){

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);


int i, x, result, factorial=1, n;
float sum = 0;

cin>>n>>x;
for(i=0; i<n; i++)
	sum += pow(x,i)/fact(i);

	cout<<"sum = "<<sum<<endl;

return 0;

}