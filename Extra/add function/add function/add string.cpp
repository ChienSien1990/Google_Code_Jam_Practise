#include <iostream>

using namespace std;

int input(char a[]){
	int k=0;
	char e;
	e=getchar();
	 while (e != '\n'){
			a[k]=e;
			k++;
			e=getchar();}
	 return k;
}

void addstring(char a[],char b[],int n,int k,int l){
	char e;
	char c[99999];
	
	for(int i=n;i<k;i++)
		c[i-n]=a[i];
	for(int i=n;i<l+n;i++)
		a[i]=b[i-n];	
	for(int i=0;i<k-n;i++)
		a[i+n+l]=c[i];
	for(int i=0;i<k+l;i++){
		printf("%c",a[i]);
	}
	
}
int main(){
	int n=0,k=0,l=0;
	char inp1[99999];
	char inp2[99999];
	
	printf("Input 1:");
	 k=input(inp1);
	
	printf("Input 2:");
	 l=input(inp2);
	
	printf("Insert the number to put:");
	cin>>n;

	addstring(inp1,inp2,n,k,l);
	system("pause");

}