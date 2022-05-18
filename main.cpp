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

#if 1
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