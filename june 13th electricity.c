#include <stdio.h>
int main()
{
int Units;
float Amount, Sur_Charge, Total_Amount;
  printf("\n Please Enter the Units that you Consumed  :  ");
  scanf("%d", &Units);
        if (Units > 500)
  {
  Amount = Units * 9.65;
  Sur_Charge = 85;  
  }  
  else if (Units >= 300)
  {
  Amount = Units * 7.75;
  Sur_Charge = 75;
  }
  else if (Units >= 200)
  {
  Amount = Units * 5.26;
  Sur_Charge = 55;
  }  
  else if (Units >= 100)
  {
  Amount = Units * 3.76;
  Sur_Charge = 35;
  }    
  else
  {
  Amount = Units * 2.25;
  Sur_Charge = 25;
}

Total_Amount = Amount + Sur_Charge;
printf("\n Electricity Bill  =  %.2f", Total_Amount);
return 0;
}

