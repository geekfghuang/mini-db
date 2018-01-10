/* �������� 
#include<stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int a[], int low, int high)
{
    int privotKey = a[low];                             //��׼Ԫ��
    while(low < high){                                   //�ӱ�����˽�������м�ɨ��
        while(low < high  && a[high] >= privotKey) --high;  //��high ��ָλ����ǰ���������ൽlow+1 λ�á����Ȼ�׼Ԫ��С�Ľ������Ͷ�
        swap(&a[low], &a[high]);
        while(low < high  && a[low] <= privotKey ) ++low;
        swap(&a[low], &a[high]);
    }
    return low;
}


void quickSort(int a[], int low, int high){
    if(low < high){
        int privotLoc = partition(a,  low,  high);  //����һ��Ϊ��
        quickSort(a,  low,  privotLoc -1);          //�ݹ�Ե��ӱ�ݹ�����
        quickSort(a,   privotLoc + 1, high);        //�ݹ�Ը��ӱ�ݹ�����
    }
}

int main(){
	int i=0;
    int a[10] = {3,1,5,7,2,4,9,6,10,8};

    printf("����ǰ��\n");
    for(i=0;i<10;i++){
    	printf("%d ",a[i]);
	}
	printf("\n");

    quickSort(a,0,9);

    printf("����ǰ��\n");
    for(i=0;i<10;i++){
    	printf("%d ",a[i]);
	}
	printf("\n");
}
*/

//��ά�ַ����� 
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
	strcpy(privotKey,a[low]);                         //��׼Ԫ��
    while(low < high){                                   //�ӱ�����˽�������м�ɨ��
        while(low < high  && strcmp(a[high], privotKey)>=0) --high;  //��high ��ָλ����ǰ���������ൽlow+1 λ�á����Ȼ�׼Ԫ��С�Ľ������Ͷ�
        swap(a[low], a[high]);
        while(low < high  && strcmp(a[low],privotKey)<=0 ) ++low;
        swap(a[low], a[high]);
    }
    return low;
}


void quickSort(char a[][300], int low, int high){
    if(low < high){
        int privotLoc = partition(a,  low,  high);  //����һ��Ϊ��
        quickSort(a,  low,  privotLoc -1);          //�ݹ�Ե��ӱ�ݹ�����
        quickSort(a,   privotLoc + 1, high);        //�ݹ�Ը��ӱ�ݹ�����
    }
}

int main(){
	
	int i=0;
    char a[4][300];
    strcpy(a[0],"��֯asd");
    strcpy(a[1],"asd");
    strcpy(a[2],"asd");
    strcpy(a[3],"˹�ٷ�");

    printf("����ǰ��\n");
    for(i=0;i<4;i++){
    	printf("%s\n",a[i]);
	}
	printf("\n");

    quickSort(a,0,3);

    printf("�����\n");
    for(i=0;i<4;i++){
    	printf("%s\n",a[i]);
	}
	printf("\n");
}



