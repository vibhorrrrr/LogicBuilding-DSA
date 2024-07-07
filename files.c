#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Buffer[100]={'\0'};
    int iRet = 0;
    int i = 0, iCount = 0;
    char ch = '\0'

    printf("Enter the file name that you want to create: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open the file\n");

