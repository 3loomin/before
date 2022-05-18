#include <iostream>
#include <stdio.h>
#if 1
using namespace std;
int stack[100001];
int n , sum, tmp = 0;
int top = -1;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d",&tmp);
        if(!tmp){
            top--;
        }
        else{
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
