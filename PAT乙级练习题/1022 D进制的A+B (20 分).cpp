#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(c==0){
		cout<<0;
		return 0;
	}
	long int sum=a+b;
	int N[31]={0};//30����̫���˵����������������ʱ����31���ܹ���
	int n=0;
	while(sum>0){
		N[n]=sum%c;
		sum=sum/c;
		n++;
	}
	n--;
	if(n<0){
		cout<<0;
	}
	for(;n>=0;n--){
		cout<<N[n];
	}
	 
	
	return 0;
} 
