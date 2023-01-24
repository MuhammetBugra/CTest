#include <stdio.h>
#include <stdlib.h>

//---- BUBBLE SORT ALGORITMASI ----//
void bubble(int array[],int size) {
    int i,j,temp;
    for(i=1;i<size;i++) {
        for(j=0;j<size-i;j++) {
            if(array[j]>array[j+1]) {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp; } } }
    for(i=0;i<size;i++)
        printf("%d ",array[i]); }
        
//---- SELECTION SORT ALGORITMASI ----//
void selection(int array[],int size) {
    int i,j,temp,min;
    for(i=0;i<size-1;i++) {
        min=i;
        for(j=i+1;j<size;j++) {       
            if(array[j]<array[min])
                min=j; }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp; }
    for(i=0;i<size;i++)
        printf("%d ",array[i]); }

//---- INSERTION SORT ALGORITMASI ----//
void insertion(int array[],int size) {
    int i,j,temp;
    for(i=0;i<size;i++) {
        for(j=0;j<i+1;j++) {
            if(array[j]>array[i]) {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp; } } }
    for(i=0;i<size;i++)
        printf("%d ",array[i]); }

void main() {
    int dizi[]={9,4,6,2,8,1};   
    bubble(dizi,6);
    puts("");
    selection(dizi,6);
    puts("");
    insertion(dizi,6);
}
