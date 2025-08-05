#include<stdio.h>
#include<string.h>
int main(){
    int i,n=5,j;
    char food[5][30];
    char temp[30];
printf("enter the food items \n",n);
for(i=0;i<n;i++){
scanf("%s",food[i]);
}

for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if (strlen(food[j]) > strlen(food[j + 1])) {
                strcpy(temp, food[j]);
                strcpy(food[j], food[j + 1]);
                strcpy(food[j + 1], temp);

    }
}

}
printf("The sorted items of food in ascending order is: \n");
for (i = 0; i < n; i++) {
        printf("%s\n", food[i]);
}
return 0;
}
