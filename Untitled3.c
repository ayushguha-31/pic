#include<stdio.h>
int main()
{
    int ch,a,b,c,ch1;



    printf("Choose one operation\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    printf("Enter two numbers\n0\");
    scanf("%d%d",&a,&b);
    if (ch==1)
    {
        c=a+b;
    }
    else
    {
        if (ch==2)
        {
            c=a-b;
        }
        else
        {
            if (ch==3)
            {
                c=a*b;
            }
            else {
                if (ch==4)
                {
                    if (b==0)
                    {
                        printf("Can't divide by zero");
                    }
                    else
                    {
                        c=a/b;

                    }
                }
                else
                {
                    printf("invalid entry");
                }
            }
        }
    }
    if (ch<5)
    {
        printf("THe ANSWER IS %d",c);
    }

    }
