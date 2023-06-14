#include<stdio.h>
int main()
{
    int numberOfRow,sumX=0,sumY=0,sumZ=0;
    int arr[200][200];
    scanf("%d",&numberOfRow);
    for(int i=0;i<numberOfRow;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<numberOfRow;i++)
    {
        sumX=sumX+arr[i][0];
        sumY=sumY+arr[i][1];
        sumZ=sumZ+arr[i][2];
    }

    if(sumX==0&&sumY==0&&sumZ==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
