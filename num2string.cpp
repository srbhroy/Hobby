/*Created By SOURABH ROY
This program inputs number as long long type and outputs the number in words
Date:18 July 2019
Place : Pondicherry University Hostel
*/
#include "bits/stdc++.h"
#define ll long long
#define pb push_back
#define cas  cout<<"Case #"<<++t<<": ";
using namespace std;
int i=0;
ll power(ll a,ll b)
{
    if(b==1)
        return 1;
    else
        return a*power(a,b-1);
}
int main()
{
    vector<string> s2{"zero","one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
    "twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"
    "hundred","thousand","ten thousand","lakh","ten lakh","crore","ten crore"};
    vector<string> s3;
    ll num,siz=0;
    cin>>num;

    ll a=num;
    while(a)
    {
        ++siz;
        a/=10;
    }
    a=num;
    if(siz==2)
    {
        switch(now){
                case 10 :{
                    cout<<"zero";
                    }
                break;
                case 11 :{
                    cout<<"one";
                    cout<<s2.at(siz-1);
                }
                break;
                case 2 :{
                    cout<<"two";
                    cout<<s2.at(siz-1);
                }
                break;
                case 3 :{
                    cout<<"three";
                    cout<<s2.at(siz-1);
                }
                break;
                case 4 :{
                    cout<<"four";
                    cout<<s2.at(siz-1);
                }
                break ;
                case 5 :{
                    cout<<"five";
                    cout<<s2.at(siz-1);
                }
                break;
                case 6 :{
                    cout<<"six";
                    cout<<s2.at(siz-1);
                }
                break;
                case 7 :{
                    cout<<"seven";
                    cout<<s2.at(siz-1);
                }
                break;
                case 8 :{
                    cout<<"eight";
                    cout<<s2.at(siz-1);
                }
                break;
                case 9 :{
                    cout<<"nine";
                    cout<<s2.at(siz-1);
                }
    }
    else
    {
    while(siz)
    {
        ll c=power(10,siz);
        ll now=a/c;
        a=(a%c);
        switch(now){
                case 0 :{
                    cout<<"zero";
                    }
                break;
                case 1 :{
                    cout<<"one";
                    cout<<s2.at(siz-1);
                }
                break;
                case 2 :{
                    cout<<"two";
                    cout<<s2.at(siz-1);
                }
                break;
                case 3 :{
                    cout<<"three";
                    cout<<s2.at(siz-1);
                }
                break;
                case 4 :{
                    cout<<"four";
                    cout<<s2.at(siz-1);
                }
                break ;
                case 5 :{
                    cout<<"five";
                    cout<<s2.at(siz-1);
                }
                break;
                case 6 :{
                    cout<<"six";
                    cout<<s2.at(siz-1);
                }
                break;
                case 7 :{
                    cout<<"seven";
                    cout<<s2.at(siz-1);
                }
                break;
                case 8 :{
                    cout<<"eight";
                    cout<<s2.at(siz-1);
                }
                break;
                case 9 :{
                    cout<<"nine";
                    cout<<s2.at(siz-1);
                }
            }
        --siz;
    }
    }
    cout<<"\n";
    for(auto i:s3)
        cout<<i<<" ";
}
