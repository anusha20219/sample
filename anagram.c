Program to check the given arrays are equal or not
	
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char str1[20],str2[20];
	int len,len1,len2,i,j,found=0,not_found=0;
	printf("Enter first string :");
	gets(str1);
	printf("Enter second string :");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2)
	{
		len=len1;
		for(i=0;i<len;i++)
		{
			found=0;
			for(j=0;j<len;j++)
			{
				if(str1[i]==str2[j])
				{
					found=1;
					break;
				}
			}
			if(found==0)
			{
				not_found=1;
				break;
			}
		}
		if(not_found==1)
		{
			printf("Strings are not Anagram to each other");
		}
		else
		{
			printf("Strings are Anagram");
		}
	}
	else
	{
		printf("Two string must have same number of character to be Anagram");
	}
	getch();
}
