//To display if one is ready to retire or to keep building the nation


#include<stdio.h>
int age;
int main()
{
    //user inputs age
    printf("Please enter your age.\n");
    scanf("%d",&age);
    if(age>=50)
    {
      //displays this if age is greater than or equal to 50
      printf("You are ready to retire.\n");
    }
    else
    {
      //displays this if age is less than 50
      printf("Keep building the nation.\n");
    }

    return 0;
}
