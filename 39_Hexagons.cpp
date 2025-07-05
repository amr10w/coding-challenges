#include <iostream>

#include <bits/stdc++.h>


using namespace std ;

int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
cout.tie(0);

long long n;
cin>>n;
// s= 1 +     2  +    3  +  4   .......  n-3 +n-2+    n-1 + n
// s= n +    n-1 +   n-3 + n-3  .......   4 +  3  +    2 +  1
// 2s= n+1 + n+1 +   n+1 + n+1  ....... n+1 + n+1 +   n+1 + n+1
// 2s= n(n+1) .
//s= n(n+1)/2
cout<< 6*( n *(n+1)/2) +1;


}
