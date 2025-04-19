#include <stdio.h>
int main(){
    int maths,cptc,coa;
    float avg;
    printf("enter your marks in maths");
    scanf("%d",&maths);
    printf("enter your marks in cptc");
    scanf("%d",&cptc);
    printf("enter your marks in coa");
    scanf("%d",&coa);
    avg = (maths+cptc+coa)/3;
    if(maths&&cptc&&coa>=40 && avg>=40){
        printf("you are first class and your average in each sub is %f",avg);
    }
    else{
        printf("you are promoted and your average in each sub is %f",avg);
    }
    return 0;
}