#include<bits/stdc++.h>
using namespace std;
int main()
{ int m,n, i, j,k;
int xiao(int x,int y);
int a[200][200];
printf("«Î ‰»Î∆Â≈Ã¥Û–°:");
scanf("%d",&n);
scanf("%d",&m);

for(int i=0;i<=n-1;i++){
	printf("{");
   for(int j=0;j<=m-1;j++){
	scanf("%d",&a[i][j]);
	printf("£¨");
}		
	printf("}");
}
int zuo[200];
int you[200];
i=0;
j=0;
int sum1=0;
for(int i=0;i<=n-1;i++){
  for(int k=0;k<=xiao(n,m);k++){
  sum1=sum1+a[i+k][k];
   }
   zuo[i]=sum1;
   k=0;
}
int l=1;
sum1=0;
for(int i;i<=n+m-3;i++){
  for(int l=1;l<=xiao(n,m);l++){
  sum1=sum1+a[l-1][l+i-n+1];
   }
   zuo[i]=sum1;
 l=1;
}
k=0;
int sum2=0;
for(int j;j<=n+m-3;j++){
  for(int k=1;k<=xiao(n,m);k++){
  sum2=sum2+a[j+k][k];
   }
   you[j]=sum2;
 k=1;
}
sum2=0;
for(int j;j<=n+m-3;j++){
  for(int l=1;l<=xiao(n,m);l++){
  sum2=sum2+a[l-1][l+i-n+1];
   }
   you[j]=sum2;
 l=1;
}
i=0;
j=0;
int s=0;
for(int i=0;i<=n-1;i++){
   for(int j=0;j<=m-1;j++){
if (i>j&&i>m-j) s=s+zuo[i-j]+you[i-m+j];
if (i<j&&i<m-j) s=s+zuo[j-i+n-1]+you[m-j-i+n-1];
if (i=j) s=s+zuo[0];
if (i=m-j) s=s+you[0];
if (i>j&&i<m-j) s=s+zuo[i-j]+you[m-j-i+n-1];
if (i<j&&i>m-j) s=s+zuo[j-i+n-1]+you[i-m+j];
}


   }
	
} 







int xiao(int x,int y)
{ 	return(x<=y?x:y);}
