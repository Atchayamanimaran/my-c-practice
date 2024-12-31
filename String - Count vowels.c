#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",str);
    int len=strlen(str);
    int count=0;
    for (int i=0;i<len;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
     count++;   
    }
    }
    printf("Number of vowels:%d",count);
        
    
    
}
