#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ַ�����
void charArray(){

    //�ַ�����,�����޸�
    char c[15]={'y','e','s','m','a','n'};
    //�ַ��������ֱ����Ϊ�ַ������
    printf("%s\n",c);

    //�޸�
    c[0]='a';
    printf("�޸��ַ�:%s\n",c);
}

//�ַ�ָ��
void charPointer(){

    //�ڴ���������,�����޸�
    char *s="Nerver give up";
    printf("�ڴ��ַ:%#x\n",s);

    //��ȡ�ַ�
    s+=6;
    while(*s){
        printf("%c",*s);
        s++;
    }

}

//ƴ�Ӻ���
void spliceString(){

    //�ϲ���洢�ַ�������
    char dest[40]={'h','e','h','e',' '};
    char *c1="Never give up ";
    char *c2="I believe you! ";

    //������ַ�����ԭ�е�����
    //strcpy(dest,c1);
    strcat(dest,c1);
    strcat(dest,c2);

    printf("\nƴ���ַ���:\n%s\n",dest);
}


//���ҵ����ַ�
void searchChar(){


    char *str="I wanna dont kiss you";
    char *p=strchr(str,'d');
    if(p){
        printf("����λ��:%d\n",p-str);
        printf("��ӡ: ");
        str+=p-str;
        while(*str){
            printf("%c",*str);
            str++;
        }
         printf("\n");
    }else{

        printf("û���ҵ�\n");
    }
}


//�����ַ���
void searchChars(){


    char *str="�仨������ˮ����";
    char *p=strstr(str,"��");
    if(p){
        printf("����λ��:%d\n",p-str);
        printf("��ӡ: ");
        str+=p-str;
        if(*str){
            printf("%s-----%s\n",str,p);

        }
         printf("\n");
    }else{

        printf("û���ҵ�\n");
    }
}


//�ַ�ת��
void strToInt(){


    char *p="123";
    int toInt=atoi(p);
    int res=toInt+123;
    printf("�ַ�ת��int����:%d\n",res);

    char str[10];
    sprintf(str,"%d",res);
    printf("intת��Ϊ�ַ���:%s\n",str);

}

//int main(){
//
//
//    charArray();
//    charPointer();
//    spliceString();
//    searchChar();
//    searchChars();
//    strToInt();
//    return 0;
//}
