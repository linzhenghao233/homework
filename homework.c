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
//    return NULL;  // û���ҵ�ָ�������Ľ�ʦ
//}
//
//void printTeachersAbove60(Teacher* head) {
//    Teacher* current = head->next;
//    while (current != NULL) {
//        if (current->age > 60) {
//            printf("������%s������ϵ��%s\n", current->name, current->department);
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
//    // ��ӽ�ʦ��Ϣ
//    Teacher* teacher1 = createTeacherNode();
//    strcpy(teacher1->name, "����");
//    strcpy(teacher1->workID, "1001");
//    strcpy(teacher1->department, "�������ѧϵ");
//    strcpy(teacher1->gender, "��");
//    teacher1->age = 45;
//    teacher1->yearsOfWork = 20;
//    addTeacherNode(head, teacher1);
//
//    Teacher* teacher2 = createTeacherNode();
//    strcpy(teacher2->name, "����");
//    strcpy(teacher2->workID, "1002");
//    strcpy(teacher2->department, "��ѧϵ");
//    strcpy(teacher2->gender, "��");
//    teacher2->age = 62;
//    teacher2->yearsOfWork = 35;
//    addTeacherNode(head, teacher2);
//
//    Teacher* teacher3 = createTeacherNode();
//    strcpy(teacher3->name, "����");
//    strcpy(teacher3->workID, "1003");
//    strcpy(teacher3->department, "Ӣ��ϵ");
//    strcpy(teacher3->gender, "Ů");
//    teacher3->age = 58;
//    teacher3->yearsOfWork = 30;
//    addTeacherNode(head, teacher3);
//
//    // ���������ҽ�ʦ��Ϣ
//    const char* searchName = "����";
//    Teacher* foundTeacher = findTeacherByName(head, searchName);
//    if (foundTeacher != NULL) {
//        printf("�ҵ�������Ϊ %s �Ľ�ʦ\n", searchName);
//        printf("����֤�ţ�%s������ϵ��%s���Ա�%s\n", foundTeacher->workID, foundTeacher->department, foundTeacher->gender);
//    }
//    else {
//        printf("û���ҵ�����Ϊ %s �Ľ�ʦ\n", searchName);
//    }
//
//    // ��ʾ�������60��Ľ�ʦ������������ϵ
//    printf("�������60��Ľ�ʦ������������ϵ��\n");
//    printTeachersAbove60(head);
//
//    // �ͷ������ڴ�
//    freeTeacherList(head);
//
//    return 0;
//}