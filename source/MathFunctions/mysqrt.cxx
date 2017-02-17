
#include <stdio.h>
#include <math.h>

// if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
  result = exp(log(x)*0.5);
#endif // otherwise use an iterative approach

double mysqrt(double inputValue){
	return sqrt(inputValue);
}

int main (int argc, char *argv[]){
	return 0;
}
