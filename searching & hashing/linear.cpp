#include<iostream>
using namespace std;
int n,key;
int a[100];
class linear
{


    
    public:
    
    
    void getInput(){
        cout<<"Enter the  zize of array of array : ";
        cin>>n;
        cout<<"enter the elements : "<<endl;
        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        showOutput();
        cout<<"enter the key element"<<endl;
        cin>>key;
    }
	
void linearSearch()
	{
	int flag=0;
	for(int i=0; i<n; i++)
	{
        if (key==a[i])
        {
            cout<<endl<<"the element found at index:"<<i<<" and position : "<<i+1<<endl;
            flag=1;
            break;
            
        }
        
	}
    if(flag==0)
        {
            cout<<"the element not found";
            a[n]=key;
            showOutput();
        }
    }	

    void showOutput()
    {
        cout<<"the entered number are";
        for(int i=0; i<5 ; i++)
        cout<< "  "<<a[i]<<endl;
        
    }
	
};


int main()
{
linear s;
s.getInput();
s.linearSearch();
}
