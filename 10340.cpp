#include <cstdio>
#include <cstring>

char s1[10000];
char s2[10000];
int main(){
    while(true){
        // printf("strat\n");
        if(scanf("%s%s",s1,s2) != 2) break;
        // printf("%c %c\n",s1[2],s2[2]);
        int index1 = 0;
        for(int i=0; i < strlen(s2); i++){
            if(s2[i] == s1[index1]){
                index1++;
            }
        }
        if(index1 == strlen(s1)) printf("Yes\n");
        else printf("No\n");
    }
}
