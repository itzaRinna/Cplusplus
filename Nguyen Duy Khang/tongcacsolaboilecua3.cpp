#include <bits/stdc++.h>
using namespace std;
int n,i;
int s=0;
int main(){
    cout<<"Nhap n, tinh tong cac so la boi so le cua 3 tu 1 den n "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
        if(i%3==0&&i%2==1)
            s=s+i;
            cout<<s;

}

