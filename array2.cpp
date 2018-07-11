#include<iostream>
using namespace std;
//brilliant programming :-) !
int main()
{
	int i,j,k,p,l,m,n;
	int a[n];
	cout<<"enter the number of elements u want in your array\t"<<endl;
	cin>>n;
	cout<<"enter the elements of array\t"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	cout<<"your array is"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<"\nenter ur choice whether u want to insert or delete a element\t"<<endl;
	cin>>l;
	if(l==1)
	{cout<<"\nu have selected deletion of element"<<endl;
	cout<<"enter the position of the element u want to delete\t"<<endl;
	cin>>m;
	for(i=m;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<"\nthe size of new aray is\t"<<n<<endl;
	}
	if(l==2)
	{
		cout<<"ur option is insertion of element"<<endl;
		cout<<"enter the position of element where u want to insert it\t"<<endl;
		cin>>j;
		cout<<"enter the element\t"<<endl;
		cin>>p;
		for(i=n;i>=j;i--)
		{
			a[i+1]=a[i];
		}
		a[j]=p;
		n=n+1;
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<";";
		}
		cout<<"the size of new array is\t"<<n;
	}
	if(l>2)
	cout<<"\nsale 2 hi options the pagal\n";
}
