#include <stdio.h>

int main(int argc, char ** argv)
{
 if(argc == 1) printf("\n syntax: %s [your text here]\n\n", argv[0]);
 else
 {
	 printf("\n you passed [%s]\n\n", argv[1]);
 }
 return(0);
}
