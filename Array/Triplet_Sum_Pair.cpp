#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[1000];
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	sort(a,a+n);
	int key;
	cin>>key;
	for (int i=0;i<n-1;i++){
	
	int l=i+1;
	int r=n-1;
	int x=a[i];
	while(l<r)
	{
		int current_sum=a[l]+a[r];
		if (x+current_sum >key)
		{
			r--;
		}
		else if(x+current_sum<key)
		
		{
			l++;
		}
		else if(x+current_sum==key)
		{
			cout<<x<<", "<<a[l]<<" and "<<a[r]<<endl;
			l++;
			r--;
		}
	}
}
	return 0;
}
