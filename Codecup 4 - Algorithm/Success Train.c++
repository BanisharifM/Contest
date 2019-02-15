#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,k;
    cin>>k>>a>>b;
    int sum=0,r1,r2;
    if(a>=0)
    {
        if(abs(a-b)<=k)
                sum=a-b;
        if(b<0)
            b*=-1;

        if(a>b)
        {
            r1=a%k;
            r2=b%k;

            sum+=min(r1,k-r1+1);
            sum+=min(r2,k-r2);
            sum+=(a/k)-(b/k);
        }
        else
        {
            r1=a%k;
            r2=b%k;
            sum+=min(r1,k-r1);
            sum+=min(r2,k-r2+1);
            sum+=(b/k)-(a/k);
        }
     }
     else
     {

         if(b>=0)
         {
            a*=-1;
            r1=a%k;
            r2=b%k;
            sum+=min(r1,k-r1+1);
            sum+=min(r2,k-r2+1);
            sum+=(b/k)+(a/k);
         }
         else
         {
            if(a<=b)
            {
                a*=-1;
                b*=-1;
                r1=a%k;
                r2=b%k;
                sum+=min(r1,k-r1+1);
                sum+=min(r2,k-r2);
                sum+=(a/k)-(b/k)-1;
            }
            else
            {
                a*=-1;
                b*=-1;
                r1=a%k;
                r2=b%k;
                sum+=min(r1,k-r1);
                sum+=min(r2,k-r2+1);
                sum+=(b/k)-(a/k)-1;
            }
         }

     }
     cout<<sum;

}
