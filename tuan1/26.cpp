#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;double tb(0);
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
        tb+=a[i];
    }
    cout<<"max:"<<max<<endl<<"min:"<<min<<endl<<"mean:"<<tb/n;

}
