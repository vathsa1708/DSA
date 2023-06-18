class Solution {
public:
    int distanceTraveled(int mainTank, int add) {
      int count = mainTank/5;
      while(count>0 and add>0)
      {
          mainTank +=1;
          if(mainTank%5 ==0)
          {
          
          }
          else
          count--;
          add--;
      }
      return mainTank*10;
    }
};
