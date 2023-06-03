//e-olmyp 8532

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long  a, b;
	int i;
	cin >> a >> b;

	
	if (a >0 && b >= a && b <= 10000) {

	for (i = a;i <= b;i++) {
		cout << i*i << " ";
	}
	cout << endl;
	for (i = b;i >= a;i--) {
		cout <<  i * i * i << " ";
	}
	}
	else {
		for (i = b;i <= a;i++) {
			cout << i * i << " ";
		}
		cout << endl;
		for (i = a;i >= b;i--) {
			cout << i * i * i << " ";
		}
	}

	return 0;
	
	
}