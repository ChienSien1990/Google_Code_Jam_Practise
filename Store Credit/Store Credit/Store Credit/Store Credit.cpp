#include <iostream>
using namespace std;

int main()
{
	int cse=0,c=0,n=0;
	int a[2000];
	
	printf("Please insert the case:");
	cin>>cse;
	for(int z=0;z<cse;z++)
	{
	printf("Please insert the credit amount: ");
	cin>>c;
	printf("Please insert the number of items: ");
	cin>>n;
	for(int i=0;i<n;i++)
	{
		printf("%d#:",i+1);
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[j]+a[i])==c)
			{
				printf("The position are: %d %d\n",i+1,j+1);
				break;
			}
			
		}
	}
	}
	system("pause");

}