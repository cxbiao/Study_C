#include <stdio.h>
#include <stdlib.h>

//int main(){
//
//    int len;;
//    printf("�������״η����ڴ��С:");
//    scanf("%d",&len);
//
//    //��̬�����ڴ棬�ڴ�ռ���������
//    int *p=(int *)malloc(len*sizeof(int));
//    //ϣ��������ڴ�ռ丳ֵ
//    int i=0;
//    for(;i<len;i++){
//        p[i]=rand()%100;
//        printf("array[%d]=%d,%#x\n",i,p[i],p);
//    }
//
//    //��ԭ���ڴ����棬���·����ڴ��С
//    printf("���������ӵ��ڴ��С:");
//    int add;
//    scanf("%d",&add);
//
//    //���������ڴ��С������������ڴ�ָ�룬�����ڴ��ܴ�С
//    int *p2=realloc(p,(len+add)*sizeof(int));
//    //����������ڴ�ռ丳ֵ
//    int j=len;
//    for(;j<len+add;j++){
//        p2[j]=rand()%200;
//    }
//    //��ӡ
//    j=0;
//    for(;j<len+add;j++){
//          printf("array[%d]=%d,%#x\n",j,p2[j],&p2[j]);
//    }
//    //��������Ķ�̬�ڴ�
//    if(p2!=NULL){
//        free(p2);
//        p2=NULL;
//    }
//
//    /**
//
//    �ڴ����ļ���ע��ϸ�ڣ�
//    1.���ܶ���ͷ�
//    2.�ͷ���֮�� �� ��ָ����NULL����־�ͷ����
//    3.�ڴ�й© ��p���¸�ֵ֮�� �� ��free �� ��û�������ͷ� �� Ҫ�ڸ�ֵ֮ǰ�ͷ�ǰһ���ڴ�ռ䣩
//
//    */
//    return 0;
//}
