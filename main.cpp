#include <iostream>
#include <stdio.h>
using namespace std;
#if 0
int stack[100001];
int n , sum, tmp = 0;
int top = -1;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d",&tmp);
        if(!tmp){
            //pop
            top--;
        }
        else{
            //push
            stack[++top] = tmp;
        }
    }
    for(int j = 0; j <= top; j++){
        sum += stack[j];
    }
    cout << sum;
    return 0;
}
#endif

#if 0
int front =-1 ;
int rear = -1;
int n, tmp = 0;
int queue[1000000];

void initqueue(int n){
    for(int i = 1; i <= n; i++){
        queue[++rear] = i;
    }
}
int main(void){

    cin >> n;
    initqueue(n);
    while(front + 1 != rear){
        front++;
        tmp = queue[++front];
        queue[++rear] = tmp;
    }
    cout << queue[rear];
    return 0;
}

#endif

#if 1
//9012
int n , cnt, j, chk;
char stack[51] = {0};
int main(void){
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%s",stack);
        j = 0;
        cnt = 0;
        while(stack[j] != 0){
            if(stack[j] == '(') {
                cnt++;
            }
            if(stack[j] == ')'){
                cnt--;
            }
            if(cnt < 0 ) break;
            //printf("%d :  cnt\n ", cnt);
            j++;
        }
        if(cnt == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
#endif