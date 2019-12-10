#include<bits/stdc++.h>
using namespace std;


int hash1(string s, int base)
{
  int m = s.size();
  int hValue = 0;
  for(int i  = 0; i<m;i++)
  {
      hValue += (int)(s[i] - 96)*pow(10, m-(i+1));
  }
  return hValue;
}


int main()
{

  string str;
  cin>>str;
  string p;
  cin>>p;
  int hP = hash1(p,10);
  int hS = 0;
  int n = str.size();

  int m = p.size();

  //cout<<h<<endl;
  hS = hash1(str.substr(0, p.size() ) , 10);
  int i = 1;


  for(i = 0; i<n+m; i++)
  {
    if(hS == hP){
      int flag = 0;

      for(int j  = 0; j<m; j++)
      {
        if(str[i+j] != p[j])
        flag = 1;
      }
      if(flag == 0)
    cout<<"Pattern found at index : "<<i<<endl;}
  }

  if(i + m < n)
  hS = ( hS - (int) ( str[i] - 96) * pow(10, m-1) ) * 10 + (int)(str[i + m]- 96) ;
  
  // do {
  //   /* code */
  //
  //   if(hS == hP)
  //   cout<<"pattern found at index : "<<i<<endl;
  //   //i++;
  //   if(i+p.size() < n)
  //   hS = (hS - (int)(str[i-1] - 96)*pow(10, m-1)  ) * 10 + (int)(str[i-1+p.size()] - 96);
  //   // i += p.size();
  //   i++;
  // } while(i < n-p.size());



  return 0;
}
