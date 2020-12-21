// The overlay returns 1 if the given set can be partitioned ,0 if not
#include <string.h>
#include <math.h>

int PartitionNum(unsigned int,unsigned int, int* );

int CheckPartition(int* array) {

#pragma HLS INTERFACE s_axilite port=return bundle=sqrt
#pragma HLS INTERFACE m_axi depth=50 port=array offset=slave bundle=output
#pragma HLS INTERFACE s_axilite port=array

int buff[100];

unsigned int nPartitions = 1;
unsigned int n= array[0];

memcpy(buff,(const float*)array,(n+1)*sizeof(int));

for(int i = 0;i < n;i++) {
#pragma HLS pipeline II=1
   nPartitions = nPartitions * 2;
 }

nPartitions = nPartitions / 2;

 int solutionFound = 0;
 int solution = -1;
 for(unsigned int i = 1;i < (nPartitions);i++) {
#pragma HLS pipeline II=1
   	 if (PartitionNum(i,n,buff) == 1) {
     solutionFound = 1;
     solution = i;
     break;
   }
 }

 if (solutionFound) {
     return 1;
   }
   else {
     return 0;
   }

return 0;
}


// This function returns 1 if the number with the binary value can be partitioned or else 0
int PartitionNum( unsigned int value,unsigned int n, int *array) {
  int sum0s = 0;
  int sum1s = 0;
  unsigned int mask = 1;
  for(int i = 1;i <= n;i++) {
 #pragma HLS pipeline II=1
    if ((mask & value) != 0) {
      sum1s = sum1s + array[i];
    }
    else {
      sum0s = sum0s + array[i];
    }
    mask = mask * 2;

  }
  if (sum0s == sum1s)
     return 1;
  else
     return 0;
}
