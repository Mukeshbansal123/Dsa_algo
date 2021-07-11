#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of element in array"<<endl;
	cin>>n;
	cout<<"enter the element in array"<<endl;
	int arr[n];
	for(int a=0;a<n;a++)
	
		cin>>arr[a];
		cout<<"enter the element you want find in array";
		int b,item;
		cin>>b;
		bool flag = 0;
		for(int a=0;a<n;a++)
		{
			if(arr[a]==b)
			{
				flag = 1;
				item = a;
				break;
			}
			
			
		}
		if(flag==1)
		{
			cout<<"your element is found at"  <<item<<"position";
			
		}
		else 
		cout<<"your element is not present in array";
		return 0;
	}
	
	

