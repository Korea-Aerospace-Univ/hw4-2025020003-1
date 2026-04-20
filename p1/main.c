#include <stdio.h>

int main(void)
{
    int ans, input=0, count=0;
    scanf("%d", &ans);
    do{
        count++;
        scanf("%d", &input);
        if (input>ans)
           printf("%d>?\n",input);
        else if (input<ans)
           printf("%d<?\n",input);
        else
           continue;
        
           
    
        
    }while(ans!=input);
    
    if (ans==input)
       printf("%d==?\n%d",input, count);
    
    return 0;
}
