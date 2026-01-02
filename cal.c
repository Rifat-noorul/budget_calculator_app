#include<stdio.h>
#define p 19500
int main(){
int days,people,a,b,c,m,n,o,q,r,x,y,z;
do{ printf("              Budget Calculator \n");
    printf("         Welcome to Jammu & Kashmir\n");
    printf("                                 By Rifat N");
    printf("\n");printf("\n");
    printf("______________________________________________\n");printf("\n");
     do{ printf("No of Travelers(Passenger) 1-50 : ");
         scanf("%d",&people);printf("\n");
         if(people<=0){printf("Invalid Input! Enter atleast 1 person\n\n");}
       }while(people<=0);
     do{ printf("No of Days(Duration) 1 - 50 : ");
         scanf("%d",&days);printf("\n");
         if(days<=0){printf("Invalid Input! Enter atleast 1 Day\n\n");}
       }while(days<=0);
    printf("______________________________________________\n");printf("\n");
     do{ printf("Mode of Transport:\n");
         printf("1 for Volvo Bus : (4000)\n");
         printf("2 for Train : (2500)\n");
         printf("3 for Flight : (10000)\n");printf("\n");
         printf("Enter number for Mode of Transport 1 - 3 : ");printf("\n");
         scanf("%d",&x);
         if(x<=0 || x>3){printf("Invalid Input! Enter 1 - 3\n\n");}
       }while(x<=0 || x>3);
    switch(x)
    {case 1:
        {a = 4000;
            break;}
        case 2:
        {a = 2500;
            break;}
        case 3:
        {a = 10000;
            break;}}
    m = people*a;
    printf("______________________________________________\n");printf("\n");
     do{ printf("Room Availability (Per Person/Night) : \n");
         printf("1 for 2-star Hotel : (1500)\n");
         printf("2 for 3-star Hotel : (3000)\n");
         printf("3 for 5-star Hotel : (7000)\n");printf("\n");
         printf("Enter number for Room Allocation 1 - 3 : ");printf("\n");
         scanf("%d",&y);
        if(y<=0 || y>3){printf("Invalid Input! Enter 1 - 3\n\n");}
       }while(y<=0 || y>3);
    switch(y)
    {case 1:
        {b = 1500;
            break;}
        case 2:
        {b = 3000;
            break;}
        case 3:
        {b = 7000;
            break;}}
    n = people * days * b;
    printf("______________________________________________\n");printf("\n");
     do{ printf("Food Preference : \n");
         printf("1 for Only Veg : (1000) Per Day\n");
         printf("2 for Dhaba : (2000) Per Day\n");
         printf("3 for Veg & Non Veg : (2750) Per Day\n");printf("\n");
         printf("Enter number for Food Preference 1 - 3 : ");printf("\n");
         scanf("%d",&z);
         if(z<=0 || z>3){printf("Invalid Input! Enter 1 - 3\n\n");}
       }while(z<=0 || z>3);
    switch(z)
    {case 1:
        {c = 1000;
            break;}
        case 2:
        {c = 2000;
            break;}
        case 3:
        {c = 2750;
            break;}}
    o = people * days * c; 
    r = m + n + o + p;
    printf("______________________________________________\n");printf("\n");
    printf("Amount for Transport : Rs. %d\n",m);
    printf("Amount for Hotel : Rs. %d\n",n);
    printf("Amount for Food : Rs. %d\n",o);
    printf("Est Local Travel Expanses : Rs. %d",p);
    printf("\n______________________________________________\n");printf("\n");
    printf("Total Estimated Amount : %d",r);printf("\n");
    printf("Amount Per Person : %d\n",(r/people));
    printf("______________________________________________\n");printf("\n");
    printf("Thank You");printf("\n");
    printf("______________________________________________\n");
    printf("\nDo you want to create one more? (1 for YES / 0 for EXIT) : ");
    scanf("%d", &q);
    printf("\n");printf("Thank You");}
    while(q == 1);
    return 0;
}
