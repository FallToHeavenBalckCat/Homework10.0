/*Climbing Worm
HDOJ_1.2.2*/
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=110;

int main(){
    int  n,u,d;
    while(scanf("%d%d%d",&n,&u,&d)&&n!=0)
    {
        int t=0,x=0;
        while(1){
            if(x>=n-u&&t%2==0)
            {
                t++;
                break;
            }
            if(t%2==0){
                t++;
                x+=u;
            }
            else 
            {
                t++;
                x-=d;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}