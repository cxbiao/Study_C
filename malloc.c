#include <stdio.h>
#include <stdlib.h>

//int main(){
//
//    int len;;
//    printf("请输入首次分配内存大小:");
//    scanf("%d",&len);
//
//    //动态分配内存，内存空间是连续的
//    int *p=(int *)malloc(len*sizeof(int));
//    //希望申请的内存空间赋值
//    int i=0;
//    for(;i<len;i++){
//        p[i]=rand()%100;
//        printf("array[%d]=%d,%#x\n",i,p[i],p);
//    }
//
//    //在原有内存上面，重新分配内存大小
//    printf("请输入增加的内存大小:");
//    int add;
//    scanf("%d",&add);
//
//    //重新申请内存大小，传入申请的内存指针，申请内存总大小
//    int *p2=realloc(p,(len+add)*sizeof(int));
//    //给新申请的内存空间赋值
//    int j=len;
//    for(;j<len+add;j++){
//        p2[j]=rand()%200;
//    }
//    //打印
//    j=0;
//    for(;j<len+add;j++){
//          printf("array[%d]=%d,%#x\n",j,p2[j],&p2[j]);
//    }
//    //回收申请的动态内存
//    if(p2!=NULL){
//        free(p2);
//        p2=NULL;
//    }
//
//    /**
//
//    内存分配的几个注意细节：
//    1.不能多次释放
//    2.释放完之后 ， 给指针置NULL，标志释放完成
//    3.内存泄漏 （p重新赋值之后 ， 再free ， 并没有真正释放 ， 要在赋值之前释放前一个内存空间）
//
//    */
//    return 0;
//}
