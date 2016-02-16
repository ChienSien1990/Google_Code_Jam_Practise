#include <iostream>
using namespace std;
int smallest(int a[],int l){
	int b[99];
	int k=0;
	for(int i=0;i<l;i++){
		b[i]=a[i];}
	for(int i=0;i<l;i++){
		for(int j=i;j<l;j++){
			if(a[j]>a[i]){
				k=a[i];
				a[i]= a[j];
				a[j]=k;}
			else k=a[i];

		}}
	for(int i=0;i<l;i++){
		a[i]=b[i];}
		return k;}

int biggest(int a[],int l,int d){
	int k=0;
	int b[99];
	for(int i=d;i<l;i++){
		b[i]=a[i];}
	for(int i=d;i<l;i++){
	for (int j=i;j<l;j++){
			if(a[j]<a[i]){
			k=a[i];
			a[i]=a[j];
			a[j]=k;}
			else k=a[i];
		}
	}
	for(int i=d;i<l;i++){
		a[i]=b[i];}
	return k;

}
int main(){
	const int month=12;
	int buy=0,sell=0,cse=0,p=0,l=0,m=0,n=0,b=0,d=0;
	int pay[99],c[99];
	printf("how many case:");
	cin>>cse;
	for(int i=0;i<cse;i++){
	printf("this is the budget RM");
	cin>>buy;
	for(int i=0;i<12;i++)
	{
		printf("month #%d: RM",i+1);
		cin>>pay[i];
		if(buy<pay[i])
			m++;
	}
	
	if(m==12)
		printf("IMPOSSIBLE!");
	else{
		
		p=biggest(pay,month,d);
		for(int i=0;i<12;i++){
			if(pay[i]==p ){			
				
				for(int j=0;j<i+1;j++)
					if(smallest(pay,j)>buy)
						printf("\ncannot buy!\n");
					else 
						n=smallest(pay,j);
		}}	
		l=smallest(pay,month);
			for(int i=0;i<12;i++){
			if(pay[i]==l ){			
				
		
				b=biggest(pay,month,i);
		}}
	

	if((p-n)>(b-l)& n!=0){
		printf("the different is %d\n",p-n);
		d=2;}
	else if((b-l)>(p-n)){
		printf("the different is %d\n",b-l);
		d=1;}
	else 
		{
		d=2;}
	if(d==2){
		printf("\nsmallest is %d\n",n);printf("biggest is %d\n",p);
		printf("the final answer is: %d",(buy/n)*p-((buy/n)*n));}
	else if(d==1){
		printf("\nsmallest2 is %d",l);printf("biggest2 is %d\n",b);
		printf("the final answer is: %d",(buy/l)*b-((buy/l)*l));}
	}
	system ("pause");}}
