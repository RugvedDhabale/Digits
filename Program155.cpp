/* Frequently asked question in interview */

#include <iostream>
using namespace std;

class DigitX 
{
    public : 
        int iNo; 
        
        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }
        void MaxFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }

            int iMaxFrquency = 0; 
            int iMaxDigit = 0;

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > iMaxFrquency)
                {
                   iMaxFrquency = Frequency[iCnt];
                   iMaxDigit = iCnt;
                }
            }
            cout << "Maximum times occured digit is " << iMaxDigit << " and its frquency is " << iMaxFrquency << "\n";
        }

};

int main()
{
    int iValue = 0; 
    int iRet = 0; 

    cout << "Please Entre number : " << "\n";
    cin >> iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();


    return 0;
}