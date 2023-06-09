#include<iostream>
using namespace std;

class Array
{
    private:
            int iSize;
            int *Arr;
            int iSearch;
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

         bool Search1(int iSearch)
          {
            cout<<"Inside Search1 Method"<<"\n";
            int iCnt = 0;
            bool bFlage = false;
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iSearch)
                {
                   bFlage = true;
                   break;
                }
            }
               return bFlage;
          }

};

int main()
{
    cout<<"Inside Main"<<"\n";
    int iNo1 = 0;
    int iValue = 0;
    bool bRet = false; 
    cout<<"Enter Size of Number of Elements"<<"\n";
    cin>>iNo1;
    Array Aobj(iNo1);

    Aobj.Accept();
    
    Aobj.Display();
   
   
    cout<<"Enter the element that you want to search "<<"\n";
              
  cin>>iValue;
   bRet   =  Aobj.Search1(iValue);
  if(bRet == true)
  {
     cout<<" Number  Present "<< iValue<<"\n";
  }
  else
  {
     cout<<" Number  NOT Present "<< iValue<<"\n";
  }
  
    cout<<"End Main.."<<"\n";
    return 0;
}

