#include<stdio.h>
int main()
{
    int a,b;
    int limak=3;
    int bob=2;
    scanf("%d %d",&a,&b);
    int year=1;
    while(1)
    {
        a=a*limak;
        b=b*bob;
        if(a>b)
            break;
        else
            year++;
            continue;
    }

    printf("%d",year);

    return 0;
}
