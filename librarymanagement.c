#include<stdio.h>
int main()
{
    printf("-----------MAIN MENU--------------\n\n");
    printf("1. Add Books\n");
    printf("2. Display books information \n");
    printf("3. Search books(book ststua)\n");
    printf("4. EXIT \n\n");

    int a1;
    printf("Enter : ");
    scanf("%d",&a1);
    printf("\n\n");

    if(a1==1)
    {
        printf(" you can add book information\n\n");
        printf("choose the cateogry :\n\n");
        printf("1.compuer\n");
        printf("2.electronics\n");
        printf("3. mechnical\n\n");

    int a2;
        printf("choose a catogry :");
        scanf("%d",&a2);
        printf("\n\n");

        if(a2==1)
        {
            printf("you can choose computer category\n\n");
            printf("1. INTRODUCTION TO C\n");
            printf("2.FUNDAMENT DATA STRUCTURE\n");
            printf("3 INTRODUCTION OF PYTHON\n");

            int a3;
            printf("choose a book :");
            scanf("%d",&a3);
            printf("\n\n");

            if(a3==1)
            {
                printf("you choosen INTRODUCTION TO C book \n\n");
                char book_name[20];
                char author_name[50];
                int pages;
                int price;

                printf("BOOK NAME :");
                scanf("%s",&book_name);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_name);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pages);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",price);
                printf("\n\n");
            }
            else if (a3==2)
            {
               printf("FUNDAMENT DATA STRUCTURE \n\n");
                char book_namea[20];
                char author_namea[50];
                int pagesa;
                int pricea;

                printf("BOOK NAME :");
                scanf("%s",&book_namea);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_namea);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pagesa);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",pricea);
                printf("\n\n");
            }
            else if (a3==3)
            {
                 printf("INTRODUCTION OF PYTHON\n\n");
                char book_nameb[20];
                char author_nameb[50];
                int pagesb;
                int priceb;

                printf("BOOK NAME :");
                scanf("%s",&book_nameb);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_nameb);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pagesb);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",priceb);
                printf("\n\n");
            }
        }
        else if(a2==2)
        {
            ("YOU CHOSSEN ELECTRONICS\n\n");
            printf(" 1 . introduction of ectro\n");
            printf(" 2.the art of electronics\n");
            printf(" 3.fundamental of digitial circuit\n");

            int a4;
            printf("choose a book :");
            scanf("%d",&a4);
            printf("\n\n");

            if (a4==1)
            {
                printf("YOU HAVE CHOOSEN INTRODUCTION OF ELECTRO");
                char book_name[20];
                char author_name[50];
                int pages;
                int price;

                printf("BOOK NAME :");
                scanf("%s",&book_name);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_name);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pages);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",price);
                printf("\n\n");

            }
            else if (a4==2)
            {
                printf("fundamental of digitial circuit");
                char book_nameb[20];
                char author_nameb[50];
                int pagesb;
                int priceb;

                printf("BOOK NAME :");
                scanf("%s",&book_nameb);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_nameb);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pagesb);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",priceb);
                printf("\n\n");
            }
            else if(a4==3)
            {
              printf("YOU HAVE CHOOSEN the art of electronics");
                char book_namea[20];
                char author_namea[50];
                int pagesa;
                int pricea;

                printf("BOOK NAME :");
                scanf("%s",&book_namea);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_namea);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pagesa);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",pricea);
                printf("\n\n");  
            }
        }
        else if(a2==3)
        {
            printf ("YOU CHOSSEN mechanical\n\n");
            printf(" 1.introduction of mech\n");
            printf(" 2.the art of mechanical\n");
            printf(" 3.fundamental of mechanical\n");

            int a5;
            printf("choose a book :");
            scanf("%d",&a2);
            printf("\n\n");
             if (a5==1)
            {
                printf("YOU HAVE CHOOSEN INTRODUCTION OF mech");
                char book_name[20];
                char author_name[50];
                int pages;
                int price;

                printf("BOOK NAME :");
                scanf("%s",&book_name);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_name);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pages);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",price);
                printf("\n\n");

            }
            else if (a5==2)
            {
                printf("fundamental of mechanical");
                char book_nameb[20];
                char author_nameb[50];
                int pagesb;
                int priceb;

                printf("BOOK NAME :");
                scanf("%s",&book_nameb);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_nameb);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pagesb);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",priceb);
                printf("\n\n");
            }
            else if(a5==3)
            {
              printf("YOU HAVE CHOOSEN the art of mech");
                char book_namea[20];
                char author_namea[50];
                int pagesa;
                int pricea;

                printf("BOOK NAME :");
                scanf("%s",&book_namea);
                printf( "\n\n");

                printf(" AUTHOR NAME:");
                scanf("%s",&author_namea);
                printf("\n\n");

                printf("PAGES");
                scanf("%d",pagesa);
                printf("\n\n");

                printf("PRICES:");
                scanf("%d",pricea);
                printf("\n\n");  
            }

        }

    }   
    else if (a1==3)
    {
            printf("YOU CAN SEARCH A BOOK (book status)\n\n");
           
            printf("press the code :1 for introduction to c \n");
            printf("press the code :2 for FUNDAMENT DATA STRUCTURE \n");
            printf("press the code :3 for introduction of python \n");
            printf("press the code :4 for introduction of ectro\n");
            printf("press the code :5 the art of electronics \n");
            printf("press the code :6 for fundamental of digitial circuit \n");
            printf("press the code :7 for introduction of mech\n"); 
            printf("press the code :8 for the art of mechanical\n");
            printf("press the code :9 for fundamental of mechanical \n");
            int a6;
            printf(" YOU CAN SEARCH THE BOOK CHOSSE THE BCODE OF BOOK :");
            scanf("%d",&a6);
            printf("\n\n");

            switch (a6)
            {
            case 1:
            printf("book name : INTRODUCTION TO C\n\n");
            printf("coppies status : two copies left");
                break;

            case 2:
            printf("book name :FUNDAMENT DATA STRUCTURE\n\n");
            printf("coppies status : two copies left");
                break;

            case 3:
            printf("book name :introduction of python\n\n");
            printf("coppies status : two copies left");
                break;

            case 4:
            printf("book name :introduction of ectro\n\n");
            printf("coppies status : two copies left");
                break;

            case 5:
            printf("book name :the art of electrons\n\n");
            printf("coppies status : two copies left");
                break;

            
            case 6:
            printf("book name :for fundamental of digitial circuit\n\n");
            printf("coppies status : two copies left");
                break;

             case 7:
            printf("book name :introduction of mech\n\n");
            printf("coppies status : two copies left");
                break;

            case 8:
            printf("book name :the art of mechanical\n\n");
            printf("coppies status : two copies left");
                break;

            case 9:
            printf("book name :fundamental of mechanical \n\n");
            printf("coppies status : two copies left");
                break;
            

        }
    }
    else if (a1==4)
    {
                printf("THE LIBRARY IS CLOSED ");
                printf("HAVE A NICE DAY.....");
    }
        
}
