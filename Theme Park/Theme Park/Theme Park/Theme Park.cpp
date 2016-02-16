#include <iostream>
using namespace std;

int move_srt(int d,int c,int a[])
{
	int b[1000];
	for(int i=c;i<d;i++)
	{
		b[i-c]=a[i];
	}
	for(int i=d-c;i<d;i++)
	{
		b[i]=a[i-(d-c)];
	}
	for(int i=0;i<d;i++)
	{	
		a[i]=b[i];
	}
	return d;
}
int main()
{
	int c=0,d=0,n=0,p=0,q=0,r=0,k=0,total=0,kl=0,cse=0;
	int a[1000];
	printf("Please insert the case:");
	cin>>cse;
	for(int z=0;z<cse;z++)
	{
	printf("How many rounds:");
	cin>>r;
	printf("Budget :");
	cin>>k;
	printf("How many integer:");
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		printf("%d#  :",i+1);
		cin>>a[i];
	}

	/*printf("  Move ");
		cin>>c;*/
	for(int j=0;j<r;j++){
	for(int i=0;i<n;i++)
	{
		p+=a[i];
		if(p<k)
		{
			d++;
		}
		else if(p==k)
		{
			total+=p;
			//printf("THIS IS total: %d\n",total);
			d++;
			p=0;
			break;
		}
		
		else if(p>k)
		{	
			p-=a[i];
			total+=p;
			//printf("THIS IS total: %d\n",total);
			p=0;
			break;
		}
		
			
	}
	//printf("this is d %d",d);
	kl = move_srt(n,d,a);
	d=0;
	/*printf("\nRound number:  %d\n",j+1);
	for(int i=0;i<n;i++)
	{	
		printf("#:%d  ",a[i]);
		
	}*/
		
	}
	printf("\ncost = %d\n\n",total);
	total=0;
	system("pause");
	}
}