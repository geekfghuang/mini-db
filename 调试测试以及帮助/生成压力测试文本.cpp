#include<stdio.h>
int main(){
	FILE *file = fopen("—π¡¶≤‚ ‘/—π¡¶≤‚ ‘11.txt","a+");
	int k = 0;
	if(file!=NULL){
		while(1){
			if(k==10000){
				break;
			}
			fputs("SELECT * FROM user WHERE id = 102 USING INDEX;\n",file);
			k++;
		}
	} 
}
