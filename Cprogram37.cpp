#include<iostream>
using namespace std;

class Array
{
    private:
            int iSize;
            int *Arr;
    public:
          Array(int X)
          {
            cout<<"Inside Constructor"<<"\n";
            iSize = X;
            Arr = new int[iSize];
          }    
          ~Array()
          {
             cout<<"Inside Destructor"<<"\n";
             delete [] Arr;
          }   

          void Accept()
          {
            cout<<"Inside Accept Method"<<"\n";
            cout<<"Enter the Elements :"<<"\n";
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                 cin>>Arr[iCnt];
            }
          }  
          void Display()
          {
            cout<<"Inside Display Method"<<"\n";
            cout<<"Elements of Array Are :"<<"\n";
            int iCnt = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                 cout<<Arr[iCnt]<<"\n";
            }
          }  

          int Addition()
          {
            cout<<"Inside Addition Method"<<"\n";
            int iCnt = 0;
            int iSum = 0;
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
          }  
          

};

int main()
{
    cout<<"Inside Main"<<"\n";
    int iNo = 0;
    int iRet = 0; 

    cout<<"Enter Size of Number of Elements"<<"\n";
    cin>>iNo;

    Array Aobj(iNo);
    Aobj.Accept();
    Aobj.Display();

    iRet = Aobj. Addition();

    cout<<"Addition is :"<<iRet<<"\n";
    cout<<"End Main.."<<"\n";
    return 0;
}
