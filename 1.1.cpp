/// Author: Sarfaraz Alam
# include <bits/stdc++.h>
# define pb push_back
# define ll long long

# define fi first
# define se second
# define all(vc) vc.begin(),vc.end()
# define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
# define DEBUG
typedef unsigned long long int ull;
using namespace std;
#include<string>
#include<cmath>
const int N = 1e5 + 7;
const int mod = 1e9 + 7;


int main()
{
    speed;
    #ifdef DEBUGfd
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // DEBUG

    //Code begins
    string str;
    cin>>str;
    int m = str.size();
    sort(str.begin(), str.end());
    int flag = 0;

    for(int i = 1; i<str.size(); i++)
    {
      if(str[i-1] == str[i])
      flag  = 1;
    }

    if(flag == 1)
    cout<<"Duplicate element exists\n";
    else
    cout<<"No duplicate elements\n";






    return 0;
}
