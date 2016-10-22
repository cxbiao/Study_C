#include <stdio.h>
#include <stdlib.h>

/**

mode有下列几种形态字符串:

r 打开只读文件，该文件必须存在。

r+ 打开可读写的文件，该文件必须存在。

w 打开只写文件，若文件存在则文件长度清为0，即该文件内容会消失。若文件不存在则建立该文件。

w+ 打开可读写文件，若文件存在则文件长度清为零，即该文件内容会消失。若文件不存在则建立该文件。

a 以附加的方式打开只写文件。若文件不存在，则会建立该文件，如果文件存在，写入的数据会被加到文件尾，即文件原先的内容会被保留。

a+ 以附加方式打开可读写的文件。若文件不存在，则会建立该文件，如果文件存在，写入的数据会被加到文件尾后，即文件原先的内容会被保留。
*/

//读取纯字符文件
void readASCIIFile(){


    //以读方式打开文件
    FILE *f=fopen("wow.txt","r");
    if(f==NULL){
        printf("打开文件失败\n");
        return;
    }
    char buffer[1024];

    while(fgets(buffer,1024,f)){
        printf("%s\n\n",buffer);
    }
    //关闭文件流
    fclose(f);


}



//写字符到文件
void writeASCIIFile(){
    FILE *f=fopen("wowW.txt","w");
    if(f==NULL){
        printf("打开文件失败\n");
        return;
    }
    fputs("诛仙青云志第一部要结束了。\n",f);
    fputs("碧瑶挡下诛仙剑，身死。张小凡变鬼厉!",f);
    fclose(f);



}


//读写二进制文件
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
异或加密
4的二进制是：0100
5的二进制是：0101
异或运算结果（加密）：4 ^ 5  == 0001
异或运算结果（解密）： 0001 ^ 0101 == 0100
由上述可见 ， ^一次为加密 ， 再^一次就是解密
*/


//加密文件
void encryptFile(){


    char *normal_path="test.png";
    char *encrypt_path="test_encrypt.png";

    FILE *normal_fp=fopen(normal_path,"rb");
    if(normal_fp==NULL){
        printf("文件不存在\n");
        return;
    }
    FILE *encrypt_fp=fopen(encrypt_path,"wb");


    int buffer=0;
    //fgetc读取一个字节，fputc写入一个字节
    while((buffer=fgetc(normal_fp))!=EOF){

        fputc(buffer^8,encrypt_fp);

    }

    printf("文件加密成功\n");

    fclose(encrypt_fp);
    fclose(normal_fp);


}

//文件解密
void decryptFile(){



    char *encrypt_path="test_encrypt.png";
    char *decrypt_path="test_decrypt.png";

    FILE *encrypt_fp=fopen(encrypt_path,"rb");

    if(encrypt_fp==NULL){
        printf("文件不存在\n");
        return;
    }
    FILE *decrypt_fp=fopen(decrypt_path,"wb");



    int buffer;
    while((buffer=fgetc(encrypt_fp))!=EOF){

        fputc(buffer^8,decrypt_fp);

    }
    printf("文件解密成功\n");

    fclose(encrypt_fp);
    fclose(decrypt_fp);


}

//获取文件大小
void getFileSize(){

    const char *path="test.png";
    FILE *fp=fopen(path,"r");
    if(fp==NULL){
         printf("文件不存在\n");
        return;
    }

    //重新定位文件指针，SEEK_END文件末尾,0是文件的偏移量
    fseek(fp,0,SEEK_END);
    //返回当前的文件指针，相对于文件开头的位移量
    double fileSize=ftell(fp);

    printf("文件大小:%gM\n",fileSize/1024/1024.0);

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
