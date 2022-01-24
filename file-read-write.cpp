#include<iostream>
using namespace std;

int main(){
    FILE *punt_file_1;
    char car1;
    punt_file_1=fopen("prova.txt","r+");
    if(punt_file_1==NULL){
        cout<<"The file can't be opened.";
        exit(1);
    }
    car1=fgetc(punt_file_1);
    while(car1!=EOF){
        putchar(car1);//display the character on screen

    }
}