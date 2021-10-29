#include <iostream>
using namespace std;

 int main() {
	int n, k = 0, l = 0;
	int a[n];
	cout<<"Size arr: ";
	cin>>n;
	for (int i = 0 ; i < n; i++) cin>>a[i];
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1 ;j < n ;j++) {
			if (a[i] > a[j]) {
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (int i=0;i<n-1;i++) {
		if ( a[i] == a[i+1]) {
			k++;
			l=a[i];
		}
	}
	
	if (k>1) cout<<l<<endl;
	return 1;
}
	
