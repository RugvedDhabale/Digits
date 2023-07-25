/* Accept number from user and show its summation of its digits */

#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;      
    }

    while(iNo > 0)
    {
       iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }

    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Entre number : \n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);
    printf("Summation is : %d\n", iRet);


    return 0;
}