#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
    
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    int count = 1;
    fp = fopen("front.txt", "r");
    if (fp != NULL) {    

	    while ((read = getline(&line, &len, fp)) != -1) {
	    	printf("%d\n", count);
	        printf("Retrieved line of length %zu :\n", read);
	        printf("%s", line);
	        count++;
	    }
	}
    fclose(fp);
    if (line)
        free(line);
    return 0;
}
