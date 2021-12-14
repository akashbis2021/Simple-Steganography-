#include <stdio.h>
#include <stdlib.h> 
  
int main()
{
    FILE *fp1, *fp2;
    char filename[100], c;
  
    printf("Enter the Attackfile to open for reading \n");
    scanf("%s", filename);
  
   
    fp1 = fopen(filename, "r");  // file for reading
  
    printf("Enter the Targetfile to open for writing \n");
    scanf("%s", filename);
  
   
    fp2 = fopen(filename, "a");  // Open another file for writing
    
    
    c = fgetc(fp1); // Read contents from file
    while (c != EOF)
    {
        fputc(c, fp2);
        c = fgetc(fp1);
    }
  
    printf("\nContents copied to %s", filename);
  
    fclose(fp1);
    fclose(fp2);
    return 0;
}