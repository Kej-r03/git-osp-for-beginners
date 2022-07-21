#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int rev=0,copy=x;
	while(x>0)
	{
		rev=(rev*10)+x%10;
		x/=10;
	}
	if(rev==copy)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}