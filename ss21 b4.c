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
//doc dong dau tien 
char firstLine[50];
fptr= fopen("bt01.txt", "r");
fgets(firstLine,sizeof(firstLine),fptr);
printf("%s", firstLine);

fclose(fptr);
   return 0;
}

