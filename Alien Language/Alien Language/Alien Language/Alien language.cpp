#include <iostream>
#include <ctype.h>

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

  int i=0,m=0,ct2=0,ct3=0,ct1=0,ct4=0,l=0,sm=0,d=0,count=0,count1=0,n=0;
  char ad[100][100];
  char stp;
  printf("length:");
  cin>>l;
  printf("type:");
  cin>>d;
  printf("b try:");
  cin>>n;
  printf("insert the a");
  printf("\n");
	for(int i=0;i<d;i++)
		for(int j=0;j<l;j++)
			cin>>ad[i][j];
	stp=getchar();
	for(int y=0;y<n;y++){
		ct2=0;ct3=0;ct1=0;ct4=0;sm=0;count=0;count1=0;
		char str[1000],c[1000],a[1000],dh[100][100];
		printf("insert the b");
		printf("\n");
		 m=input(str);
  for(int i=0;i<m;i++){
		if(str[i]!='('){
			a[ct2]=1;
			ct2++;
		}
		else if(str[i]=='('){
			do{ct3++;
			}while(str[i+ct3]!=')');
				a[ct2]=ct3-1;	
				ct2++;
			}
				i=i+ct3;
				ct3=0;	

	  }
	   for(int i=0;i<m;i++){
	   if((str[i]=='(') ||  (str[i]==')'))
		  ct4++;

	  else if((str[i]!='(') || (str[i]!=')')){
			c[i-ct4]=str[i];
	  }
  }
	   printf("\n");
 
  for(int i=0;i<3;i++){
	  //printf("%d",a[i]);
	  for(int j=0;j<a[i];j++){
		  dh[i][j] = c[j+sm];}
	  sm+=a[i];
	  }

	 printf("\n");	
	
  for(int q=0;q<d;q++){
  for(int i=0;i<l;i++){
	 for(int j=0;j<a[i];j++){
		 if(dh[i][j]==ad[q][i]){
				 count++;
				}
	 }
	
  }if(count==l)
		count1+=1;
		count=0;}
 
 printf("\n");
 printf("case #%d: %d",y+1,count1);
 count=0;
 count1=0;
 printf("\n");
 system("pause");}
  return 0;

}