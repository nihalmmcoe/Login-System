#include <stdio.h>
#include <string.h>

int main() {
    char name[100], pswd[20];
    int num;
    char newpswd[20];

    printf("Welcome to banking!!\n");
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  

    int result = strcmp(name, "Anushka");
    if (result == 0) {
        printf("Correct username...\n");
    } else {
        printf("Incorrect username...\n");
        return 0;
    }

    printf("Enter 1 if you know the password and 0 if you don't: ");
    scanf("%d", &num);
    getchar();  

    if (num == 1) {
        printf("Enter password: ");
        fgets(pswd, sizeof(pswd), stdin);
        pswd[strcspn(pswd, "\n")] = '\0';  

        int result2 = strcmp(pswd, "12345");
        if (result2 == 0) {
            printf("Correct password...\n");
            printf("Anushka You have sucessfully loged in...");
        } else {
            printf("Incorrect password...\n");
        }
    } else if (num == 0) {
        printf("Enter new password: ");
        fgets(newpswd, sizeof(newpswd), stdin);
        newpswd[strcspn(newpswd, "\n")] = '\0';  

        int length = strlen(newpswd);
        if (length < 5) {
            printf("Password must be at least 5 characters long.\n");
            printf("Enter new password: ");
        fgets(newpswd, sizeof(newpswd), stdin);
        newpswd[strcspn(newpswd, "\n")] = '\0';  
        printf("Password set successfully...\n");
            char str1[50] = "Welcome ";
            char str2[] = "Anushka";
    
    
            strcat(str1, str2);
    
    
            printf("%s\n", str1);
            strcpy(pswd,newpswd);
            printf("Your new password is %s",pswd);
        } else {
            printf("Password set successfully...\n");
            char str1[50] = "Welcome ";
            char str2[] = "Anushka";
    
    
            strcat(str1, str2);
    
    
            printf("%s\n", str1);
            strcpy(pswd,newpswd);
            printf("Your new password is %s",pswd);
        }
    } else {
        printf("Invalid option...\n");
    }

    return 0;
}