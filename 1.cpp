#include <iostream>
#include <math.h>
using namespace std;

int task1(int a,int b,int s, int s2,int k) {
	while (a!=b) {
		int c=a;
		while (c!=0) {
			s=s+c%10; 
			c=c/10;
		}
		for (int i=2;i<10;i++) {
			int t;
			t=c*i;
			while (t!=0) {
				s2=s2+t%10;
				t/10;
			}
			if (s2==s) k++;
			else k=0;
		}
		if (k==8) cout<<a;
		a++;
	}
return 1;
}

int main() {
	int s=0,s2=0,k=0;
	int a,b;
	cout<<"Enter a,b:";
	cin>>a>>b;
	task1(a,b,s,s2,k);
	return 1;
}
