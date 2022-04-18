 #include<stdio.h>

float fare_calculator(int dis,char tic_c);
int main(){
    char E,F,S,H,tc;
    float fare,age,dis=34;
    char mob_no[10],name[30];
    char st[30],des[30];
    printf("enter name : \n");
    gets(name);
    printf("enter mobile number : \n");
    //fgets(mob_no, 10, stdin);
    gets(mob_no);
    printf("enter starting point : \n");
    //fgets(st, 30, stdin);
    gets(st);
    printf("enter destination : \n");
    //fgets(des,30 , stdin);
    gets(des);
    printf("Enter ticket class you want to purcahse('E'-Economy class , 'F'-First class , 'S'-Second class , 'H'-Handicap) : \n");
    scanf("%c",&tc);
     printf("enter passenger's age : \n");
    scanf("%f",&age);
    
    fare=fare_calculator(dis,tc);
    printf("\n\n\n..........................................INDIAN RAILWAYS.........................................................");
    printf("\nPASSENGERS INFO :::\n");
    printf("Name : ");
    puts(name);
    printf("Mob No. : %s\n",mob_no);
    printf("Age : %f\n",age);
    printf("starting point : ");
    puts(st);
    printf(" Destination : ");
    puts(des);
    printf("\nTicket class :%c\n",tc);
    printf("Total fare : Rs.%f\n",fare);
    printf("\n.....................................SAFE JOURNEY.......................................");
    return 0;
}
float fare_calculator(int dis,char tic_c){
    switch (tic_c){
    case 'E': return 10*dis;
    case 'F': return 8*dis;
    case 'S': return 5*dis;
    case 'H': return 2*dis;
    }
}
