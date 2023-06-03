 #include<iostream>
using namespace std;
int main (){
cout<<"Fibonacii series:"<<endl;
int num1{0},num2{1},next_num,sum{0};
unsigned number;
cout<<"enter number:";
cin>>number;
for(int i=1;i<=number;i++)
{
	if(i==1){
		cout<<num1<<",";
	continue;
	}
	
	 if (i==2){
		cout<<num2<<",";
	continue;
	}
	next_num=num1+num2;
	num1=num2;
    num2=next_num;
cout<<next_num<<",";
sum+=next_num;

}
cout<<"\nsum of fibonacci series:"<<sum;
return 0;
}