#include<stdio.h>
#include<stdlib.h>



char * read_line(){
	   char* line  = NULL  ,*prevLine = NULL , simbol;
	   int count = 0 , i;

	   while(scanf("%c" , &simbol) != EOF){

		if(prevLine != NULL)
		        free(prevLine);

        prevLine = (char*)malloc(sizeof(char) * count);

   	    for (int j = 0; j < count; ++j)
   	    {
   	    	prevLine[j] = line[j];
   	    }

        count++;

        if(line != NULL)
        free(line);
 
        line = (char*)malloc(sizeof(char)*count);
        
        for (i = 0; i < count - 1; ++i)
        {
        	line[i] = prevLine[i];
        }
        line[i] = simbol;
   }
    return line;
}





int main(){
     freopen("input.txt" , "r" , stdin);
     freopen("output.txt" , "w" , stdout);

     char *line  = NULL;
     line = read_line();
     printf("%s\n", line );




	return 0;
}