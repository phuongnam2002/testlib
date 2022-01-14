#include<stdio.h>
#include<string.h>
int main()
{
   char s[200];
   gets(s);
   int n=strlen(s);
   for(int i=0;i<n;i++)
   {
       if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
   }
   char a[200][200];
   int pos=0,k=0;
   for(int i=0;i<n;i++)
   {
     if(s[i]!=32)
     {
       a[pos][k]=s[i];
       k++;
     }
     else
     {
       a[pos][k]=0;
       pos++;
       k=0;
     }
   }
   a[pos][k]=0;
   for(int i=0;i<=pos-1;i++)
   {
      int dem=1;
      for(int j=i+1;j<=pos;j++)
      {
          if(strcmp(a[i],a[j])==0)
          {
              dem++;
              a[j][0]=0;
          }
      }
      if(a[i][0]!=0)
      {
          printf("%s %d\n",a[i],dem);
          a[i][0]=0;
      }
   }
}
