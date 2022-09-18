/*最右边的数字
HDOJ_1.2.4*/
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef long long LL;


/*爆搜超时*/
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     while(n--){
//         int N;
//         int res=1;
//         scanf("%d",&N);
//         for(int i=0;i<N;i++) {
//             res=(res*N)%10;
//         }
//         printf("%d\n",res);
//     }
//     return 0;
// }

/*快速幂写法*/
LL pmi(int N)
{
    if(N%10==0) return 0;
    LL res=1%10;
    LL t=N;
    while(t){
        if(t&1) res=res*N%10;
        t>>=1;
        N=N*N%10;
    }
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        LL N;
        scanf("%ld",&N);
        printf("%ld\n",pmi(N));
    }   
    return 0;
}