#include <iostream>


using namespace std;
void shaker(int a[],int n)
{
    int j;
    int l=0,r=n-1,k=n-1;
    while (l<r)
    {
        for (j=l;j<r;j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                k=j;
            }
        }
        r=k;
        for (j=r;j>l;j--)
        {
            if (a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
                k=j;
            }
        }
        l=k;
    }
}
int main()
{
    int n;
    cout<<"Nhap n "<<endl;
    cin>>n;
    int a[n];
    cout<<"Nhap phan tu mang "<<endl;
    for (int i=0;i<n;i++)
        cin>>a[i];
    shaker(a,n);
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
