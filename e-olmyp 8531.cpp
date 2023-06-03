#include<iostream>
using namespace std;
int main()
{
	int num, a, b;
	cin >> num;
	cin >> a >> b;
	while (num > 0)
	{
		if (num % a == 0 && num % b == 0) {
			cout << "YES" << endl;
			break;
		}
		else {
			cout << "NO" << endl;
			break;
		}
	}
	return 0;
}