#include <stdio.h>
#include<math.h>
 
 int main()
 {int  i, j, p, q, c, d;
  int a[5][5];
	for(int c=0;c<=5;c++){
	for(int d=0;d<=5;d++){a[c][d]=0;
	}} 
 printf("请告诉我你要运算的是几行几列的矩阵A\n");
 	scanf("%d,%d",&i,&j) ;
 printf("请输入矩阵A:\n");
 for(int p=0;p<=i-1;p++){
    for(int q=0;q<=j-1;q++){scanf("%d,",&a[p][q]);
 }}
 printf("原矩阵A为：");
 for(int p=0;p<=i-1;p++){
 	for(int q=0;q<=j-1;q++){printf("%d,",a[p][q]);
 	printf("\n");
 }
 }
 	
 	
 	
 	
 	
 	return 0;
 }
