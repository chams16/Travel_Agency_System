#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>


void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}




void close(void)
{
    printf("\n\n\n\nThis C Mini Project is developed by: \n\n\t Bahri Chams Eddine\n\n");

}

void menu1()
{
    printf("\n\n\n\n\t\t\t\t   \xB2\xB2\xB2\xB2 Espace Utilisateur \xB2\xB2\xB2\xB2");
}
void ogr(){printf("choix1");}
void gf(){printf("choix2");}
void sp(){printf("choix3");}
void gvh(){printf("choix4");}
void ge(){printf("choix5");}
void lv(){printf("choix6");}
void feed_back(){printf("choix7");}

void menu2()
{
    int c;


    printf("\n\n\n\n\t\t\t\t   \xB2\xB2\xB2\xB2 Espace Agent \xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t1. Organisation et Gestion des reservations\n\n\t\t\t\t2. Gestion des factures\n\n\t\t\t\t3. Systeme de payment\n\n\t\t\t\t4. Gestion des vols et hebergement\n\n\t\t\t\t5. Organisations des excursions\n\n\t\t\t\t6. Locations des voitures\n\n\t\t\t\t7. Repondre aux reclamations\n\n\t\t\t\t8. Exit\n\n\n\n\t\t\t\t  Entrer Votre Choix : ");
    scanf("%d",&c);

    system("cls");
    switch(c)
    {
        case 1:ogr();
        break;
        case 2:gf();
        break;
        case 3:sp();
        break;
        case 4:gvh();
        break;
        case 5:ge();
        break;
        case 6:lv();
        break;
        case 7:feed_back();
        break;
        case 8:close();
        break;
    }


}
void utilisateur()
{
        char pass[15],password[15]="bahrichams";
        int k,i;

    printf("\n\n\n\n\t\t\t\t   \xB2\xB2\xB2\xB2 Espace Utilisateur \xB2\xB2\xB2\xB2");

    printf("\n\n\n\t\t Enter the password to login to your account:  ");
    scanf("%s",pass);

    if (strcmp(pass,password)==0)
    {
        printf("\n\n\t\t\t\t  Password Correct \n\n\t\t\t\t  Loading");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        system("cls");
        menu1();
    }
    else
    {
        printf("\n\n\t\t\t\t  Wrong Password \n\n\t\t\t\t");
        login_try:
        printf("\n\n\t\t\t\t press: \n\n\t\t\t\t 1.Try Again \n\n\t\t\t\t 2.Go To Main Menu \n\n\t\t\t\t 0.Exit \n\n\t\t\t\t  Enter your choice: ");
        scanf("%d",&k);

        if(k==1)
        {
            system("cls");
            utilisateur();
        }
        else if(k==2)
        {
            system("cls");
            menu();
        }
        else if(k==0)
        {
            system("cls");
            close();
        }
        else
        {
            printf("\n\n\t\t\t\t Entrer Invalid ");
            goto login_try;
        }
    }

}
void agent()
{
        char log[10],mot[10]="admin";
        int p,i;

        printf("\n\n\n\n\t\t\t\t   \xB2\xB2\xB2\xB2 Espace Agent \xB2\xB2\xB2\xB2");
        printf("\n\n\n\t\t Enter your login to access to yoour account : ");
        scanf("%s",log);

        if (strcmp(log,mot)==0)
        {
            printf("\n\n\t\t\t\t  Login accepted \n\n\t\t\t\t  Loading");
            for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
            system("cls");
            menu2();

        }
        else
        {
            printf("\n\n\t\t\t\t  Login refused ");
            again:
                printf("\n\n\n\t\t\t press\n\n\t\t\t   1. Try Again\n\n\t\t\t   0. Exit\n\n\n\t\t\t\t\t Entrer votre choix :  ");
                scanf("%d",&p);

                if (p==1)
                {
                    system("cls");
                    agent();
                }
                else if(p==0)
                {
                    system("cls");
                    close();
                }
                else
                   {
                       system("cls");
                     printf("\n\n\t\t\t Entrer Invalid repeter le choix ");
                     goto again;
                   }


        }

}

void client()
{
    printf("espace client");
}
void administration()
{
    printf("espace administration");
}

void menu(void)
{
    int choice,press;
    system("cls");
    system("color 84");
    printf("\n\n\n\n\t\t\t\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2 TRAVEL AGENCY MANAGEMENT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\t\t\t\t\t\t1.Utilisateur\n\n\t\t\t\t\t\t2.Agent\n\n\t\t\t\t\t\t3.Client\n\n\t\t\t\t\t\t4.Administration\n\n\t\t\t\t\t\t5.Exit\n\n\n\n\n\n\t\t\t\t\t\t  Enter your choice: ");
    scanf("%d",&choice);

    system("cls");
    switch(choice)
    {
        case 1:utilisateur();
        break;
        case 2:agent();
        break;
        case 3:client();
        break;
        case 4:administration();
        break;
        case 5:close();
        break;
        default:
        printf("\n\n\t\tEntrer invalid \n\n\t\tpress:\n\n\t\t\t 1 .if you want go back to main menu \n\n\t\t\t 2 .if you want exit ");
        scanf("%d",&press);


        system("cls");
        switch(press)
        {
            case 1:menu();
            break;
            case 2:close();
            break;
        }

    }



}

int main()
{
    menu();
    return 0;
}
