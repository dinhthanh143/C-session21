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
   return 0;
}

