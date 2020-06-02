//
//  main.c
//  Midsem-2
//
//  Created by Adarsh Kumar on 29/01/20.
//  Copyright © 2020 Adarsh Kumar. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <termios.h>
#include <unistd.h>

int getch() {
   struct termios oldtc;
   struct termios newtc;
   int ch;
   tcgetattr(STDIN_FILENO, &oldtc);
   newtc = oldtc;
   newtc.c_lflag &= ~(ICANON | ECHO);
   tcsetattr(STDIN_FILENO, TCSANOW, &newtc);
   ch=getchar();
   tcsetattr(STDIN_FILENO, TCSANOW, &oldtc);
   return ch;
}

int myAtoi(char* str)
{
    int res = 0; // Initialize result
  
    // Iterate through all characters of input string and
    // update result
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
  
    // return result.
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp=fopen("/Users/adarshkumar/Documents/Xcode/C Project 2020 /Xcode_File_Example/Midsem-2/Midsem-2/inputMarks.txt", "r+");
    if(fp==NULL){
        
       printf("Sorry !!!File Cannot be Readed. ");
        
    }
    
    FILE *fp1=fopen("/Users/adarshkumar/Documents/Xcode/C Project 2020 /Xcode_File_Example/Midsem-2/Midsem-2/convertedMarks.txt", "w+");
    if(fp1==NULL){
        
       printf("Sorry !!!File Cannot be Created. ");
    }
    
    struct marks {
        char a[2];
    };
    
    struct marks m;
    int i=0,j=0,k;
    
    printf("\n\n\t\t\tDesigned by Adarsh Kumar for Dr. Shravan Sable Sir");
    printf("\n\n\t\t\t\t\tLNCT, Bhopal");
    printf("\n\n\t\t\t    Electronics And Communication Department ");
    printf("\n\nConverted Marks Are Listed Below : \n\n");
    
    fprintf(fp1, "\n\n\t\t\tDesigned by Adarsh Kumar for Dr. Shravan Sable Sir");
    fprintf(fp1, "\n\n\t\t\t\t\tLNCT, Bhopal");
    fprintf(fp1, "\n\n\t\t\t    Electronics And Communication Department ");
    fprintf(fp1, "\n\nConverted Marks Are Listed Below : \n\n");
        
    while(fscanf(fp, "%s", m.a) != EOF ){
       
        printf("\n");
        fprintf(fp1, "\n");
        
        k=myAtoi(m.a);
        
        if(k<=5){
            fprintf(fp1, "%d\t", k);
            fprintf(fp1, "0\t");
            fprintf(fp1, "0");
            
            printf("%d\t", k);
            printf("0\t");
            printf("0");
            
        }
        else if (k>5 && k<=10){
            
            if(k<7){
                fprintf(fp1, "%d\t", k);
                fprintf(fp1, "0\t");
                fprintf(fp1, "0");
                
                printf("%d\t", k);
                printf("0\t");
                printf("0");
            }
            if (k>=7) {
                i=k-5;
                fprintf(fp1, "5\t");
                fprintf(fp1, "%d\t", i);
                fprintf(fp1, "0");
                
                printf("5\t");
                printf("%d\t", i);
                printf("0");
            }
        }
        else if (k>10 && k<=15){
            fprintf(fp1, "6\t");
            printf("6\t");
            i=k-6;
            if (i>5) {
                j=i-5;
                fprintf(fp1, "5\t");
                fprintf(fp1, "%d", j);
                
                printf("5\t");
                printf("%d", j);
            }
            else{
                fprintf(fp1, "%d\t", i);
                fprintf(fp1, "0");
                
                printf("%d\t", i);
                printf("0");
            }
        }
        else if (k>15 && k<=20){
            
            j=k-14;
            fprintf(fp1, "7\t");
            fprintf(fp1, "7\t");
            fprintf(fp1, "%d", j);
            
            printf("7\t");
            printf("7\t");
            printf("%d", j);
        }
    }
    
    printf("\n\n");
    printf("\n\tThank You Sir For Using This Software.\n\n\t\t Have A Nice Day :) !!!\n\n");
    fprintf(fp1, "\n\n\n\tThank You Sir For Using This Software.\n\n\t\t Have A Nice Day :)  !!!\n\n");
    
    fclose(fp);

    
    return 0;
}
