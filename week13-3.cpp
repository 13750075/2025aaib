///week13-3.cpp
///輾轉相除法
#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    printf("請輸入兩個數字");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=gcd(a,b);
    printf("他的最大公因數是:%d\n",ans);
}
