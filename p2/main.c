#include <stdio.h>

int main(void){
    int n, count_eng=0, count_num=0;
    int max_eng=0, max_num=0;
    char string='\0';
    scanf("%d", &n);
    getchar();
    
    for(int i=1;i<=n; i++){
        scanf("%c", &string);
        if (string>='a'&&string<='z')
            count_eng++;
        
        else if (string>='0'&&string<='9'){
               max_eng=count_eng;
               count_eng=0;
        }
        
        else continue;
            
        
        if (string>='0'&&string<='9')
            count_num++;
            
        else if (string>='a'&&string<='z'){
               max_num=count_num;
               count_num=0;
        }
        
        else continue;
            
       
    }
    
    printf("%d\n%d", max_eng, max_num);
    
    
    
    return 0;
}
