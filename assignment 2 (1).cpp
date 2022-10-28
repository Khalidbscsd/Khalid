#include<iostream>
using namespace std;
int main()
{
	//Muhammad Khalid BSCS(Section D)
	int num1,num2;
	char choice;
	while(true)

     {
     cout<<"enter 1st number"<<endl;
     cin>>num1;
     cout<<"choose an operation:"<<"{'+','-','/','*','%'}"<<endl;
     cin>>choice;
     cout<<"enter 2nd number"<<endl;
     cin>>num2;
 
	 if(choice=='+')
	 {
   	 cout<<"Addition of num1 and num2="<<num1+num2<<endl;
	 }
	 else
	 if(choice=='-')
	 {
	 cout<<"Subtraction of num1 and num2="<<num1-num2<<endl;
     }
	 else
	 if(choice=='*')
	 {
	 cout<<"Multiplication of num1 and num2="<<num1*num2<<endl;
     }
	 else
	 if(choice=='/')
	 {
	 cout<<"Division of num1 and num2="<<num1/num2<<endl;
     }
	 else
	 if(choice=='%')
	 {
	    cout<<"Quotient of num1 and num2="<<num1%num2<<endl;
	 }
  else
     
{
 cout<<"wrong input.Please choose right operation Next time"<<endl;
 }
   }

    return 0;
}