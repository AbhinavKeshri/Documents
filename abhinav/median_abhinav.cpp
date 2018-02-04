# include <iostream>
using namespace std;
int max(int a, int b)
{
	if(a>=b)
	{
		return a;
	}
	else return b;
}
int min(int a,int b)
{
	if(a<=b)
	{
		return a;
	}
	else return b;
}
int main()
{
	int * arr1;
	int * arr2;
	int size;
	cout << "enter the size of the arrays"<<endl;
	cin >> size;
	arr1 = new int[size];
	arr2 = new int[size];
	cout << "enter the first sorted array" <<endl;
	for(int i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}
	cout << "enter the second sorted array" <<endl;
	for(int i = 0; i < size; i++)
	{
		cin >> arr2[i];
	}
	int start1 =0, end1;
	int start2=0, end2;
	end1 =size;
	end2 = size;
	while(end1-start1>1)
	{
		if(arr1[(start1+end1)/2]>arr2[(start2+end2)/2])
		{
			end1=(start1+end1)/2;
			start2=(start2+end2)/2;
		
			
		}
		else if(arr1[(start1+end1)/2]<arr2[(start2+end2)/2])
		{
			end2=(start2+end2)/2;
			start1=(start1+end1)/2;	
		
		}
		if(arr1[(start1+end1)/2]==arr2[(start2+end2)/2])
		{
		
			break;
		}
	}
	
	cout << "median = " << (max(arr1[start1],arr2[start2])+min(arr1[end1],arr2[end2]))/2 <<endl;
	
	
	
}
