#include<stdio.h>
int main(){
	FILE *file = fopen("比较fseek与fgets使用.txt","a+");
	char buffer[1024] = "\0";
	int i=0,j=0;
	if(file!=NULL){
		for(i=0;i<100;i++){//初步制造压力 
			
			//fseek(file,1567787,0);
			
			for(j=0;j<18889;j++){
				fgets(buffer,1024,file);
			}
			
			fgets(buffer,1024,file);
			printf("%s\n",buffer);
		}
    	fclose(file);
	}
}
//同时运行多个exe模拟并发进一步制造压力 
