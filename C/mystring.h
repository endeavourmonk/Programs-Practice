//function to compare two strings. It takes address of two strings and return 1 for same string or 0 for not same.
int strcmpud(char *s1,char *s2){     
    int i=0;
    while(*(s1+i)!='\0'){
        if(*(s1+i)==*(s2+i++))
            continue;
        return 0;
    }
    return 1;
}

//function to find length of string. It takes string address as parameter(argument).
int strlenud(char str[]){
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

//function to reverse a string. It takes the address of two strings as argument.
void strrevud(char * str , char* rev_str ){
    int i=0,j=0;
    while(str[i]!='\0')
        i++;
    for(j=0 ; j<i ;j++)
        *(rev_str + j) = *(str + (i-j-1));
        *(rev_str+j)='\0';
}

//function to copy source string into destination.
void strcpyud(char * des , char * src){
    int i=0;
    for(i=0;src[i]!='\0';i++)
        *(des +i)=*(src+i);
    *(des+i)='\0';
}