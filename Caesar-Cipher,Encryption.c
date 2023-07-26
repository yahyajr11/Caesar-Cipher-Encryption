#include <stdio.h>
#include <string.h>

int main()
{
    char message[80];
    int amount;
    
    printf("Enter message to be encrpted: ");
    
    //scanf("%80s", &message);
    fgets(message,80,stdin);
    
    printf("\nEnter shift amount (1-25) : ");
    
    scanf("%d", &amount);
    
    printf("\nEncrpyted message: " );
    
    for(int i=0;i<80;i++) {
        if(message[i]>64 && message[i]<91){
            if ((message[i] + amount)>90){
                message[i] -= 26;
                }
            message[i] = (message[i] + amount);
        }
        
        if(message[i]>96 && message[i]<123){
            message[i]-=26;
            message[i] += amount;
            if (message[i] >(122-26)){
                message[i] -= 26;
                }
            message[i]+=26;
        }
        
        printf("%c", message[i]);

        if (message[i+1]=='\0') {
            break;
        }
        
    }
 printf("\n");
 return 0;
 
}
