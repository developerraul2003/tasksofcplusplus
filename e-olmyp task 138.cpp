//There are enough nominal bills of 10 , 20 , 50 , 100 , 200 and 500 manats in the ATM.
// Find the minimum number of banknotes necessary to pay the amount of n manats, 
//or if it is not possible to pay the indicated amount - print 1.
//e-olmyp --> task 138

#include<iostream>
using namespace std;
int main (){
	int n,count=0;
	cin>>n;
	
	if(n%10==0){
		while(n>=500){
			count++;
			n=n-500;
			
			
		}
		while(n>=200){
			count++;
			n=n-200;
		
		}
		while(n>=100){
			count++;
			n=n-100;
			
		}
		while(n>=50){
			count++;
			n=n-50;
			
		}
		while(n>=20){
			count++;
			n=n-20;
			
		}
		while(n>=10){
			count++;
			n=n-10;
			
		}
		cout<<count;
	}
	
	else{
		cout<<-1;
	}
}