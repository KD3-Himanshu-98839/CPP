#include<stdio.h>

struct Date{
    int day;
    int month;
    int year; 

};

void initDate(struct Date* ptrDate){
   ptrDate->day = 1;
   ptrDate-> month =1;
   ptrDate-> year =2000;

}
void AcceptDateFromConsole(struct Date* ptrDate){
    printf("Enter Day: \n");
    scanf("%d",&ptrDate->day);
    printf("Enter Month: \n");
    scanf("%d",&ptrDate->month);
    printf("Enter Year: \n");
    scanf("%d",&ptrDate->year);

}
void PrintDateFromConsole(struct Date* ptrDate){
    // printf("Day: %d\n",ptrDate->day);
    // printf("Month: %d\n",ptrDate->month);
    // printf("Year: %d\n",ptrDate->year);

    printf("Date is: %d/%d/%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
    

}



int menuList( void )
{
    int choice; 
    
    printf("1.Set the Date \n"); 
    printf("2.Display Date \n");
    printf("0.Exit\n");
    printf("Enter the choice : "); 
    scanf("%d",&choice); 
    return choice; 
}
int main()
{
    struct Date dt; 
    int choice; 
    while((choice = menuList( ))!=0)
    {
        switch (choice)
        {
        case 1: 
            AcceptDateFromConsole(&dt); 
            break;
        case 2: 
            PrintDateFromConsole(&dt); 
            break; 
        }
    }
    return 0;
} 