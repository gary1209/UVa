#include <cstdio>

int main(){
    char s2[1000];
    int c;
    while(true){
        printf("strat\n");
        if(scanf("%[^\n]",s2) != 1) break;
        printf("%s",s2)    
    }
}
//solution
//#include <cstdio>

//int main(){
//    char s2[1000];
//    int c;
//    while(true){
//        printf("strat\n");
      // fgets
//        if(scanf("%[^\n]%*c",s2) != 1) break;
//        printf("%s",s2);
//    }
//}


#include <string>  
#include <cstdio>    
int main()  
{  
    int a;
    int b;
    scanf("%d,%d",&a,&b);  //input 5 66
    printf("%d,%d",a,b);   //output 5,32767
    return 0;  
}  

//3.
// s = "howwwe";
    scanf("%s",s);
    printf("%c",*ptr);
    printf("%c",ptr[0]);
