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

int main(){
	int cse=0;
	char chk;
	printf("Please insert your case:");
	cin>>cse;
	chk=getchar();
	for(int z=0;z<cse;z++){
	 char a[1000],b[1000];
	 int c=0,k=0,d=0,e=0,f=0;
	 printf("Input:");
	 k=input(a);
	 printf("\n");
	 for(int i=k-1;i>=0;i--){	 
		 c++;	 

		 if(a[i]==' ')
		 {
			for(int j=i+1;j<i+c;j++){
				b[k-c-i-i-1+j]=a[j];}
				b[k-i-1]=a[i];
				c=0;
		 }
		 if(i==0)
		 {
			 do{
				 e++;
			 }while(a[e]!=' ');
			 for(int j=e;j>0;j--){
				b[k-j]=a[e-j];}
		 }
	 }
	 for(int i=0;i<k;i++){
		 printf("%c",b[i]);
		 }
	 printf("\n");
	 
	 
	system("pause");
	
}
}