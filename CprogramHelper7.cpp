#include"CprogramHeader7.h" 
class Number
{
   private:
         int iNo1;
         int iNo2;
   public:
         Number(int X,int Y)
         {
            iNo1 = X;
            iNo2 = Y;
         }   
         int Addition()
         {
            int Ans = 0;
            Ans = iNo1 + iNo2;
            return Ans;
         }   

};