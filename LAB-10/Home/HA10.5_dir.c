// WAP to display the files and sub-directories present in a specified directory.

#include <stdio.h> 
#include <dirent.h> 
  
int main(void) 
{ 
    struct dirent *de;  // Pointer for directory entry
  
    // opendir() returns a pointer of DIR type.
    DIR *dr = opendir("."); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory" ); 
        return 1;
    } 
  
    // for readdir() 
    while ((de = readdir(dr)) != NULL) 
            printf("%s\n", de->d_name); 
  
    closedir(dr);     
    return 0; 
} 
