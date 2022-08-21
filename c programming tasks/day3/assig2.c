#include <stdio.h>
#define getName(var)  #var
void chechPassword(int password, char name[]);

void main(void){

    /*passwords*/
    int ahmed = 7788, amr = 5566, wael = 1122;
    int id;
    printf("\nEnter your ID:");
    scanf("%d", &id);
    switch(id){
        case 1234: /*ahmed*/
            checkPassword(ahmed, getName(ahmed));
            break;

        case 5678: /*amr*/
            checkPassword(amr, getName(amr));
            break;

        case 9870: /*wael*/
            checkPassword(wael, getName(wael));
            break;
        default:
            printf("\nID not correct, you are not registred ");
    }
}


void checkPassword(int password, char name[]){

    int c = 0;
    int enteredPass;
    printf("Enter your password:\n");
    scanf(" %d", &enteredPass);
    while(c < 3){
        if(password == enteredPass ){
            printf("\nWelcome %s", name);
            return 0;
        }else{
            printf("\nPassword is not correct, try again:");
            scanf(" %d", &enteredPass);
            c++;
        }
    }

    printf("\nIncorrect password for three times, no more tries");
}
