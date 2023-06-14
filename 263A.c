#include<stdio.h>

int main(){
int arr[5][5];
int compair = 1;
int pos = 0;
for(int i = 1;i <=5;i++)
{
    for(int j = 1;j <=5;j++)
    {
        scanf("%d",&arr[i][j]);
    }

}

for(int i = 1;i <=5;i++)
{
    for(int j = 1;j <=5;j++)
    {
       if((arr[i][j] == compair) && (i != 3 && j!= 3))
       {
           arr[++i][++j] = compair;
           pos++;
       }
    }
}

printf("%d",pos);

return 0;
}
