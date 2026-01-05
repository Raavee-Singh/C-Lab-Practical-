//Part A program 3: 
#include<stdio.h>
int main()
{
    int choice;
    int inputID;
    //Pre-stored KYC IDs
    int PAN_Number=1234;
    long int AADHAR_Number=567890123456;
    int APAAR_ID=7890;
    int Driving_License=3456;
    int Passport=9012;
    printf("------ KYC Verification System ------\n");
    printf("Select the KYC document to verify your identity:\n");
    printf("1. PAN Number\n");  
    printf("2. AADHAR Number\n");
    printf("3. APAAR ID\n");
    printf("4. Driving License\n");
    printf("5. Passport\n");
    printf("-----------\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter your ID number: ");
    scanf("%d", &inputID);
    switch(choice)
    {
        case 1:
            if(inputID == PAN_Number)
                printf("PAN Number verified successfully!\n");
            else
                printf("PAN not verified. Record not found.\n");
            break;
        case 2:
            if(inputID == AADHAR_Number)
                printf("AADHAR Number verified successfully!\n");
            else
                printf("AADHAR not verified. Record not found.\n");
            break;
        case 3:
            if(inputID == APAAR_ID)
                printf("APAAR ID verified successfully!\n");
            else
                printf("APAAR not verified. Record not found.\n");
            break;
        case 4:
            if(inputID == Driving_License)
                printf("Driving License verified successfully!\n");
            else
                printf("Driving License not verified. Record not found.\n");
            break;
        case 5:
           if(inputID == Passport)
                printf("Passport verified successfully!\n");
            else
                printf("Passport not verified. Record not found.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option (1-5).\n");
    }
return 0;

}