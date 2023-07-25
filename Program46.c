/* Accept number from user and count the number digits in that number 
   
    eg :- 751 --> i/p
          7     5    1  --> o/p

          Intput : 75
          Output : 7    5

          Input  : 7
          Output : 1

*/ 

#include <stdio.h>

int CountDigits(int iNo)
{
    // int iDigit = 0;
    int iCnt = 0;

    if(iNo == 0)    // Filter
    {
        return 1;
    }

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;      
    }

    while(iNo > 0)
    {
       // iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++; 
    }

    
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Entre number : \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d\n", iRet);


    return 0;
}