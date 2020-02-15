#include<iostream>
using namespace std;
int n,key;
int a[100];
int temp,low,high,mid,flag;
class bsort
{


    
    public:
    
    
    void getInput()
    {
        cout<<"Enter the  number of key elements to enter in the array : ";
        cin>>n;
        cout<<"enter the key elements one by one : ";
        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        cout<<"enter the key element";
        cin>>key;
    }
	

    void bubblesort()
    {
        for(int i = 0 ; i < (n - 1) ; i++)
			{
				for(int j = 0 ; j < (n - i) - 1 ; j++)
				{
					if(a[j] > a[j+1])
					{
						a[j] > a[j+1];
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					
					}
				}
				
				
			}


    }


    void binarySearch()
	{
        showOutput();
	low=0;
    high=n-1;
    flag=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key=a[mid])
        {
            cout<<endl<<"the element found at index:"<<mid<<" and position : "<<mid+1<<endl;
            flag=1;
            break;
        }
        else if (key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    if(flag==0)
    {
        cout<<"the element not found";
        a[n]=key;
    }
    }	

    void showOutput()
    {
        cout<<"the entered number in sorted form are "<<endl;
        for(int i=0; i<5 ; i++)
        cout<< "  "<<a[i];
        
    }

	
};


int main()
{
bsort s;
s.getInput();
s.bubblesort();
s.binarySearch();
s.showOutput();


}
