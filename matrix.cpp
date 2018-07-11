#include<iostream>
using namespace std;
void enter(void);
int main()
{
	int i,j;
	int a[3][3],b[3][3],k[3][3];
	cout<<"enter the elements of array\n";
	enter();
	enter();
	cout<<"THE MATRIX MULTIPLICATION IS---\n";
	{
		for(i=0;i<3;i++)
		{
			while(j<3)
		{
			k[i][j]=k[i][j]+a[i][j]*b[i][j];
			i++;
		}
	}
		cout<<"THE MULIPLIED MATRIX IS-----\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<k[i][j];
			}
		}
		
	}
}
void enter(void)
{int i,j;int a[i][j];
	cout<<"enter theelements of a array\n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++){cin>>a[i][j];
	}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j];
		}
	}
}
