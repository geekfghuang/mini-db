/* 数字排序 
#include<stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int a[], int low, int high)
{
    int privotKey = a[low];                             //基准元素
    while(low < high){                                   //从表的两端交替地向中间扫描
        while(low < high  && a[high] >= privotKey) --high;  //从high 所指位置向前搜索，至多到low+1 位置。将比基准元素小的交换到低端
        swap(&a[low], &a[high]);
        while(low < high  && a[low] <= privotKey ) ++low;
        swap(&a[low], &a[high]);
    }
    return low;
}


void quickSort(int a[], int low, int high){
    if(low < high){
        int privotLoc = partition(a,  low,  high);  //将表一分为二
        quickSort(a,  low,  privotLoc -1);          //递归对低子表递归排序
        quickSort(a,   privotLoc + 1, high);        //递归对高子表递归排序
    }
}

int main(){
	int i=0;
    int a[10] = {3,1,5,7,2,4,9,6,10,8};

    printf("排序前：\n");
    for(i=0;i<10;i++){
    	printf("%d ",a[i]);
	}
	printf("\n");

    quickSort(a,0,9);

    printf("排序前：\n");
    for(i=0;i<10;i++){
    	printf("%d ",a[i]);
	}
	printf("\n");
}
*/

//二维字符数组 
#include<stdio.h>
#include<string.h>
void swap(char a[], char b[])
{
    char tmp[300] = "\0";
    strcpy(tmp ,a);
    strcpy(a ,b);
    strcpy(b,tmp);
}

int partition(char a[][300], int low, int high)
{
    char privotKey[300] = "\0";
	strcpy(privotKey,a[low]);                         //基准元素
    while(low < high){                                   //从表的两端交替地向中间扫描
        while(low < high  && strcmp(a[high], privotKey)>=0) --high;  //从high 所指位置向前搜索，至多到low+1 位置。将比基准元素小的交换到低端
        swap(a[low], a[high]);
        while(low < high  && strcmp(a[low],privotKey)<=0 ) ++low;
        swap(a[low], a[high]);
    }
    return low;
}


void quickSort(char a[][300], int low, int high){
    if(low < high){
        int privotLoc = partition(a,  low,  high);  //将表一分为二
        quickSort(a,  low,  privotLoc -1);          //递归对低子表递归排序
        quickSort(a,   privotLoc + 1, high);        //递归对高子表递归排序
    }
}

int main(){
	
	int i=0;
    char a[4][300];
    strcpy(a[0],"组织asd");
    strcpy(a[1],"asd");
    strcpy(a[2],"asd");
    strcpy(a[3],"斯蒂芬");

    printf("排序前：\n");
    for(i=0;i<4;i++){
    	printf("%s\n",a[i]);
	}
	printf("\n");

    quickSort(a,0,3);

    printf("排序后：\n");
    for(i=0;i<4;i++){
    	printf("%s\n",a[i]);
	}
	printf("\n");
}



