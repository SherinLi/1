#include <stdio.h>

#include <string.h>

int main() {

   int n,a,i = 0,count=0;
    char str1[15], str2[15],ch, *first, str3[30]="",symbol;
gets(str1);
gets(str2);

//2,6
scanf("%d", &n);
strncpy(str3, str1, strlen(str1));
strncat(str3, str2, n);
printf("%s\n", str3);

//6
char str4[10]="prettykitty";
strncpy(str3, str4, n);
printf("%s\n", str3);

//8
scanf("%d",&symbol);

first = strchr(str1,symbol);
if (first == NULL){
        printf("NOT IN STRING\n");
}
else {
  printf("%d\n", first+1);
}

//10
char *p = strpbrk(str1,str2);
while (p != NULL){
    printf("%c ",*p);
    p = strpbrk (p+1,str2);
}
printf("\n");

//12
int j = strcspn(str1, str2);
 printf("%d ",j+1);

return 0;

}
