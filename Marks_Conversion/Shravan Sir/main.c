//
//  main.c
//  Shravan Sir
//
//  Created by Adarsh Kumar on 28/01/20.
//  Copyright © 2020 Adarsh Kumar. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
   
    FILE *fp=fopen("/Users/adarshkumar/Documents/Xcode/C Project 2020 /Xcode_File_Example/Shravan Sir/Shravan Sir/inputMarks.txt", "r+");
    if(fp==NULL){
        
       printf("Sorry !!!File Cannot be Readed. ");
        
    }
    
    FILE *fp1=fopen("/Users/adarshkumar/Documents/Xcode/C Project 2020 /Xcode_File_Example/Shravan Sir/Shravan Sir/convertedMarks.txt", "w+");
    if(fp1==NULL){
        
       printf("Sorry !!!File Cannot be Created. ");
        
    }
    
    struct marks {
        char a[2];
    };
    
    struct marks m;
    int i;
    
    printf("\n\n\t\t\tDesigned by Adarsh Kumar for Dr. Shravan Sable Sir");
    printf("\n\n\t\t\t\t\tLNCT, Bhopal");
    printf("\n\n\t\t\t    Electronics And Communication Department ");
    printf("\n\nConverted Marks Are Listed Below : \n\n");
    
    fprintf(fp1, "\n\n\t\t\tDesigned by Adarsh Kumar for Dr. Shravan Sable Sir");
    fprintf(fp1, "\n\n\t\t\t\t\tLNCT, Bhopal");
    fprintf(fp1, "\n\n\t\t\t    Electronics And Communication Department ");
    fprintf(fp1, "\n\nConverted Marks Are Listed Below : \n\n");
    
    
    
    
    
    while(fscanf(fp, "%s",m.a)!=EOF ){
       
        
       if(strcmp(m.a,"A+")==0){
           i=95;
           printf("%d\n",95);
           fprintf(fp1, "%d\n",i);
       }
       
       if(strcmp(m.a,"A")==0){
           i=85;
           printf("%d\n",85);
           fprintf(fp1, "%d\n",i);
           
       }
       
       if(strcmp(m.a,"B+")==0){
           i=75;
           printf("%d\n",75);
           fprintf(fp1, "%d\n",i);
           
       }
       
       if(strcmp(m.a,"B")==0){
           i=65;
           printf("%d\n",65);
           fprintf(fp1, "%d\n",i);
           
       }
       
       if(strcmp(m.a,"C+")==0){
           i=55;
           printf("%d\n",55);
           fprintf(fp1, "%d\n",i);
           
       }
       
       if(strcmp(m.a,"C")==0){
           i=45;
           printf("%d\n",45);
           fprintf(fp1, "%d\n",i);
           
       }
       
       if(strcmp(m.a,"D")==0){
           i=35;
           printf("%d\n",35);
           fprintf(fp1, "%d\n",i);
           
       }
       
       if(strcmp(m.a,"E")==0){
           i=0;
           printf("%d\n",0);
           fprintf(fp1, "%d\n",i);
           
       }
        
       
    }
    
    printf("\n\tThank You Sir For Using This Software.\n\n\t\t Have A Nice Day :) !!!\n\n");
    fprintf(fp1, "\n\tThank You Sir For Using This Software.\n\n\t\t Have A Nice Day :)  !!!\n\n");
    fclose(fp);
    
    return 0;
}
