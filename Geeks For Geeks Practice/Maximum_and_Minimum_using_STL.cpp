#include<iostream>
#include<climits>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int ar[10000];
	    int n;
	    cin>>n;
	    for (int i=0;i<n;i++)
	    cin>>ar[i];
	    int largest=INT_MIN;
	    int smallest=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        if (ar[i]>largest)
	        {
	            largest=ar[i];
	        }
	         if (ar[i]<smallest)
	        {
	            smallest=ar[i];
	        }
	    }
	    
	     cout<<smallest<<" "<<largest<<endl;
	 
	}
	return 0;
}
