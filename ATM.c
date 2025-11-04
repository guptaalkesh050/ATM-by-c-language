#include <stdio.h>


int main() { //void not return any data type 

  int totalamount=  0, amount, exit = 1;
  do {
    printf("\n welcome to ATM serivice----\n");
    printf("1. check balance\n2. withdraw cash\n3. deposit cash\n4. exit\n");
    int n;

    printf("enter the choice no: ");
    scanf("%d", &n);
    switch (n)
    {


    case 1:
      printf("your total balance is: %d\n", totalamount);
      break;


      case 2:
      printf("enter the amount to withdraw: ");
      scanf("%d", &amount);//500

      if (totalamount > amount) {

        totalamount = totalamount - amount; //500-200=300
    }  else {//200>500
      printf ("invalid amount\n");
    }    
    break;
    case 3:
    printf("Enter the amount to deposit: ");
    scanf("%d", &amount);
    totalamount = totalamount + amount;
    printf("total blanace = %d\n", totalamount);
    break;
    case 4:
    exit = 0;
    break;
    default : //if there is no case nmatch then default will exicute
      printf("choose the correct no\n");
    }
  } while (exit); //while(exit!=0)
  return 0;
}