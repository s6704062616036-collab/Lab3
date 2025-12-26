//#include <stdio.h>
//int main(){
//	int h,m,s;
//	scanf("%d %d %d",&h,&m,&s);
//	printf("hour :%d\nminute :%d\nsecond :%d\n",h,m,s);
//}
#include <stdio.h>
int main(){
	int h,m,s,n;
	scanf("%d %d %d",&h,&m,&s);
	printf("hour :%d\nminute :%d\nsecond :%d\n",h,m,s);
	printf("Next minutes: ");
	scanf("%d",&n);
	m+=n;
	h+=m/60;
	m=m%60;
	h=h%24;
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d\n",s);
}