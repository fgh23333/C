#include <stdio.h>

int main() {
    struct Student
    {
        int num;
        float scole;
        char name[20];
    }
    stu[50]={
        {01,12.5,"qq"},
        {02,90,"ww"},
        {03,83.6,"ee"},
        {04,88.8,"rr"},
        {05,93.7,"tt"}
        };
    for (int i = 0; i < 5; i++)
    {
        if (stu[i].scole >= 80)
        {
            printf("学号：%d\n姓名：%s\n", Student[i].num, Student[i].name);
        }
    }
    return 0;
}