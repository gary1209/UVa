#include <cstdio>

int main(){
  int count;
  scanf("%d", &count);
  
  for(int i = 1; i<= count; i++){
    int n1,n2,ans;
    scanf("%d%d", &n1, &n2);
    ans = (n1 + n2) * ((n2 - n1 + 2)/2) / 2;
    printf("Case %d: %d", i, ans);
  }
}
