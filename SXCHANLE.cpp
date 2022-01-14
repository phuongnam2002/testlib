#include<stdio.h>
#include<math.h>
#include<string.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define pi 3.141592653589793238
typedef long long ll;
const int N=1e6+3;
struct data
{
    char s[100];
    int dem;
}typedef data;
int main()
{
  data a[1005];
  int index=0;
  char s1[100];
  while(scanf("%s",&s1)!=EOF)
  {
      int check=1;
      for(int i=0;i<=(strlen(s1)-1)/2;i++)
      {
          if(s1[i]!=s1[strlen(s1)-1-i])
          {
              check=0;
              break;
          }
      }
      if(check==0||strlen(s1)==1) continue;
      check=0;
      for(int i=0;i<=index-1;i++)
      {
          if(strcmp(s1,a[i].s)==0)
          {
             a[i].dem++;
             check=1;
             break;
          }
      }
      if(check==0)
      {
          strcpy(a[index].s,s1);
          a[index].dem=1;
          index++;
      }
  }
      for(int i=1;i<=index;i++)
      {
          for(int j=0;j<=index-2;j++)
          {
              if(strlen(a[j].s)<strlen(a[j+1].s)||(strlen(a[j].s)==strlen(a[j+1].s)&&strcmp(a[j].s,a[j+1].s)<0))
              {
                  data c=a[j];
                  a[j]=a[j+1];
                  a[j+1]=c;
              }
          }
      }
      for(int i=0;i<=index-1;i++)
      {
          printf("%s %d\n",a[i].s,a[i].dem);
      }
}
