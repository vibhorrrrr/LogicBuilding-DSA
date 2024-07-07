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
        return 0;
    }
    printf("Enter the character that you want to search: \n");
    scanf(" %c", &ch);
    while((iRet = read(fd,Buffer,sizeof(Buffer))) !=0)
    {
        for(i=0; i<iRet; i++)
        {
            if(Buffer[i]==ch)
            {
                iCount++
            }
        }
    }
    printf("Number of occurance of character: %d\n", iCount);
    close(fd);
    
    return 0;
}

// total size: 672 bytes
// 1: 100       574
// 2: 100       472
// 3: 100       372
// 4: 100       272
// 5: 100       172
// 6: 100       72
// 7: 72        0
// 8: 0


