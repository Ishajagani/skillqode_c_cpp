#include<stdio.h>
int main()
{
	FILE *fp;
	char str[255];
	//fp=fopen("c:/Users/SQW014/Desktop/lib/skill.text", "w+);
	fp=fopen("file1.txt","r");
	while (fscanf(fp,"%s",str)!=EOF){
		printf("%s",str);
	}
	//fprintf(fp,"ok ok welcome to skill qode for decode your skill\n");
	//fputs("you are entering to learn c language now...\n",fp);
	fclose(fp);
}
/*
r	opens a text file in read mode
w	opens a text file in write mode
a	opens a text file in append mode

*/