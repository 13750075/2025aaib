///week13-3.cpp
///����۰��k
#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    printf("�п�J��ӼƦr");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=gcd(a,b);
    printf("�L���̤j���]�ƬO:%d\n",ans);
}
