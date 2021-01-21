#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,count=0,max=0;
    int arr[200000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            max=1;
        }
    }
    if(max==0)
    {
        cout<<0<<endl;
    }
    else
    {
        count=0;
        if(arr[0]==1&&arr[n-1]==1)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if(arr[i]==1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            max=count;
 
        }
        if(max>=n)
        {
            cout<<n<<endl;
        }
        else
        {
            count=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    count++;
                    if(count>max)
                    {
                        max=count;
                    }
                }
                else
                {
                    count=0;
                }
            }
            cout<<max<<endl;
        }
    }
    return 0;
 
}