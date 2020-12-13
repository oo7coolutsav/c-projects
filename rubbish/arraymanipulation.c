#include<stdio.h>
#include<stdlib.h>
int a[50];
int n;
void create_array();
void insertinbeg();
void insertinend();
void insertinbtw();
void delinbeg();
void delinend();
void delinbtw();
void end();
int main(void)
{
 int choice;
 printf("*Program to manipulate Array*\n");
 while(1)
 {
  printf("\n\t1. Create an Array\n\t2. Insert in Begining\n\t3. Insert in end\n\t4. Insert in Between\n\t5. Deletion in Begining\n\t6. Deletion in End\n\t7. Deleation in Between\n\t8. EXIT\n");
  printf("\nEnter Your choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
	case 1: create_array();
	break;
	case 2: insertinbeg();
	break;
	case 3: insertinend();
	break;
	case 4: insertinbtw();
	break;
	case 5: delinbeg();
	break;
	case 6: delinend();
	break;
	case 7: delinbtw();
	break;
	case 8: end();
	break;
	default : printf("You've entered wrong choice ...!\n Please Re-enter valid choice.\n");
  }
 }
 return 0;
}
void end()
{
exit(0);
}
void create_array()
{ int i;
  printf("Enter the no. of elements: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Entered Elements are: ");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
void insertinbeg()
{
 int ele,i;
 printf("Enter the elements to be inserted: ");
 scanf("%d",&ele);
 for(i=n;i>=0;i--)
 a[i+1]=a[i];
 a[0]=ele;
 n++;
 printf("Updated Array is: ");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
}
void insertinend()
{ int ele,i;
  printf("Enter the elements to be inserted: ");
  scanf("%d",&ele);
  a[n]=ele;
  n++;
  printf("Updated Array is: ");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
void insertinbtw()
{
 int ele,pos,i;
 printf("Enter the elements to be inserted: ");
 scanf("%d",&ele);
 printf("Enter the position to be inserted: ");
 scanf("%d",&pos);
 for(i=n;i>=pos;i--)
{ a[i]=a[i-1];   }
 a[pos]=ele;
 n++;
 printf("Updated Array is: ");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
}
void delinbtw()
{ int pos,i;
  printf("Enter the position to be deleated");
  scanf("%d",&pos);
  for(i=pos;i<n;i++)
  a[i]=a[i+1];
  n--;
  printf("Updated Array is: ");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
void delinbeg()
{ int i;
  for(i=0;i<n-1;i++)
  a[i]=a[i+1];
  n--;
  printf("Updated Array is: ");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
void delinend()
{ int i;
  n--;
  printf("Updated array is: ");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}
