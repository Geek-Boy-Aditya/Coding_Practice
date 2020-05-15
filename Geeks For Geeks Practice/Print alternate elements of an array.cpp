#include<iostream>
using namespace std;
void print(int ar[], int n)
{
    
       for (int i = 0; i < n; i++) 
        {
            if (ar[i] % 2 != 0) 
            {
                cout<<ar[i];   
        
            }
        }
}

int main ()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int ar[10]={0};
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			print(arr,n)
		}
		
	}
	return 0;
}
