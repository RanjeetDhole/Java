//Array
#include<stdio.h>

void Display(int ptr[])
{
   int iCnt = 0;
   printf("Element of Array are: \n");

  for(iCnt = 0; iCnt < 5; iCnt++)
   {
       printf("%d\n",ptr[iCnt]);
    
   }
}

int main()
{
     auto int Arr[5];
    register int iCnt = 0;

    printf("Enter element: \n");

    for(iCnt = 0; iCnt<5 ;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr);   //Display(100);

    return 0;
}