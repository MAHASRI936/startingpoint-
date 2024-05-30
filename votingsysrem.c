#include<stdio.h>
#include<string.h>


typedef struct {
 char fname[30];
 float vper;
 float vcount;
}code;


void main(){
 int n,vot,vots=0,tvots=0;
 printf("Enter No. of Field : ") && scanf("%d",&n);
 code arr[n+2];
 for(int i=0;i<n;i++){
 printf("Enter Field %d Name : ",i+1) && scanf("%s",arr[i].fname);
 }
 strcpy(arr[n].fname,"Nota");
 strcpy(arr[n+1].fname,"Is Voting Process Completed");
 printf("The Time for Voting has Started !!!\n");
 for(int i=0;i<=n+1;i++){
  arr[i].vcount=0;
  }
 while(n+2!=vot){
  printf("The persons are\n");
  for(int i=0;i<=n+1;i++){
  printf("%d. %s\n",i+1,arr[i].fname);
  }
  printf("\nYour Vote : ") && scanf("%d",&vot);
  if(vot<=n+1){
   vots++;
   arr[vot-1].vcount++;
  }else if(vot==n+2){
   break;
  }
  tvot++;
 }
 for(int i=0;i<=n+1;i++){
  arr[i].vper=((arr[i].vcount/vots)*100);
  }
 printf("Results :\n");
 for(int i=0;i<=n;i++){
  printf("%d. %s %0.3f%%\n\n",i+1,arr[i].fname,arr[i].vper);
  }
  printf("\n\nTotal %d\n",tvots);
  printf("missed Votes %d\n\n",tvots-vots);
}
