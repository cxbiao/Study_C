#include <stdio.h>
#include <stdlib.h>

/**

mode�����м�����̬�ַ���:

r ��ֻ���ļ������ļ�������ڡ�

r+ �򿪿ɶ�д���ļ������ļ�������ڡ�

w ��ֻд�ļ������ļ��������ļ�������Ϊ0�������ļ����ݻ���ʧ�����ļ��������������ļ���

w+ �򿪿ɶ�д�ļ������ļ��������ļ�������Ϊ�㣬�����ļ����ݻ���ʧ�����ļ��������������ļ���

a �Ը��ӵķ�ʽ��ֻд�ļ������ļ������ڣ���Ὠ�����ļ�������ļ����ڣ�д������ݻᱻ�ӵ��ļ�β�����ļ�ԭ�ȵ����ݻᱻ������

a+ �Ը��ӷ�ʽ�򿪿ɶ�д���ļ������ļ������ڣ���Ὠ�����ļ�������ļ����ڣ�д������ݻᱻ�ӵ��ļ�β�󣬼��ļ�ԭ�ȵ����ݻᱻ������
*/

//��ȡ���ַ��ļ�
void readASCIIFile(){


    //�Զ���ʽ���ļ�
    FILE *f=fopen("wow.txt","r");
    if(f==NULL){
        printf("���ļ�ʧ��\n");
        return;
    }
    char buffer[1024];

    while(fgets(buffer,1024,f)){
        printf("%s\n\n",buffer);
    }
    //�ر��ļ���
    fclose(f);


}



//д�ַ����ļ�
void writeASCIIFile(){
    FILE *f=fopen("wowW.txt","w");
    if(f==NULL){
        printf("���ļ�ʧ��\n");
        return;
    }
    fputs("��������־��һ��Ҫ�����ˡ�\n",f);
    fputs("�����������ɽ�����������С�������!",f);
    fclose(f);



}


//��д�������ļ�
void fileCopy(){

    FILE *fr=fopen("test.png","rb");
    FILE *fw=fopen("test2.png","wb");

    int buf[1024];
    char *ret;
    int len=0;
    while(len=fread(buf,sizeof(int),1024,fr)){
        fwrite(buf,sizeof(int),len,fw);
    }
    printf("%d\n",len);
    fclose(fw);
    fclose(fr);

}

/**
������
4�Ķ������ǣ�0100
5�Ķ������ǣ�0101
��������������ܣ���4 ^ 5  == 0001
��������������ܣ��� 0001 ^ 0101 == 0100
�������ɼ� �� ^һ��Ϊ���� �� ��^һ�ξ��ǽ���
*/


//�����ļ�
void encryptFile(){


    char *normal_path="test.png";
    char *encrypt_path="test_encrypt.png";

    FILE *normal_fp=fopen(normal_path,"rb");
    if(normal_fp==NULL){
        printf("�ļ�������\n");
        return;
    }
    FILE *encrypt_fp=fopen(encrypt_path,"wb");


    int buffer=0;
    //fgetc��ȡһ���ֽڣ�fputcд��һ���ֽ�
    while((buffer=fgetc(normal_fp))!=EOF){

        fputc(buffer^8,encrypt_fp);

    }

    printf("�ļ����ܳɹ�\n");

    fclose(encrypt_fp);
    fclose(normal_fp);


}

//�ļ�����
void decryptFile(){



    char *encrypt_path="test_encrypt.png";
    char *decrypt_path="test_decrypt.png";

    FILE *encrypt_fp=fopen(encrypt_path,"rb");

    if(encrypt_fp==NULL){
        printf("�ļ�������\n");
        return;
    }
    FILE *decrypt_fp=fopen(decrypt_path,"wb");



    int buffer;
    while((buffer=fgetc(encrypt_fp))!=EOF){

        fputc(buffer^8,decrypt_fp);

    }
    printf("�ļ����ܳɹ�\n");

    fclose(encrypt_fp);
    fclose(decrypt_fp);


}

//��ȡ�ļ���С
void getFileSize(){

    const char *path="test.png";
    FILE *fp=fopen(path,"r");
    if(fp==NULL){
         printf("�ļ�������\n");
        return;
    }

    //���¶�λ�ļ�ָ�룬SEEK_END�ļ�ĩβ,0���ļ���ƫ����
    fseek(fp,0,SEEK_END);
    //���ص�ǰ���ļ�ָ�룬������ļ���ͷ��λ����
    double fileSize=ftell(fp);

    printf("�ļ���С:%gM\n",fileSize/1024/1024.0);

}

//int main(){
//
//    readASCIIFile();
//    writeASCIIFile();
//    fileCopy();
//    encryptFile();
//    decryptFile();
//    getFileSize();
//    return 0;
//}
