/* Accept number from user and rever that number and return to user 
    i/p --> 751
    o/p --> 157
*/

#include <stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Entre number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    printf("Revese Digits are : %d\n", iRet);


    return 0;
}