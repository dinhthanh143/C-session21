#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
FILE *fptr;
fptr= fopen("bt01.txt", "w");
if(fptr==NULL){
	printf("file loi");
	return 1;
}
char str[100];
printf("moi nhap chuoi: ");
fgets(str,sizeof(str),stdin);
fputs(str, fptr);

fclose(fptr);
//lay ki tu dau tien
int word;
fptr= fopen("bt01.txt", "r");
if(fptr==NULL){
	printf("file loi");
	return 1;
}
word=fgetc(fptr);
printf("%c", word);

fclose(fptr);
   return 0;
}

