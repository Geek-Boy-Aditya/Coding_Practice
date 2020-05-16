#include<iostream>
using namespace std;

void Spiralprint(int a[][10],int m,int n)
{
	int startRow=0;
	int startCol=0;
	int endRow=m-1;
	int endCol=n-1;
	
	while(startRow<=endRow and startCol<=endCol)
	{
		for(int i=startRow;i<=endRow;i++){
                cout<<a[i][startCol]<<", ";
            }
            startCol++;

            for(int j=startCol;j<=endCol;j++){
                cout<<a[endRow][j]<<", ";
            }
            endRow--;

             if(startCol<=endCol){
            for(int i=endRow;i>=startRow;i--){
                cout<<a[i][endCol]<<", ";
            }
            endCol--;
             }

           if(startRow<=endRow){
            for(int j=endCol;j>=startCol;j--){
                cout<<a[startRow][j]<<", ";
            }
            startRow++;
			 }
	}
	cout<<"END";
}

int main ()
{
	int a[10][10]={0};
	int m,n;
	cin>> m>>n;
//
	for (int row=0;row<=m-1;row++)
	{     
		for(int col =0;col<=n-1;col++)
		{  
			
			cin>>a[row][col];
		}
		// cout<<endl;
	}
	Spiralprint(a,m,n);
	return 0;
}
	
