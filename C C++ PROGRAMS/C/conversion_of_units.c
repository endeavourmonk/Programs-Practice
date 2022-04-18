#include<stdio.h>
int main(){
    float feet_to_inch=12 ,inch_to_cm=2.54 ,cm_to_mm=10, m_to_mm=1000 ;     //Length
    float pound_to_kg=0.453592 ,tonne_to_kg=1000,g_to_pound=0.00220462,kg_to_ounce=35.274;      //Weight
    float first_unit,second_unit;
    int con_no; //index variable
    char unit;  //variable to store unit type
    while(1){                       //loop will run till q is not entered
        up:
        printf("\n\n[[[[[[[[[[[[[[[[[[[[CONVERSION PROGRAM]]]]]]]]]]]]]]]]]]]\n\n");
        printf("Enter q to quit \n     OR\n");
        printf("Enter unit type according to chart given below ::::\n");
        printf("1. 'l, for length\n2. 'w' for weight\n\n");
        scanf("%c",&unit);
        switch (unit){
        case 'q':
            printf("|||||||||||||||||||||||||   ENDING   |||||||||||||||||||||||||||||");
            return 0;
        case 'l':                           //Case for length
                printf("Enter conversion number from chart given below : ");
                printf("\n1. feet to inch\n2. inch to cm\n3. cm to mm\n4. m to mm\n\n");
                scanf("%d",&con_no);
                switch(con_no){
                    case 1:
                        printf("Enter value in feet : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*feet_to_inch;
                        printf("%.2f feet = %.2f inch\n\n",first_unit,second_unit);
                        break;
                    case 2:
                        printf("Enter value in inch : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*inch_to_cm;
                        printf("%.2f inch = %.2f cm\n\n",first_unit,second_unit);
                        break;
                    case 3:
                        printf("Enter value in cm : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*cm_to_mm;
                        printf("%.2f cm = %.2f mm\n\n",first_unit,second_unit);
                        break;
                    case 4:
                        printf("Enter value in m : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*m_to_mm;
                        printf("%.2f m = %.2f mm\n\n",first_unit,second_unit);
                        break;
                }
                break;
            case 'w':               //case for weight
                printf("Enter conversion number from chart given below : ");
                printf("\n1. pound to kg\n2. tonne to kg\n3. g to pound\n4. kg to ounce\n\n");
                scanf("%d",&con_no);
                switch(con_no){
                    case 1:
                        printf("Enter value in pound : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*pound_to_kg;
                        printf("%.2f pound = %.2f kg\n\n",first_unit,second_unit);
                        break;
                    case 2:
                        printf("Enter value in tonne : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*tonne_to_kg;
                        printf("%.2f tonne = %.2f kg\n\n",first_unit,second_unit);
                        break;
                    case 3:
                        printf("Enter value in gram : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*g_to_pound;
                        printf("%.2f grams = %.2f pound\n\n",first_unit,second_unit);
                        break;
                    case 4:
                        printf("Enter value in Kilograms : ");
                        scanf("%f",&first_unit);
                        second_unit=first_unit*kg_to_ounce;
                        printf("%.2f Kg = %.2f ounce\n\n",first_unit,second_unit);
                        break;
                }
                break;
                /*default:
                    printf("enter valid key please........\n\n\n");
                    //continue;
                    goto up;*/
             }
             printf("<<<<<--------------<<<< WELCOME AGAIN >>>>----------------->>>>>");
    }
        return 0;
}
