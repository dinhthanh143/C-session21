#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i;
char str[50];
FILE *fptr;
fptr= fopen("bt05.txt", "w");
int lines;
printf("moi nhap so dong: ");
scanf("%d", &lines);
for(i=1;i<=lines;i++){
	printf("moi nhap noi dung tung dong thu %d: ",i);
	fflush(stdin);
	fgets(str,sizeof(str),stdin);
	fputs(str, fptr);
}
fclose(fptr);
//in ra thong tin tung dong
printf("\n thong tin tung dong: \n");
fptr= fopen("bt05.txt", "r");
for(i=1;i<=lines;i++){
fgets(str,sizeof(str),fptr);
printf("%s", str);
}
fclose(fptr);
   return 0;
}

