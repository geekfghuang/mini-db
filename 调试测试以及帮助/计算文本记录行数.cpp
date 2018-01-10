#include<stdio.h>
int main(){
	FILE *file = fopen("我的数据库2/client.txt","a+");
	int sum = 0;
	char buffer[1024] = "\0";
	if(file!=NULL){
		while(fgets(buffer,1024,file)!=NULL){
			sum++;
		}
		printf("sum: %d\n",sum);
	} 
}
