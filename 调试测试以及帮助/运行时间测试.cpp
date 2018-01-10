#include<stdio.h>
#include<time.h>

double t1,t2;
int i=0; 

int main(){
	
	t1 = clock();
	for(i=0;i<200000000;i++);
	t2 = clock();
	
	printf("t1:%.5lfms  t2:%.5lfms  time:%.5lfms\n",t1,t2,t2-t1);
	
	//10^5 （十万） O(1)        ---->    0ms 
	//10^7 （一千万） O(1)      ---->    50ms
	//2*10^8 （两亿） O(1)      ---->    990ms~1000ms 
}
