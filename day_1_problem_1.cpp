#include<iostream>
#include<limits.h>
using namespace std;

int main()
{ int answer=INT_MIN;
  int sum=0;
int arr[5][3]={
{1000,2000,3000},
{4000},
{5000,6000},
{7000,8000,9000},
{10000}
};

for (int i=0; i<5; i++)
	{	for (int j=0; j<3; j++) 
		
		{   
          sum=sum+arr[i][j];
		}
        answer=max(sum,answer);
		sum=0;
    }	

    cout<<"the max sum is "<<answer;
	return 0;
}
