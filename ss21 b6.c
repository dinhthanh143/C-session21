#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i=0;
char str[100];
char a;
FILE *fptr,*fptr2;
fptr= fopen("bt01.txt", "r");
if(fptr==NULL){
	printf("file loi");
	return 1;
}
while(a!= EOF){
	a=fgetc(fptr);
	str[i]=a;
	i++;
}
fclose(fptr);
//sao chep vao file bt06
fptr2= fopen("bt06.txt", "w");
if(fptr2==NULL){
	printf("file loi");
	return 1;
}
fputs(str, fptr2);
fclose(fptr2);
//test in ra phan da copy
char test[100];
fptr2= fopen("bt06.txt", "r");
if(fptr2==NULL){
	printf("file loi");
	return 1;
}
fgets(test,sizeof(test),fptr2);
printf("%s", test);
fclose(fptr2);
   return 0;
}

