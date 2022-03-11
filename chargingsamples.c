#include <stdio.h>

int numberofConsecutiveRanges=0;

void sortArray(int samplearray[], int samplesize){
 int i, j, a;
 for (i = 0; i < samplesize; ++i){
      for (j = i + 1; j < samplesize; ++j){
         if (samplearray[i] > samplearray[j]){
            a = samplearray[i];
            samplearray[i] = samplearray[j];
            samplearray[j] = a;
         }
      }
   }
 } 
 
 
 /*int getcountofcontinousrange(int samplearray[],int samplesize ){
  
  int diff ;
  int continuouscount =1;
 int lowerrange = samplearray[0];
 
  for(i=0; i<= samplesize ;i++){
     diff = samplearray[i+1]- samplearray[i];
     if((diff == 0) || (diff == 1) 
        {
          continuouscount++;
        }
        else
        {
          continuouscount = 1;
        }
    }
  return continuouscount;
}*/


void sortRange(int samplearray[], int samplesize){

int i;
int lowerindex, upperindex;
for (i=0; i < samplesize)
 {
 lowerindex =i;
 
 while (((samplearray[i+1] - samplearray[i] ==0)||(samplearray[i+1] - samplearray[i] ==1))&&(i < samplesize){
 i++;
 }
 upperindex =i;
 determineRangeAndCount(lowerindex, upperindex);
 numberofConsecutiveRanges++;
 i++;
 }
}

determineRangeAndCount(int lowerindex,int upperindex);
