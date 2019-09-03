#include<stdio.h>
int n,a[100],k,l;
void input()
{int i;
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);}
}
void check()
{int i,c;c=a[0];
for(i=0;i<n;i++)
{if(a[i]<c&&a[i]<k)
 {c=a[i];
 }
}printf("%d",(k-c));
}
void main()
{scanf("%d",&l);
 while(l>0)
{l--;
scanf("%d",&n);scanf("%d",&k);
input();
check();}
}
