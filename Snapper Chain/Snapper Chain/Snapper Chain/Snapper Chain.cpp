#include <iostream>
using namespace std;

int pw(int c,int d){
	int g=1;
	for(int i=1;i<d+1;i++)
		g=g*c;
	return g;
}

int main(){
	int n=0,k=0,n1=0,n2=0,f=0,d=0,e=0,cse=0;
	printf("Please insert the case:");
	cin>>cse;
	for(int z=0;z<cse;z++){
	printf("Nth devices:");
		cin>>n;
		n1=pw(2,n)-1;
		n2=pw(2,n);
	printf("Snap times:");
		cin>>k;
	if(k==0 && k<n1)
		e=1;
	f=(k+1)/n1;
	if(k==n1) 
		d=1;
	else if(k>n1){
		for(int i=0;i<f;i++){
			n1+=n2;
			//printf("n1 4is %d\n",n1);
				if(k!=n1)
					e=1;
				else if(k==n1)
					{d=1;
					 e=0;
					 break;}
							}}
	if(e==1)
		printf("Case #%d OFF\n",z+1);
	else if(d==1)
		printf("Case #%d ON\n",z+1);
	d=0;
	e=0;
	system("pause");
	}}
