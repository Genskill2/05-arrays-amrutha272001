/* Enter your solutions in this file */
#include <stdio.h>
float avg(int[],int){
  int a;
  float sum =0.0;
  for(a=0;a<int;a++){
    sum=sum+int[a];
    }
  sum=sum/int;
  return sum;
  }

int max(int[],int){
  int a, highest=0;
  for (a=0;a<int;a++){
    if(int[a]> highest)
      highest=int[a];
    }
  return highest;
  }

int min(int[],int){
  int a,lowest=0;
  for(a=0;a<int;a++){
    if(int[a]<lowest)
      lowest=int[a];
    }
  return lowest;
  }

int mode(int[],int){
  int num=0,n,counts[];
  for(a=0;a<int;a++){
    if(int[a]==int[0])
      num++;
    
