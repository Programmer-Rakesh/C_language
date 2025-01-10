#include <stdio.h>


// WAP to create a file.

int main()
{
   FILE *filePointer;

   // Open a file in write mode
   filePointer = fopen("Abc.txt", "w");

   // Check if the file was successfully created
   if (filePointer == NULL){
      printf("File could not be created.\n");
      return 1;
   }

   // If successful
   printf("File created successfully.\n");
   // Close the file
   fclose(filePointer);

   return 0;
}


