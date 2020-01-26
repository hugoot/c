#ifndef __DERIVED_TYPE_H__ 
#define __DERIVED_TYPE_H__ 
#include <stdio.h>
#include <stdlib.h>

void derived_type(void);
void pointertype_add(void);
int max(int x, int y);
void void_enum(void);
void derived_type_point(void);
// void print(struct student stu);
// void print123(struct student *p);
void arraytype(void);
void arraytype_zscg(void);

// struct student
// {
//     long num;
//     char name[20];
//     char sex;
//     float score;
// };

//     struct student
// {
//     int num;
//     char name[20];
//     char sex;
//     int age;
// };



// struct student
// {
//     int num;
//     char name[20];
//     float score[3];
// };
 


// struct student
// {
//     int num;
//     char name[20];
//     float score[3];
// }stu = {12345, "Li Li", 67.5, 89, 78.6};


// struct student
// {
//     long num;
//     float score;
//     struct student *next;
// };

// struct stu{
//     int num;
//     float score;
//  };


/* struct student
{
    int mum;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
}stu[3] = {{10101,"Li Lin", 'M', 18, 87.5, "103 Beijing Road"},
            {10101,"Li Lin", 'M', 18, 87.5, "103 Beijing Road"},
            {10101,"Li Lin", 'M', 18, 87.5, "103 Beijing Road"}};
 */

typedef struct node
{
int data;
struct node *next;

};



#endif	// __DERIVED_TYPE_H__