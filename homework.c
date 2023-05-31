//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Teacher {
//    char name[50];
//    char workID[20];
//    char department[50];
//    char gender[10];
//    int age;
//    int yearsOfWork;
//    struct Teacher* next;
//} Teacher;
//
//Teacher* createTeacherNode() {
//    Teacher* teacher = (Teacher*)malloc(sizeof(Teacher));
//    teacher->next = NULL;
//    return teacher;
//}
//
//void addTeacherNode(Teacher* head, Teacher* newTeacher) {
//    Teacher* current = head;
//    while (current->next != NULL) {
//        current = current->next;
//    }
//    current->next = newTeacher;
//}
//
//Teacher* findTeacherByName(Teacher* head, const char* name) {
//    Teacher* current = head->next;
//    while (current != NULL) {
//        if (strcmp(current->name, name) == 0) {
//            return current;
//        }
//        current = current->next;
//    }
//    return NULL;  // 没有找到指定姓名的教师
//}
//
//void printTeachersAbove60(Teacher* head) {
//    Teacher* current = head->next;
//    while (current != NULL) {
//        if (current->age > 60) {
//            printf("姓名：%s，所在系：%s\n", current->name, current->department);
//        }
//        current = current->next;
//    }
//}
//
//void freeTeacherList(Teacher* head) {
//    Teacher* current = head;
//    while (current != NULL) {
//        Teacher* temp = current;
//        current = current->next;
//        free(temp);
//    }
//}
//
//int main() {
//    Teacher* head = createTeacherNode();
//
//    // 添加教师信息
//    Teacher* teacher1 = createTeacherNode();
//    strcpy(teacher1->name, "张三");
//    strcpy(teacher1->workID, "1001");
//    strcpy(teacher1->department, "计算机科学系");
//    strcpy(teacher1->gender, "男");
//    teacher1->age = 45;
//    teacher1->yearsOfWork = 20;
//    addTeacherNode(head, teacher1);
//
//    Teacher* teacher2 = createTeacherNode();
//    strcpy(teacher2->name, "李四");
//    strcpy(teacher2->workID, "1002");
//    strcpy(teacher2->department, "数学系");
//    strcpy(teacher2->gender, "男");
//    teacher2->age = 62;
//    teacher2->yearsOfWork = 35;
//    addTeacherNode(head, teacher2);
//
//    Teacher* teacher3 = createTeacherNode();
//    strcpy(teacher3->name, "王五");
//    strcpy(teacher3->workID, "1003");
//    strcpy(teacher3->department, "英语系");
//    strcpy(teacher3->gender, "女");
//    teacher3->age = 58;
//    teacher3->yearsOfWork = 30;
//    addTeacherNode(head, teacher3);
//
//    // 按姓名查找教师信息
//    const char* searchName = "李四";
//    Teacher* foundTeacher = findTeacherByName(head, searchName);
//    if (foundTeacher != NULL) {
//        printf("找到了姓名为 %s 的教师\n", searchName);
//        printf("工作证号：%s，所在系：%s，性别：%s\n", foundTeacher->workID, foundTeacher->department, foundTeacher->gender);
//    }
//    else {
//        printf("没有找到姓名为 %s 的教师\n", searchName);
//    }
//
//    // 显示年龄大于60岁的教师姓名及其所在系
//    printf("年龄大于60岁的教师姓名及其所在系：\n");
//    printTeachersAbove60(head);
//
//    // 释放链表内存
//    freeTeacherList(head);
//
//    return 0;
//}