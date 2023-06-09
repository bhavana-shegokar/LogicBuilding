/*
    Input : 

    Row : 6
    Col : 6

   Output : 
    *   a   a   a   a   a
    b   *   b   b   b   b
    c   c   *   c   c   c
    d   d   d   *   d   d   
    e   e   e   e   *   e
    f   f   f   f   f   *              
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
            char ch = '\0';
            
            for(i = 1 ,ch = 'a';i <= iRow ; i++,ch++)
            {
                for(j = 1 ;j <= iCol ; j++)
                {
                    if(i == j)
                    {
                        cout<<"*"<<"\t";

                    }
                    else
                    {
                        cout<<ch<<"\t";
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