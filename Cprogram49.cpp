#include<iostream>
using namespace std;
#define ERR_NOTFOUND -1

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

       int Search1(int iSearch)
          {
            cout<<"Inside Search1 Method"<<"\n";
            int iCnt = 0;
            
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iSearch)
                {
                   break;
                }
            }

               if(iCnt == iSize)
               {
                  return ERR_NOTFOUND;
               }
               else
               {
                   return iCnt;
               }
          }
               

};

int main()
{
    cout<<"Inside Main"<<"\n";
    int iNo1 = 0;
    int iValue = 0;
     int iRet = false; 
    cout<<"Enter Size of Number of Elements"<<"\n";
    cin>>iNo1;
    Array Aobj(iNo1);

    Aobj.Accept();
    
    Aobj.Display();
   
   
    cout<<"Enter the element that you want to search "<<"\n";
              
   cin>>iValue;
  iRet   =  Aobj.Search1(iValue);
  if(iRet == ERR_NOTFOUND)
  {
     cout<<" There is no Number  Present "<< iValue<<"\n";
  }
  else
  {
     cout<<" Number Present "<< iValue<<"\n";
  }
  
    cout<<"End Main.."<<"\n";
    return 0;
}

