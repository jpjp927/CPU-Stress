
#include <stdio.h>
#include <omp.h>
#include <math.h>

// Size of memery use (byte)
#define s 14000000000   

int arr[s];

void Test( int &n )
{
  double d = 0.146;
  for( int i = 0; i < 1000; ++ i )
    for( int j = 0; j < 1000; ++ j )
      n = sqrt (i ^ n ^ i);
      d = d * d * d;   // float point calculation
}



int main(int argc, char *argv[])
{

    printf("Preparing ...\n");
    for( long long int i = 0; i < s; i ++){
        arr[i] = i;
    }

    printf("Start ! \n");
    for( long long int l = 0; l < s; l ++){
      #pragma omp parallel for
      for( long long int i = 0; i < s; i ++){
          Test( arr[i] );
      }
    }


return 0;
}