#include <iostream>
using namespace std;

int main(){
	int l=0,w=0,count=0,count1=0,count2=0,cse=0;
	char a[50][50];
	bool c[50][50];
	char check;
	printf("Please insert the case:");
	cin>>cse;
	for(int z=0;z<cse;z++)
	{
	printf("Insert the length:");
	cin>>l;
	printf("Insert the width:");
	cin>>w;
	
	printf("Please insert:(G,R,W,S,T)\n");
	for(int i=1;i<=l;i++){
		for(int j=1;j<=w;j++){
			cin>>check;
			if(check == 'g' || check == 's')
				c[i][j]=true;
			else c[i][j]=false;
		}
	}

	
			
	for(int i=1;i<=l;i++){
		for(int j=1;j<=w;j++){
			if(c[i][j]==true){
				for(int p=i;p<=l;p++){
					for(int q=j;q<=w;q++){
						count=0;
						for(int m=i;m<=p;m++){
							for(int n=j;n<=q;n++){
								if(c[m][n]==true)
									count++;
								
												 }
											  }
					if((count==(p-i+1)*(q-j+1))&&(count2<count))
						
					
						count2=count;
					
										}
									}
							}
		
						}		
						}


	
	
	printf("The biggest count is %d",count2);
	system("pause");}}