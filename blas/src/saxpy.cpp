#include <iostream>

#include "/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/Headers/cblas.h"

int main() {

  const int N = 10;
  float x[N], y[N];
  float alpha = 10;

  // initialize
  for ( int i=0; i<N; i++ ) {
    x[i] = i;
    y[i] = 2*i;
  }

  // y = alpha * x + y
  cblas_saxpy( N, alpha, x, 1, y, 1 );

  for ( int i=0; i<N; i++ )
    std::cout << y[i] << " should equal " << alpha*i + 2*i << std::endl;
  
  return 0;
  
}
