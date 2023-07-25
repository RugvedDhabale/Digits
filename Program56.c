/* Accept number from user and return the largest digit within it */

#include <stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        if(iMax == 9)
        {
            break;
        }
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please Entre number : \n");
    scanf("%d", &iValue);

    iRet = MaxDigit(iValue);
    printf("Largest digit is : %d\n", iRet);

    return 0;
}