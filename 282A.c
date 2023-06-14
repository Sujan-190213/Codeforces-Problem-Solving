#include<stdio.h>
#include<string.h>

int main(){
  int number;
  char str1[5];
  int x = 0;
  scanf("%d",&number);
  for(int i = 0;i < number;i++)
  {
      scanf("%s",str1);
      if(strcmp(str1,"++X")==0)
      {
          ++x;
      }
      else if(strcmp(str1, "X++")==0)
      {
        x++;
      }
      else if(strcmp(str1, "--X")==0)
      {
          --x;
      }
     else if(strcmp(str1, "X--")==0)
      {
          x--;
      }
  }

  printf("%d\n",x);
return 0;
}
