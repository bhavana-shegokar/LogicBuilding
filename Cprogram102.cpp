/*
    
    Input : 

    Row : 4
    Col : 4

    Output : 
    *   *   *   #
    *   *   #   *
    *   #   *   *
    #   *   *   * 
               
*/  

#include<iostream>
using namespace std;

class Pattern
{
  
  private:
         int iRow;
         int iCol;
  public:
        Pattern(int X,int Y)
        {
            iRow = X;
            iCol = Y;
        }  
        void Display()
        {
            int i = 0;
            int j = 0;
            
            
            for(i = iRow ;i >=1 ; i--)
            {
                for(j = 1 ;j <= iCol ; j++)
                {
                    if(i == j)
                    {
                        cout<<"#"<<"\t";

                    }
                   else
                   {
                       cout<<"*"<<"\t";
                   }
                     
                }
                 
                 cout<<"\n";
                 cout<<"\n";
            }
               

        }     
};
int main()
{
      int iNo1 = 0;
      int iNo2 = 0;

      cout<<"Enter number of rows : "<<"\n";
      cin>>iNo1;

      cout<<"Enter number of columns : "<<"\n";
      cin>>iNo2;
     
     Pattern Pobj(iNo1,iNo2);
     
     Pobj.Display();
   
    return 0;
}