#include<stdio.h>
int main()
{int i, s, all��j;  //���� 
scanf("%d",&i);
s=i%2;
if(s==0) s=0;
else s=1;
switch (s) {
	case 0:
	printf("ż��")	//TODO
		break;
	case 1:
	printf("����")	//TODO
		break;
	default:
		//TODO
		break;
}
	for(int j=i;j<=200;j=j+2){
		all=all+j;
	printf("%d",all);
	return 0;
}
 
