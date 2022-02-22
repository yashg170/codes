class Solution {
public:
    int addDigits(int num) {
       do{
         int  x=num%10;
          int  y=(num-x)/10;
           num=x+y;
           
       }while(num/10!=0);
return num;
    }
};