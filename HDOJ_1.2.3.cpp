/*一盒砖头A box of bricks
HDOJ_1.2.3*/
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=110;
int main(){
    int n,a[N],cnt=1;
    while(scanf("%d",&n)&&n!=0)
    {
        int s=0;
        for(int i=0;i<n;i++) 
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        int avg=s/n;
        int res=0;
        for(int i=0;i<n;i++) a[i]-=avg;
        for(int i=0;i<n;i++) 
        {
            if(a[i]>0) res+=a[i];
        }
        printf("Set #%d\n",cnt);
        printf("The minimum number of moves is %d.\n",res);
        puts("");
        cnt++;
    }
    return 0;
}


