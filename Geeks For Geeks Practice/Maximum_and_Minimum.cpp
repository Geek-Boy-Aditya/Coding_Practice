#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,max,min;
	cin>>t;
	while(t--)
	{
	    int ar[10000];
	    int n;
	    cin>>n;
	    for (int i=0;i<n;i++)
	    cin>>ar[i];
	    
	     max = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
            max = ar[i];
    }
    min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
            min = ar[i];
    }
	 cout<<min<<" "<<max<<"\n";
	 
	}
	return 0;
}
