#include<stdio.h>
int main(){
    float feet_to_inch=12 ,inch_to_cm=2.54 ,cm_to_mm=10, m_to_mm=1000 ;     //Length
    float pound_to_kg=0.453592 ,tonne_to_kg=1000,g_to_pound=0.00220462,kg_to_ounce=35.274;      //Weight
    float first_unit,second_unit;
    int con_no; //index variable
    char unit;  //variable to store unit type
    while(1){                       //loop will run till q is not entered
        printf("\n\n[[[[[[[[[[[[[[[[[[[[CONVERSION PROGRAM]]]]]]]]]]]]]]]]]]]\n\n");
        there:
        printf("Enter q to quit \n     OR\n");
        printf("Enter unit type according to chart given below ::::\n");
        printf("1. 'l, for length\n2. 'w' for weight\n\n");
        scanf("%c",&unit);
        if(unit=='Q'||unit=='q'){
            printf("\nExiting.................................\n");
            return 0;
        }
        if(unit=='l'||unit=='L'){
            //Case for length
                printf("Enter conversion number from chart given below : ");
                printf("\n1. feet to inch\n2. inch to cm\n3. cm to mm\n4. m to mm\n\n");
                scanf("%d",&con_no);
                if(con_no==1){
                    printf("Enter value in feet : ");
                    scanf("%f",&first_unit);
                    second_unit=first_unit*feet_to_inch;
                    printf("%.2f feet = %.2f inch\n\n",first_unit,second_unit);
                    goto there;
                }
                if(con_no==2){
                    printf("Enter value in inch : ");
                    scanf("%f",&first_unit);
                    second_unit=first_unit*inch_to_cm;
                    printf("%.2f inch = %.2f cm\n\n",first_unit,second_unit);
                    goto there;
                }
                if(con_no==3){
                    printf("Enter value in cm : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*cm_to_mm;
                        printf("%.2f cm = %.2f mm\n\n",first_unit,second_unit);
                        goto there;
                }
                if(con_no==4){
                    printf("Enter value in m : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*m_to_mm;
                        printf("%.2f m = %.2f mm\n\n",first_unit,second_unit);
                        goto there;
                }
                else{
                    printf("\nyou pressed wrong key press right key again \n");
                    goto there;
                }
        }
        else{
            printf("\nmain wrong key trying again\n");
            goto there;
        }
    }
return 0;
}
