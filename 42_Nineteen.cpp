#include <iostream>

#include <bits/stdc++.h>


using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
cout.tie(0);
string s;

cin>>s;
int freq[4]={0};
for(int i=0;i<s.length();i++)
{
   if(s[i]=='n')
    freq[0]++;

   if(s[i]=='e')
    freq[1]++;

   if(s[i]=='t')
    freq[2]++;

   if(s[i]=='i')
    freq[3]++;
}
int mi;
mi =freq[1]/3;
mi = min(mi,min(freq[2],freq[3]));
            //nineteen nietee
         //n ==  1 ==>3
         //cout zero
         // n == 3 ,6 ,9 ==> n/2  
         // n== 4,8 ==> n/2 -1
         // (n-1) /2
        
            mi =min ((freq[0]-1)/2,mi);
          
cout<< mi;

}
