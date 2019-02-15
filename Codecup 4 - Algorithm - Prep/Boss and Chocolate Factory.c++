#include<iostream>
#include<vector>
using namespace std;
//class Node
//{
//public:
//    vector<Node*> b;
//    Node* f;
//    int x;
//};
int main()
{
    int manager[100003];
    vector<int> b[100003];
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        cin>>manager[i];
        b[manager[i]].push_back(i);

    }
    int l=2;
    vector<int> r2;
    vector<int> r1;
    r1.clear();
    r2.clear();
    r1.push_back(1);
    bool flag = true;
    int sum = 1;
    while(flag)
    {
        flag = false;
        for(int i=0;i<r1.size();i++)
        {
            for(int j=0;j<b[r1[i]].size();j++)
            {
                flag = true;
                r2.push_back(b[r1[i]][j]);
                sum+=l;
            }
        }
        l++;
        r1 = r2;
        r2.clear();
    }
    cout << sum;
}
