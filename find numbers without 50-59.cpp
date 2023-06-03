/*find numbers between 2 different numbers which it can not contain '5' that number divided by 5, and 50-59 numbers*/
#include <iostream>
using namespace std;
int main (){
	int start,end;
	int count{0};
	cout <<"enter the start number:";
	cin>>start;
	cout <<"enter the end number:";
	cin>>end;
	for (int i=start;i<=end;i++)
	{ 
	 if (i%5==0 ||
	to_string (i).find('5')!=string::npos){
		continue;
	}
	count++;	
	}
	cout<<"count of numbers:"<<count<<endl;
	return 0;
}