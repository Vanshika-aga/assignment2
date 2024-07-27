#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER NO OF ELEMENTS";
    cin>>n;
    int a[n];
    int sum=0;
    cout<<"ENTER DATA";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum/n;
}
