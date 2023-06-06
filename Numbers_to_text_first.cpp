#include<iostream>
#include<conio.h>
using namespace std;
void n10(int);
void n100(int);
void n1000(int);
void n10000(int);
void n100000(int);
//void lac(int);
int main()
{
	int n;
	cout<<"Enter number -> ";
	cin>>n;
	if(n<10)
		n10(n);
	if(n>=10 && n<100)
		n100(n);
	if(n>=100 && n<1000)
		n1000(n);
	if(n>=1000 && n<10000)
		n10000(n);
	if(n>=10000 && n<100000)
		n100000(n);
//	if(n>=100000 && n<1000000)	
//		lac(n);

}
void n10(int a)	{
		if(a==1)
			cout<<"one ";
		if(a==2)
			cout<<"two ";
		if(a==3)
			cout<<"three ";
		if(a==4)
			cout<<"four ";
		if(a==5)
			cout<<"five ";
		if(a==6)
			cout<<"six ";
		if(a==7)
			cout<<"seven ";
		if(a==8)
			cout<<"eight ";
		if(a==9)
			cout<<"nine ";
	}
void n100(int a) {
//		int b;
	if(a>=10 && a<20)
	{
//		int b;
//		a=a/10; 
	if(a==10)
		cout<<"Ten ";
	if(a==11)
		cout<<"Eleven ";
	if(a==12)
		cout<<"Twelve ";
	if(a==13)
		cout<<"Thirteen ";
	if(a==14)
		cout<<"Fourteen ";
	if(a==15)
		cout<<"Fifteen ";
	if(a==16)
		cout<<"Sixteen ";
	if(a==17)
		cout<<"Seventeen ";
	if(a==18)
		cout<<"Eighteen";
	if(a==19)
		cout<<"Nineteen ";
	}//	if(a/10==1)
//	{
//		cout<<"Ten ";
//		n10(a%10);

//	}
		if(a/10==2)
		{
		cout<<"Twenty ";
		n10(a%10);
		}
	if(a/10==3)
		{
		cout<<"Thirty ";
		n10(a%10);
		}
	if(a/10==4)
		{
		cout<<"Forty ";
		n10(a%10);
		}
	if(a/10==5)
		{
		cout<<"Fifty ";
		n10(a%10);
		}
	if(a/10==6)
		{
		cout<<"Sixty ";
		n10(a%10);
		}
	if(a/10==7)
		{
		cout<<"Seventy ";
		n10(a%10);
		}
	if(a/10==8)
		{
		cout<<"Eighty ";
		n10(a%10);
		}
	if(a/10==9)
		{
		cout<<"Ninety ";
		n10(a%10);
		}
	
	
}
void n1000(int a) {
//	b=b%100;
	
//	int b;
//	b=a;
	if(a/100==1)
	{
		cout<<"One Hundred ";
//		n100(a%100);
	}
	if(a/100==2)
		{
		cout<<"Two Hundred ";
//		n100(a%100);
		}
	if(a/100==3)
		{
		cout<<"Three Hundred ";
//		n100(a%100);
		}
	if(a/100==4)
		{
		cout<<"Four Hundred ";
//		n100(a%100);
		}
	if(a/100==5)
		{
		cout<<"Five Hundred ";
//		n100(a%100);
		}
	if(a/100==6)
		{
		cout<<"Six Hundred ";
//		n100(a%100);
		}
	if(a/100==7)
		{
		cout<<"Seven Hundred ";
//		n100(a%100);
		}
	if(a/100==8)
		{
		cout<<"Eight Hundred ";
//		n100(a%100);
		}
	if(a/100==9)
		{
		cout<<"Nine Hundred ";
//		n100(a%100);
		}
		if(a%100<10)
			{
			n10(a%10);
			}
		else
			n100(a%100);
}
void n10000(int a) {
	if(a/1000==1)
	{
		cout<<"One Thousand ";
		n1000(a%1000);
	}
	if(a/1000==2)
		{
		cout<<"Two Thousand ";
		n1000(a%1000);
		}
	if(a/1000==3)
		{
		cout<<"Three Thousand ";
		n1000(a%1000);
		}
	if(a/1000==4)
		{
		cout<<"Four Thousand ";
		n1000(a%1000);
		}
	if(a/1000==5)
		{
		cout<<"Five Thousand ";
		n1000(a%1000);
		}
	if(a/1000==6)
		{
		cout<<"Six Thousand ";
		n1000(a%1000);
		}
	if(a/1000==7)
		{
		cout<<"Seven Thousand ";
		n1000(a%1000);
		}
	if(a/1000==8)
		{
		cout<<"Eight Thousand ";
		n1000(a%1000);
		}
	if(a/1000==9)
		{
		cout<<"Nine Thousand ";
		n1000(a%1000);
		}
		if(a%100<100)
			{
			n100(a%100);
			}
		else if(a%100<10)
			{
			n10(a%10);
			}
		else
			n1000(a%1000);

}
void n100000(int a) {
	{
	int b;
	b=a/1000;
	n100(b);
	cout<<"Thousand ";
	}
	a%=1000;
	n1000(a);
}
void lav(int a) {
	n10(a/1000000);
		cout<<"Lac ";
	n100000(a%1000000);
}
