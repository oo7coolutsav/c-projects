#include<stdio.h>
void main()
{
    char a[100],i,j,k;
    printf("Enter a sentence:");
    gets(a);
    if(a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='u')
    {
	for(k=0;a[k]!=' ';k++)
	printf("%c",a[k]);
	printf(" ");
    }
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==' ')
      {
	 if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='o'||a[i+1]=='i'||a[i+1]=='u')
	 {
	    for(j=i+1;a[j]!=' ';j++)
	    printf("%c",a[j]);
	 }
      } else continue;
      printf(" ");
    }
}
