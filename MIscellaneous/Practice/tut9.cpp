#include<stdio.h>
int arc(int i , int j){
    if(i<2) return j + 2;
    else if (j<2) return arc(i-1,1);
    else return arc(i-1,arc(i,j-2));
}
int main(){
    int r = arc(2,6);
    printf("%d",r);
    return 0;
}