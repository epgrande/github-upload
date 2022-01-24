#include<iostream>
using namespace std;

int main(){
//file opening
//FILE *fopen(char nomefile[], char modalità[]);
FILE *file_pointer;   //File variable containing the memory address of the file
int success;
file_pointer=fopen("prova.txt","r+");
//fopen return NULL if the file can't be opened, otherwise it returns the memory address of the file
if(file_pointer==NULL){
    cout<<"The file can't be opened\n";
    exit(1); //It is necessary to end the process
}

success=fclose(file_pointer);
if(success==0) cout<<"\nThe file has been closed successfully.";
else cout<<"\nThe file can't be closed.";

return 0;
}