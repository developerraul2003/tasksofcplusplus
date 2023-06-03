#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{   
    srand(time(0));
	int max, min;
	cout << "enter the different numbers:";
	cin >> max >> min;
	int secret_num = rand() % max + min;
	int num;
	int limit = 5;
	while(limit>0)
	{
		cout << "you have " << limit << " chance." << endl;
		cin >> num;
		if (secret_num == num) {
			cout << "You win!!!" << endl;
			break;
		}
		else {
			cout << "You lose.please try again." << endl;
			limit--;

		}if (secret_num > num) {
			cout << "\nincrease the number again." << endl;
		}
		else {
			cout << "\ndecrease the number again." << endl;
		}
		if (limit == 0) {
			cout << "you used all of the chance." << endl<<"secret number is->"<<  secret_num<<endl;
		}
	}
return 0;
}