// check number Amstrong or not

#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iTemp = 0,iMult = 1;
    int iDigCnt = 0,iDigit = 0,iSum = 0;
    int iCnt = 0;

   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iTemp = iNo;

    //calculate number of Digits

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
        
        
        
    }
    iNo = iTemp;

    while (iNo !=0 )
    {
        iMult = 1;
        iDigit = iNo % 10;

        for(iCnt = 1; iCnt <= iDigCnt ;iCnt++)
        {
            iMult = iMult *  iDigit;  
        }

        iSum = iSum + iMult;

        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = 0;

    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);
    if(bRet == true)
    {
        printf("%d is a armstrong number\n",iValue);
    }
    else
    {
         printf("%d is not  armstrong number\n",iValue);
    }

    return 0;
}