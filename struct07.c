#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    ����һ���ṹ��
    һ���ṹ���൱��һ��JAVA�е���,�ṹ����ֻ������������û��ʵ�֣�����Ҳ
    ���ܳ�ʼ����һ����ͷ�ļ���

*/

struct Person{

    char *name;
    int age;
};

struct News {
    //ʹ���ַ����飬�ڸ�ֵ��ʱ����ַ�ָ�����в�ͬ
    char title[128];
    char *content;
};



//��ʹ�ýṹ��
void makeSimpleStruct(){


    //ʹ�ýṹ��,ʹ������������ʽ����һ���ṹ��
    struct Person person={"zero",21};
    //��ӡ
    printf("���:����-%s;����-%d\n",person.name,person.age);

    //��һ�ִ����ṹ��ķ�ʽ
    struct Person person2;
    person2.name="����";
    person2.age=14;

    printf("���:����-%s;����-%d\n",person2.name,person2.age);

    struct News news;
    //news.title���ַ�����,����ֱ��news.titile="xxx",Ҫ��strcpy()����
    strcpy(news.title,"�������ű���");
    news.content="��������";

    printf("\n\n���:\n����\n %s \n����:\n %s\n",news.title,news.content);
}


/* �ṹ��ļ���д�� */
//�������ṹ���ʱ�򣬶���ṹ�������ָ��
struct Product {
    char *productName;
    char *productDesc;

}product,*productP;

//�����ṹ��û�нṹ�����ƣ����Զ������ṹ����������Ϊ����ʹ��
struct {

    char *name;
    int age
}person1,person2;


//�ṹ�����д��ʹ��
void defineMultiStruct(){


    //�������ṹ���ʱ����ṹ�������������㣬�����ٶ���һ��
    product.productName="ȫ�±���Xϵ��,X5";
    product.productDesc="�޹κ�,ȫ��Xϵ�б���,���ܼ�ʻ����,�Ϳ�����γ�";

    printf("\n\n\n");
    printf("��Ʒ��Ϣ:\n��Ʒ����:%s\n��Ʒ����:%s\n",product.productName,product.productDesc);

    printf("\n\n\nʹ�ýṹ��ָ��,�ṹ��ָ�벻��.����,ʹ��->�����������ṹ���Ա,->��������(*p).�ļ�д \n\n");
    productP=&product;
    printf("��Ʒ��Ϣ:\n��Ʒ����:%s\n��Ʒ����:%s\n",productP->productName,productP->productDesc);

    //ʹ�������ṹ��,ʼ��ֻ��һ���ṹ��ʵ����������Ϊ������ʹ��
    person1.name="��С��";
    person1.age=19;

    person2.name="����";
    person2.age=17;

    printf("\n\n");
    printf("�û���Ϣ:\n�û�����:%s\n�û�����:%d\n",person1.name,person1.age);
    printf("�û���Ϣ:\n�û�����:%s\n�û�����:%d\n",person2.name,person2.age);
}

//�ṹ��Ƕ��,���ַ�ʽ

//one
struct GoodsBean {

    int total;
    int status;

    struct Goods{
        char *goodsName;
        char *goodsDesc;
    };
};

//two
struct ProductBean{

    int total;
    int status;
    struct Product product;
};

//�ṹǶ��ʾ��
void nestingStruct(){

    //one
    printf("\n\n\n�ṹ��Ƕ��ʾ��\n\n");
    //ʹ������������ʽ��ֵ
    struct GoodsBean goodsBean={10,0,{"ȫ��MacBook pro 2016","ʷ����ǿ����,����siri"}};
    printf("��Ʒ����:%d\n��Ʒ״̬:%d\n��Ʒ����:%s\n��Ʒ����:%s\n",goodsBean.total,
           goodsBean.status,goodsBean.goodsName,goodsBean.goodsDesc);

    //two
    printf("\n\n");
    struct ProductBean productBean;
    productBean.total=100;
    productBean.status=0;
    productBean.product.productName="��ΪMate9";
    productBean.product.productDesc="˫��˫��";
    printf("��Ʒ����:%d\n��Ʒ״̬:%d\n��Ʒ����:%s\n��Ʒ����:%s\n",productBean.total,
           productBean.status,productBean.product.productName,productBean.product.productDesc);
}


//�ṹ������
void useStructArray(){

    printf("\n\n\n�ṹ������ʾ��\n\n");
    //�ṹ������
    struct Person persons[]={{"zero",8},{"mane",21}};
    struct Person *p=&persons;
    int personArrSize=sizeof(persons)/sizeof(struct Person);
    printf("�����ṹ������:\n");

    for(;p<persons+personArrSize;p++){

        printf("ÿ���ṹ�������ַ:%#x\n",p);
        printf("����:%s\t ����:%d\n",p->name,p->age);
    }

}


//�ṹ���붯̬�ڴ����
void structAndMalloc(){


    printf("\n\n\n�ṹ���붯̬�ڴ����\n\n");
    //������ڴ�ռ�,�ռ��ַ��������
    struct Person *person=(struct Person*)malloc(sizeof(struct Person)*10);
    struct Person *p=person;
    p->name="С��";
    p->age=20;
    p++;
    p->name="��վ";
    p->age=24;

    printf("�����ṹ�嶯̬�ڴ�:\n");
    struct Person* loop_p=person;
    for(;loop_p<person+2;loop_p++){
         printf("����:%s\t ����:%d\n",loop_p->name,loop_p->age);
    }
}


//�ṹ���뺯��ָ��
struct Dog {

    char *name;
    int age;
    void(*dogWow)(char *);
};

void dogWow(char *wow){
    printf("����:%s��\n",wow);
}


//�ṹ���뺯��ָ���ʹ��
void useStructAndFunction(){

    printf("\n\n\n");
    printf("�ṹ����,����û��ʵ��,�ڴ����ṹ��ʱ,���������Ƹ�ֵ������ָ�뼴��\n");
    struct Dog dog={"С��",3,dogWow};
    dog.dogWow("����...");

}


/**

    ���ͱ��� typedef
    1.��ͬ���ƴ���������ͬ������typedef int jint;
    2.��ͬ����£�ʹ�ò�ͬ�ı���
    3.��д���
*/


//�򵥱���
typedef char* Name;
//�ṹ�����
typedef struct ImageInfo {

    char *name;
    int size;
    char *path;
}ImageInfo,*ImageInfo_P;

void reFileName(ImageInfo_P imageInfo_p,char *reName){
    imageInfo_p->name=reName;
}

//���ͱ���
void useTypedef(){

    //��ͨ��������ʹ��
    printf("\n\n\n���ͱ���ʾ��\n\n");
    Name name="zero";
    printf("���ͱ���:Name=%s\n",name);

    //�ṹ�����ʹ��,��ʹ��java��������
    ImageInfo imageInfo;
    char pathStr[100]={"D:\\image\\"};
    imageInfo.name="��Ů.jpg";

    reFileName(&imageInfo,"��.png");
    imageInfo.size=3333;
    strcat(pathStr,imageInfo.name);
    imageInfo.path=pathStr;

    printf("\n\n�ļ���Ϣ��\n�ļ�����%s\n�ļ���С��%d kb\n�ļ�·����%s\n", imageInfo.name, imageInfo.size, imageInfo.path);



}

//int main(){
//
//    //makeSimpleStruct();
//    //defineMultiStruct();
//    //nestingStruct();
//    //useStructArray();
//    //structAndMalloc();
//    //useStructAndFunction();
//    //useTypedef();
//    //return 0;
//}
