//A. In Search of an Easy Problem
//https://codeforces.com/problemset/problem/1030/A


#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        if(a[i]==1)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout <<"EASY\n";
    }
    else
    {
        cout <<"HARD\n";
    }
    return 0;
}