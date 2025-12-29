#include <cs50.h>
#include <stdio.h>

int main()
{
    int password_priv = get_int("please set your pass kay: 0000\n");
    int balance = 100000;
    int x = 0;

    while (x < 3)

    {

        int password = get_int("enter your password: \n");

        if (password != password_priv)
        {
            printf("password is wrong \n");
            x++;
        }


        else if (password == password_priv)
        {
            while (true)
            {
                printf("1-look balance  \n");
                printf("2-give cash $\n");
                printf("3-deposit \n");
                printf("4-end \n");

                int choose = get_int("what is your opration : \n");

                if (choose == 1)
                {
                    printf("your balance is :%i\n ",balance);

                }
                else if (choose == 2)
                {
                    printf("give cash $ \n");

                    int cash = get_int("please enter your cash: \n");

                    if(cash > balance)
                    {
                        printf("input cash is not  available.\n");
                    }
                    else if (cash == 0)
                    {
                        printf("input cash is not  available.\n");
                    }
                    else
                    {
                        printf("is done \n");
                        balance -= cash;
                    }


                }
                else if (choose == 3 )
                {
                    printf("money transfer \n");
                    int transfer = get_int("please enter money transfer: \n ");
                    if (transfer > balance)
                    {
                        printf("value not available \n");
                    }
                    else if (transfer == 0)
                    {
                        printf("value not available \n");
                    }
                    else
                    {
                        printf("transfer is done.💸 \n");
                        balance += transfer;
                    }
                }
                else if (choose == 4)
                {
                    printf("<have a good day.💕> \n");
                    break;
                }
                else
                {
                    printf("invalid choice😱 \n");
                }
            }
            break;
        }
    }

    if (x == 3)
    {
        printf("your CARD is blocked💀 \n");
    }
}
