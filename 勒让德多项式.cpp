 #include<stdio.h>
int  main()
{
float ral(int n,int x,float y);
 int  n, x;
 float y;
scanf("%d,%d",&n,&x);
y= ral(n,x,y);
printf("%f",y);
return 0;
}
float ral(int n,int x,float y)
  {if (n==0) y=1.0;
  else if(n==1)  y=x;
  else if(n>1) y = ((n*2-1)*x-ral(n-1,x,y)-(n-1)*ral(n-2,x,y))/n; 
	return y;
	}
