#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the no.of element in the array:";
	cin>>n;
	cout<<"enter the element of array:"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	
		cin>>arr[i];
		cout<<"enter the element you want to search in array:";
		int k;
		cin>>k;
		//before applimg the binary search arrya must be sorted 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[j]>arr[i])
				{
					int temp;
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					
				}
				}
				
			}
			//After sorting
			int mid = (0+n)/2,start=0,end=n-1;
			bool flag = 0;
			while(start<=end)
			{
				mid = start + (end-start)/2;
				if(arr[mid]==k)
				{
					cout<<"element present in  the array";
					
					flag = 1;
					break;
					
				}
				else if(arr[mid]>k)
				end = mid -1;
				else
				start = mid +1;
			//	mid = (start+end)/2;
				
			}
			if(flag==0)
			cout<<"your element is not present in the array";
			return 0;
		}
			

