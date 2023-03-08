// Write a C program to copy the contents of a student.txt file into another file called info.txt -- BCA(Tribhuvan University)--2021
#include<stdio.h>

int main()
{

    FILE *fptr1 = fopen("student.txt","r");
    FILE *fptr2 = fopen("info.txt","w");
    char ch;  

    if(fptr1 == NULL)
    {
        printf("Failed to read 'student.txt'.");
        return -1;
    }else if(fptr2 == NULL)
    {
        printf("Failed to write 'info.txt'.");
        return -1;
    }else{

    while((ch=fgetc(fptr1))!=EOF)
    {
        fputc(ch,fptr2);  
    }

    fclose(fptr1);
    fclose(fptr2);

    }




    return 0;
}