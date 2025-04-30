#include<stdio.h>
int main () 
{
  int marks;
  printf("enter the marks \t:");
  scanf("%d",& marks);
  if (marks >= 90)
  {
     printf("Ex");
  }
  else if (marks >= 80) 
  {
     printf("A");
  }
  else if (marks >= 70) 
  {
     printf("B");
  }
  else if (marks >= 60) 
  {
     printf("C");
  }
  else if (marks >= 50) 
  {
     printf("D");
  }
  else if (marks >= 40) 
  {
     printf("E");
  }
  else if (marks < 40) 
  {
     printf("Fail");
  }
  else
  {
     printf("Individual marks");
  }
  return 0;
}