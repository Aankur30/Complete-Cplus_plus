#include<stdio.h>
/*

question 1:
enum covid_prevention{
    sanitizer=1,
    wear_mask=2,
    soc_distance=4
};
int main(){
    int myCovidPRevention=wear_mask|soc_distance;
    printf("%d",myCovidPRevention);
    return 0;
}
*/

//Question 2:
int main(){
    int x=1;
    switch (x)
    {
    case x:
    printf("Case 1");
        break;
        case x+1;
        printf("Case 2");
        break;
        default:
        printf("Default block");\
        break;
    }
    return 0;
}
