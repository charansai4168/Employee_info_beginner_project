/*
    Source file developed by Gajulapuram Charan Sai.
    Created on: 19 January 2025.
    Project purpose: This project is developed to address the issue of time taken to entering the data of the employee's in an company or organization and
    To segregating their info based on section they are working and few common sorting's based on their name, sex, age, experience of work and paying.

    This is a simple  project, created with beginner level experience and existing knowledge, which demonstrates 
    "Storing of the data of employee's that uses different data types like string, char, int, float and etc..."

    In order to store all this data I have created structure with name employee, that stores:
    1. Name of the employee, with having a maximum length of 100.
    2. Gender of the employee, a single character is used.
    3. Age of the employee, int data type is used.
    4. ID of the employee, with having a maximum length of 20.
    ID: It's give an idea about employee's belonging section and
    which part he is good at in that particular section.
    5. Experience of employee, int data type is used.
    6. Salary of the employee, int data type is used.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct employee {

    char name[100]; // Stores the name, with max characters 100.
    char sex; // A single bit character, stores the gender as M/F/T, M: Male, F: Female. T: Transgender.
    int age; // Employee's age in years.
    char id[20]; // Employee's ID (max characters of 20).
    int exp; // Years of experience.
    int salary; // Stores salary in rupee's.

};

struct employee* profile;

#define path_max_len 1024
/*  
    Primary: Name.
    Sorts the data of employee's lexicographically as per their names. 
*/
void name_arr(struct employee* fun_name, int len){

    for(int i = 0; i < len-1; i++){

        int k = i; // Assuming current index is smallest one. That stored by var k.
        for(int j = i+1; j < len; j++){

            /*
                Comparing value of current index with value of its succeeding index till last index,
                If current is biggest one. 
            */
            if(strcmp(fun_name[k].name, fun_name[j].name) > 0){ 

                // Value of k is replaced with j.
                k = j;
            }
        }
        // Performing Swapping only when k and i are not equal to prevent multiple swaps. 
        // which swaps the whole data as per their name;
        if(k != i){

            // Swaps the names lexicographically.
            char temp[50];
            strcpy(temp, fun_name[k].name);
            strcpy(fun_name[k].name, fun_name[i].name);
            strcpy(fun_name[i].name, temp);

            // Swaps the gender info.(information)
            char temp1 = fun_name[k].sex;
            fun_name[k].sex = fun_name[i].sex;
            fun_name[i].sex = temp1;

            // Swaps the Age info.
            int temp2 = fun_name[i].age;
            fun_name[i].age = fun_name[k].age;
            fun_name[k].age = temp2;

            // Swaps the ID's info.
            char temp3[11];
            strcpy(temp3, fun_name[k].id);
            strcpy(fun_name[k].id, fun_name[i].id);
            strcpy(fun_name[i].id, temp3);
            
            // Swaps the experience info.
            int temp4 = fun_name[i].exp;
            fun_name[i].exp = fun_name[k].exp;
            fun_name[k].exp = temp4;

            // Swaps the salary info.
            int temp5 = fun_name[i].salary;
            fun_name[i].salary = fun_name[k].salary;
            fun_name[k].salary = temp5;
        }
    }
}

/*
    Primary: Gender.
    Sorts the employee's data lexicographically as per their gender(M/F/T).
*/
void sex_arr(struct employee* fun_sex, int len){

    for(int i = 0; i < len-1; i++){

        int k = i;

        for(int j = i+1; j < len; j++){

            /*
                Compares the values and change the k(minimum value) to 'j'
                Only if condition satisfies.
            */
            if(fun_sex[j].sex < fun_sex[k].sex){

                k = j;
            }
        }
        /*
            Swaps the employee's whole data as per gender, Once the 
            'if' condition meets, which prevents multiple swaps.
        */
        if(k != i){

            // Swaps the gender info.(information)
            char temp1 = fun_sex[i].sex;
            fun_sex[i].sex = fun_sex[k].sex;
            fun_sex[k].sex = temp1;

            // Swaps the names lexicographically.
            char temp2[100];
            strcpy(temp2, fun_sex[i].name);
            strcpy(fun_sex[i].name, fun_sex[k].name);
            strcpy(fun_sex[k].name, temp2);

            // Swaps the ID's info.
            char temp3[11];
            strcpy(temp3, fun_sex[i].id);
            strcpy(fun_sex[i].id, fun_sex[k].id);
            strcpy(fun_sex[k].id, temp3);

            // Swaps the Age info.
            int age1 = fun_sex[i].age;
            fun_sex[i].age = fun_sex[k].age;
            fun_sex[k].age = age1;

            // Swaps the experience info.
            int exp1 = fun_sex[i].exp;
            fun_sex[i].exp = fun_sex[k].exp;
            fun_sex[k].exp = exp1;

            int sal1 = fun_sex[i].salary;
            fun_sex[i].salary = fun_sex[k].salary;
            fun_sex[k].salary = sal1;
        }
    }
}
/*
    primary: ID's.
    Sorts the data of the employ's as per their ID.
*/
void id_arr(struct employee* fun_id, int len){

    for(int i = 0; i < len-1; i++){

        int k = i;
        for(int j = i+1; j < len; j++){

            if(strcmp(fun_id[k].id, fun_id[j].id) > 0){

                k = j;
            }
        }
        /*
            Swaps the employee's whole data as per their ID's, Once the 
            'if' condition meets, which prevents multiple swaps.
        */
        if(k != i){

            // Swaps the ID's info.
            char id1[20];
            strcpy(id1, fun_id[k].id);
            strcpy(fun_id[k].id, fun_id[i].id);
            strcpy(fun_id[i].id, id1);

            // Swaps the names lexicographically.
            char nam1[100];
            strcpy(nam1, fun_id[i].name);
            strcpy(fun_id[i].name, fun_id[k].name);
            strcpy(fun_id[k].name, nam1);

            // Swaps the gender info.(information)
            char gender = fun_id[i].sex;
            fun_id[i].sex = fun_id[k].sex;
            fun_id[k].sex = gender;

            // Swaps the Age info.
            int age = fun_id[i].age;
            fun_id[i].age = fun_id[k].age;
            fun_id[k].age = age;

            // Swaps the experience info.
            int exp = fun_id[i].exp;
            fun_id[i].exp = fun_id[k].exp;
            fun_id[k].exp = exp;

            // Swaps the salary info.
            int salary = fun_id[i].salary;
            fun_id[i].salary = fun_id[k].salary;
            fun_id[k].salary = salary;
        }
    }
}
/*
    Primary: Experience.
    Sorts the data of the employee's as per their experience in belonging section in descending order.
    Selection sorting is used.
*/
void exp_arr(struct employee* fun_exp, int len){

    for(int i = 0; i < len-1; i++){

        int k = i;

        for(int j = i+1; j < len; j ++){

            if(fun_exp[k].exp < fun_exp[j].exp){

                k = j;
            }
        }
        /*
            Swaps the employee's whole data as per their Experience, Once the 
            'if' condition meets, which prevents multiple swaps.
        */
        if(k != i){

            // Swaps the names lexicographically.
            char name[100];
            strcpy(name, fun_exp[i].name);
            strcpy(fun_exp[i].name, fun_exp[k].name);
            strcpy(fun_exp[k].name, name);

            // Swaps the gender info.(information)
            char gender = fun_exp[i].sex;
            fun_exp[i].sex = fun_exp[k].sex;
            fun_exp[k].sex = gender;

            char id[20];
            strcpy(id, fun_exp[i].id);
            strcpy(fun_exp[i].id, fun_exp[k].id);
            strcpy(fun_exp[k].id, id);

            // Swaps the Age info.
            int age = fun_exp[i].age;
            fun_exp[i].age = fun_exp[k].age;
            fun_exp[k].age = age;

            // Swaps the experience info.
            int exp = fun_exp[i].exp;
            fun_exp[i].exp = fun_exp[k].exp;
            fun_exp[k].exp = exp;

            // Swaps the salary info.
            int salary = fun_exp[i].salary;
            fun_exp[i].salary = fun_exp[k].salary;
            fun_exp[k].salary = salary;
        }
    }
}
/*
    Primary: Salary.
    Sorts the data of the employs as per their salary high paying to low.
*/
void salary_arr(struct employee* fun_salary, int len){

    for(int i = 0; i < len-1; i++){

        int k = i;
        for(int j = i+1; j < len; j++){

            if(fun_salary[k].salary < fun_salary[j].salary){

                k = j;
            }
        }
        /*
            Swaps the employee's whole data as per their Salary, Once the 
            'if' condition meets, which prevents multiple swaps.
        */
        if(k != i){
            
            // Swaps the names lexicographically.
            char name[50];
            strcpy(name, fun_salary[i].name);
            strcpy(fun_salary[i].name, fun_salary[k].name);
            strcpy(fun_salary[k].name, name);

            // Swaps the gender info.(information)
            char gender = fun_salary[i].sex;
            fun_salary[i].sex = fun_salary[k].sex;
            fun_salary[k].sex = gender;

            char id[20];
            strcpy(id, fun_salary[i].id);
            strcpy(fun_salary[i].id, fun_salary[k].id);
            strcpy(fun_salary[k].id, id);

            // Swaps the Age info.
            int age = fun_salary[i].age;
            fun_salary[i].age = fun_salary[k].age;
            fun_salary[k].age = age;

            // Swaps the experience info.
            int exp = fun_salary[i].exp;
            fun_salary[i].exp = fun_salary[k].exp;
            fun_salary[k].exp = exp;

            // Swaps the salary info.
            int salary = fun_salary[i].salary;
            fun_salary[i].salary = fun_salary[k].salary;
            fun_salary[k].salary = salary;
        }
    }
}

int main(){

    int count, user_age;
    /*
        Count variable holds, how many employee's are there.
    */
    printf("No.of Data entries: ");
    scanf("%d", &count);
    /*
        Creating a Structure Array with a length of count using DMA (Dynamic Memory Allocation).
    */
    profile = (struct employee*) malloc(count *sizeof(struct employee));
    if(profile == NULL){

        printf("Memory Allocation Failed!");
        exit(1);
    }
    char user_sex;
    for(int i = 0; i < count; i++){

        /*
            A User_name charater array is created with max of 100 characters. Using DMA.
        */
        char* user_name = (char*) malloc(100 *sizeof(char));
        if(user_name == NULL){

            printf("Unable to save name!\n");
            free(profile);
            exit(1);
        }
        printf("Name of the Employee: ");
        scanf(" %[^\n]s", user_name);
        int user_name_len = strlen(user_name);
        /*
            converting all characters into uppercase.
        */
        for(int j = 0; j < user_name_len; j++){

            user_name[j] = toupper(user_name[j]);
        }
        strncpy(profile[i].name, user_name, user_name_len);
        profile[i].name[user_name_len] = '\0';
        free(user_name); // free up the space taken by user_name since it is stored in profile.

        /*
            Reading gender from user.
        */
        printf("Gender(M/F/T): ");
        scanf(" %c", &user_sex);
        user_sex = toupper(user_sex);
        /*
            strictly sticking the user to make choice form (M/F/T).
        */
        if(user_sex == 'M' || user_sex == 'F' || user_sex == 'T'){

            profile[i].sex = user_sex;
        }
        else{

            printf("Invalid data entered! Choose from (M/F/T)");
            free(profile);
            exit(1);
        }

        /*
            Reading age from user.
        */
        printf("Age: ");
        scanf(" %d", &user_age);
        /*
            data is updated to structure only when age is greater than 18.
            Otherwise, the whole data will be erased.
        */
        if(user_age > 18){

            profile[i].age = user_age;
        }
        else{

            printf("Invalid age! Must be greater than 18.\n");
            free(profile);
            exit(1);
        }

        /*
            Reading ID from the user to know in which domain they are working.
        */
        char* user_id = (char*) malloc(20 *sizeof(char));
        if(user_id == NULL){

            printf("Unable to save ID!\n");
            free(profile);
            exit(1);
        }
        printf("ID: ");
        scanf(" %[^\n]s", user_id);
        int id_len = strlen(user_id);
        for(int j = 0; j < id_len; j++){

            /*
                converting all alpha characters in the employee ID.
            */
            if(isalpha(user_id[j])){

                user_id[j] = toupper(user_id[j]);
            }
        }
        // Copying the id into profile.
        strncpy(profile[i].id, user_id, id_len);
        profile[i].id[id_len] = '\0';
        free(user_id);

        printf("Experience in years: "); // Reading their experience in their particular domain n co-domain.
        scanf(" %d", &profile[i].exp);

        printf("Salary in Rupee's: "); // Reading salary of the employee.
        scanf(" %d", &profile[i].salary);

        printf("\n");
    }
    /*
        Passing Structure employee address and its length value to name_arr.
        and getting a sorted array on their names.
    */
    name_arr(profile, count);
    char* name_file_path = (char*) malloc(path_max_len *sizeof(char));
    if(name_file_path == NULL){

        printf("Unable to create path for employee_name_list: ");
        free(profile);
        exit(1);
    }
    /*
        Reading desired file path from user to store the sorted details.
    */
    printf("Enter path to save the data of Employees name: ");
    scanf(" %[^\n]s", name_file_path);

    FILE* name_file = fopen(name_file_path, "w");
    if (name_file == NULL) {
        printf("Failed to open Employee_name_list File!\n");
        free(name_file_path);
        free(profile);
        exit(1);
    }
    printf("Employees in lexicographically: \n");
    fprintf(name_file, "Employees in lexicographically: \n");
    /*
        Writing the deltails of the each employee in to the file located at specified path. 
    */
    for(int j = 0; j < count; j++){

        fprintf(name_file, "Name of the Employee: %s\nDetails:\n", profile[j].name);
        printf("Name of the Employee: %s\nDetails:\n", profile[j].name);
        printf("Gender: %c\n", profile[j].sex);
        printf("Age: %d\n", profile[j].age);
        printf("ID: %s\n", profile[j].id);
        printf("Experience: %d\n", profile[j].exp);
        printf("Salary: %d\n", profile[j].salary);
        
        fprintf(name_file, "Gender: %c\n", profile[j].sex);
        fprintf(name_file, "Age: %d\n", profile[j].age);
        fprintf(name_file, "ID: %s\n", profile[j].id);
        fprintf(name_file, "Experience: %d\n", profile[j].exp);
        fprintf(name_file, "Salary: %d\n", profile[j].salary);
        fprintf(name_file, "\n");
        printf("\n");
    }
    fclose(name_file); // closing the file after writing into it.
    free(name_file_path); // Free up space taken by file path.

    /*
        Passing Structure employee address and its length value to sex_arr.
        and getting a sorted array on their gender.
    */
    sex_arr(profile, count);
    char* sex_file_path = (char*) malloc(path_max_len *sizeof(char));
    if(sex_file_path == NULL){

        printf("Unable to create path for Employees_Gender_list!\n");
        free(profile);
        exit(1);
    }
    /*
        Reading desired file path from user to store the sorted details.
    */
    printf("Enter path to save the data of segregation of Employees by Gender: ");
    scanf(" %[^\n]s", sex_file_path);
    FILE* sex_file = fopen(sex_file_path, "w");
    if(sex_file == NULL){
        
        printf("Failed to access the employees_gender_list File!");
        free(sex_file_path);
        free(profile);
        exit(1);
    }
    printf("Employees based on Gender(M/T/F): \n");
    fprintf(sex_file, "Employees based on Gender(M/T/F): \n");
    /*
        Writing the deltails of the each employee in to the file located at specified path. 
    */
    for(int i = 0; i < count; i++){

        printf("Gender: %c\n", profile[i].sex);
        printf("Name: %s\n", profile[i].name);
        printf("Age: %d\n", profile[i].age);
        printf("ID: %s\n", profile[i].id);
        printf("Experience: %d\n", profile[i].exp);
        printf("Salary: %d\n", profile[i].salary);
        printf("\n");

        fprintf(sex_file, "Gender: %c\n", profile[i].sex);
        fprintf(sex_file, "Name: %s\n", profile[i].name);
        fprintf(sex_file, "Age: %d\n", profile[i].age);
        fprintf(sex_file, "ID: %s\n", profile[i].id);
        fprintf(sex_file, "Experience: %d\n", profile[i].exp);
        fprintf(sex_file, "Salary: %d\n", profile[i].salary);
        fprintf(sex_file, "\n");
    }
    /*
        Free up the space of file path, after closing the sex_file.
    */
    fclose(sex_file);
    free(sex_file_path);

    /*
        Passing Structure employee address and its length value to id_arr.
        and getting a sorted array on their belonging domain.
    */
    id_arr(profile, count);
    char* id_file_path = (char*) malloc(path_max_len *sizeof(char*));
    if(id_file_path == NULL){

        printf("Unable to create path for Employees_id_file!\n");
        free(profile);
        exit(1);
    }
    /*
        Reading desired file path from user to store the sorted details.
    */
    printf("Enter path to save the data of Employees ID: ");
    scanf(" %[^\n]s", id_file_path);
    FILE* id_file = fopen(id_file_path, "w"); 
    if(id_file == NULL){
        
        printf("Failed to access employees_id File!\n");
        free(id_file_path);
        free(profile);
        exit(1);
    }
    printf("Employees as per section or ID: \n");
    fprintf(id_file, "Employees as per section or ID: \n");
    /*
        Writing the deltails of the each employee in to the file located at specified path. 
    */
    for(int i = 0; i < count; i++){

        printf("ID: %s\n", profile[i].id);
        printf("Name: %s\n", profile[i].name);
        printf("Gender: %c\n", profile[i].sex);
        printf("Age: %d\n", profile[i].age);
        printf("exp: %d\n", profile[i].exp);
        printf("Salary: %d\n", profile[i].salary);
        printf("\n");

        fprintf(id_file, "ID: %s\n", profile[i].id);
        fprintf(id_file, "Name: %s\n", profile[i].name);
        fprintf(id_file, "Gender: %c\n", profile[i].sex);
        fprintf(id_file, "Age: %d\n", profile[i].age);
        fprintf(id_file, "exp: %d\n", profile[i].exp);
        fprintf(id_file, "Salary: %d\n", profile[i].salary);
        fprintf(id_file, "\n");
    }
    /*
        Free up the space of file path, after closing the id_file.
    */
    fclose(id_file);
    free(id_file_path);

    /*
        Passing Structure employee address and its length value to name_arr.
        and getting a sorted array on their experience of work in their domain.
    */
    exp_arr(profile, count);
    char* exp_file_path = (char*) malloc(path_max_len *sizeof(char));
    if(exp_file_path == NULL){

        printf("Unable to create path for Employees_experience list!\n");
        free(profile);
        exit(1);
    }
    /*
        Reading desired file path from user to store the sorted details.
    */
    printf("Enter path to save the data of Employees experiences: ");
    scanf(" %[^\n]s", exp_file_path);
    FILE *exp_file = fopen(exp_file_path, "w");
    if(exp_file == NULL){

        printf("Unable to open File!");
        free(exp_file_path);
        free(profile);
        exit(1);
    }
    printf("Employees as per high-low experience order: \n");
    fprintf(exp_file, "Employees as per high-low experience order: \n");
    /*
        Writing the deltails of the each employee in to the file located at specified path. 
    */
    for(int i = 0; i < count; i++){

        printf("Experience: %d\n", profile[i].exp);
        printf("ID: %s\n", profile[i].id);
        printf("Salary: %d\n", profile[i].salary);
        printf("Name: %s\n", profile[i].name);
        printf("Gender: %c\n", profile[i].sex);
        printf("Age: %d\n", profile[i].age);
        printf("\n");

        fprintf(exp_file, "Experience: %d\n", profile[i].exp);
        fprintf(exp_file, "ID: %s\n", profile[i].id);
        fprintf(exp_file, "Salary: %d\n", profile[i].salary);
        fprintf(exp_file, "Name: %s\n", profile[i].name);
        fprintf(exp_file, "Gender: %c\n", profile[i].sex);
        fprintf(exp_file, "Age: %d\n", profile[i].age);
        fprintf(exp_file, "\n");
    }
    /*
        Free up the space of file path, after closing the exp_file.
    */
    fclose(exp_file);
    free(exp_file_path);

    /*
        Passing Structure employee address and its length value to salary_arr.
        and getting a sorted array on their paying.
    */
    salary_arr(profile, count);
    char* salary_file_path = (char*) malloc(path_max_len *sizeof(char));
    if(salary_file_path == NULL){

        printf("Unable to create path for employees_salary list!\n");
        free(profile);
        exit(1);
    }
    /*
        Reading desired file path from user to store the sorted details.
    */
    printf("Enter path to save the data of Employees salary: ");
    scanf(" %[^\n]s", salary_file_path);
    FILE *salary_file = fopen(salary_file_path, "w");
    if(salary_file == NULL){

        printf("Unable to open file! ");
        free(salary_file_path);
        free(profile);
        exit(1);
    }
    printf("Employees as per high-low salary: \n");
    fprintf(salary_file, "Employees as per high-low salary: \n");
    /*
        Writing the deltails of the each employee in to the file located at specified path. 
    */
    for(int i = 0 ; i < count; i++){

        printf("Salary: %d\n", profile[i].salary);
        printf("ID: %s\n", profile[i].id);
        printf("Experience: %d\n", profile[i].exp);
        printf("Name: %s\n", profile[i].name);
        printf("Gender: %c\n", profile[i].sex);
        printf("Age: %d\n", profile[i].age);
        printf("\n");

        fprintf(salary_file, "Salary: %d\n", profile[i].salary);
        fprintf(salary_file, "ID: %s\n", profile[i].id);
        fprintf(salary_file, "Experience: %d\n", profile[i].exp);
        fprintf(salary_file, "Name: %s\n", profile[i].name);
        fprintf(salary_file, "Gender: %c\n", profile[i].sex);
        fprintf(salary_file, "Age: %d\n", profile[i].age);
        fprintf(salary_file, "\n");
    }
    /*
        Free up the space of file path, after closing the salary_file.
    */
    fclose(salary_file);
    free(salary_file_path);
    free(profile);
    return 0;
}