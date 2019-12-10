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
    string str1, str2;
    cin>>str1>>str2;

    if(str1.size() != str2.size())
    cout<<"Strings are not permutation of each other\n";
    else
    {
      int a1[52] , a2[52]; //0 - 25 ---small letter && 26-51 --capital letter
      for(int i = 0; i<52; i++)
      a1[i] = a2[i] = 0;
      int n = str1.size();
      for(int i = 0; i<n; i++)
      {
        if(str1[i] > 'a' && str1[i] < 'z')
        {
          a1[(int)(str1[i] - 97)]++;
        }
        else  if(str1[i] > 'A' && str1[i] <'Z')
        a1[(int)(str1[i] - 65) + 26]++;
      }

      for(int i = 0; i<n; i++)
      {
        if(str2[i] > 'a' && str2[i] < 'z')
        {
          a2[(int)(str2[i] - 97)]++;
        }
        else  if(str2[i] > 'A' && str2[i] <'Z')
        a2[(int)(str2[i] - 65) + 26]++;
      }

      int flag = 0;

      for(int i = 0; i<52; i++)
      {
        if(a1[i] != a2[i])
        {flag = 1;break;}
      }

      if(flag == 1)
      cout<<"Strings are not permutation of each other\n";
      else
      cout<<"Strings are permutation of each other\n";
    }






    return 0;
}
