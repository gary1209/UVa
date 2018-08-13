#include <cstdio>

int main(){
    char c;
    bool isalp = false;
    int count = 0;
    while(true){
        if(scanf("%c",&c) != 1) break;
        if(c == '\n'){
            printf("%d\n",count);
            count = 0;
            isalp = false;
        }else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            if(!isalp) count++;
            isalp = true;
        }else{
            isalp = false;
        }
    }
}
