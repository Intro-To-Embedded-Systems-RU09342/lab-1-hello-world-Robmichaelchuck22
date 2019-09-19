#include <stdio.h>
int math(int num1, int num2, char op); //function definition so function can be called in main
int main()
{
    int num0;
    int num;
    char oper;
    int res;
    printf("Please enter a number:"); //user is prompted to enter a number
    scanf("%d", &num0);               //user inputs a number


    printf("Please enter another number:"); //user is prompted to enter another number
    scanf("%d", &num);                      //user inputs another number

    printf("Please enter an operator:"); //user is prompted to enter an operator
    scanf(" %c", &oper);                //user inputs an operator

    res = math(num0, num, oper);       //calls mathh function and sets it equal to res
    printf("Your Result is: %d", res); //prints out the result of desired calculation
    getchar();
    return 0;
}

int math(int num1, int num2, char op)
{
int result;
    switch(op)                          //performs the calculation specified by the desired operator
    {                                   //sets equal to integer result
        case '+':                       //when function is called it returns the value stored in result
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

         case '*':
        result = num1 * num2;
        break;

         case '/':
        result = (num1) / (num2);
        break;

         case '%':
        result = num1 % num2;
        break;

         case '&':
        result = num1 & num2;
        break;

         case '|':
        result = num1 | num2;
        break;

         case '^':
        result = num1 ^ num2;
        break;

         case '~':
        result = ~num1;
        break;
    }

    return result;

}
