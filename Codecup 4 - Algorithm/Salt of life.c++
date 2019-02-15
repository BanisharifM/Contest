#include<iostream>
#define MAXN 100000
using namespace std;
int main()
{
    int x[MAXN];
    int y[MAXN];
    int k,n;
    cin>>n>>k;
    int temp;
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
        {
            if(y[i]<y[j])
            {
                temp = y[i];
                y[i] = y[j];
                y[j] = temp;
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    int t = 1;
    int q=0;
    int cap = k;
    int num = 0;
    bool flag = true;
    bool finish = true;
    int ff;
    while(finish)
    {
        while(x[q]==-1)
            q++;
        ff = q;
        while(q<n)
        {
            if(y[q]<t&&x[q]!=-1)
            {
                flag = false;
                finish = false;
                break;
            }
            if(x[q]<=t)
            {

                x[q] = -1;
                num++;
                if(num==n)
                {
                    finish = false;
                    break;
                }
                if(cap==1)
                    break;
            }
            q++;
        }

        t++;
        cap = k;
        q = ff;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
