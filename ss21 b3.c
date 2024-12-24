#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
FILE *fptr;
fptr= fopen("bt01.txt", "w");
char str[100];
printf("moi nhap chuoi: ");
fgets(str,sizeof(str),stdin);
fputs(str, fptr);
fclose(fptr);
//ghi them du lieu vao file

fptr= fopen("bt01.txt", "a");
printf("moi nhap them chuoi: ");
fgets(str,sizeof(str),stdin);
fputs(str, fptr);
fclose(fptr);
   return 0;
}

