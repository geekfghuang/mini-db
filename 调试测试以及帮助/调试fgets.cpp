#include<stdio.h>
#include<dir.h>
int main(){
	int num = 0;
	FILE *file = fopen("µ˜ ‘fgets π”√.txt","a+");
	char buffer[1024] = "\0";
	if(file!=NULL){
		while(fgets(buffer,1024,file)!=NULL){
			num++;
		}
		printf("num: %d\n",num);
	}
}
