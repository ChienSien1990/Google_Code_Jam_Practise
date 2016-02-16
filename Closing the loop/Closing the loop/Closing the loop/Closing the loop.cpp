#include <iostream>
using namespace std;
void my_st(int stt,int ind,int a[]){
	int c=0,big=0;
	
	for(int i=stt;i<=ind;i++){
		for(int j=i;j<=ind;j++){
			if(a[i]<a[j]){
				c=a[i];
				a[i]=a[j];
				a[j]=c;}
		}
	}
	}


int main(){
	int a[99],c[99],d=0,e=0,k=0,cse=0,f=0,y=0,count=0,j=0;
	char b[99];
	printf("Please insert the case:");
	cin>>cse;
	for(int z=0;z<cse;z++){
	printf("Please insert the number of segments you want:");
	cin>>e;
	for (int i=0;i<e;i++){
		printf("Segment:");
		cin>>a[i];
		printf("Color:");
		cin>>b[i];}

	for (int i=0;i<e;i++){
		printf("Segment:%d  Color:%d\n",a[i],b[i]);
		}
	
		for(int i=0;i<e;i++){
					if(b[i]==b[i+1]){	
						k++;
						f++;
						count=k;
						my_st(i-(k-1),i+1,a);
						d=0;
						}

					else{						
						d++;		
						k=0;
					}
					
					if(k==0){
							y+=a[i-count]-1;
							printf("+%d \n",y);} 
							}
					
				if(f==e)
					printf("Case #%d: 0\n ",z+1);
				else
					printf("Case #%d: %d\n",z+1, y);
			system("pause");
	}}
