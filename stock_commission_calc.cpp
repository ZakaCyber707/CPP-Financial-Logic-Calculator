#include<iostream>
using namespace std;
int main(){
	float stockPrice=21.77;
	int shares=600;
	float c=0;
	float WithoutComissionAmount=0;
	float withComission=0;
	float totalAmount=0;
	
	WithoutComissionAmount=shares*stockPrice;
	cout<<"Amout paid for stock alone without commission: \n"<<WithoutComissionAmount<<endl<<endl;
	
	
	c=stockPrice*0.02;
	withComission=c*shares;
	cout<<"2% comission amout is: \n"<<withComission<<endl<<endl;
	
	totalAmount=WithoutComissionAmount+withComission;
	cout<<"Total amount: \n"<<totalAmount;
	
	

}
