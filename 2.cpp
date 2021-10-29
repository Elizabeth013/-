#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,k;
	cin>>n;
	int max=0,m=1000;
	do {
		k=pow(3,m);
		if (n-k==0) 
		{
			if (max<m) max=m; 
		}
		m--;		
	}
	while (m!=0);
	cout<<max;
	return 1;
}
