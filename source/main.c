/**
* Project:make C project a command
* Auther:Harupyon
* Version:0.0.1
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#define MAIN_SOURCE_CODE "/**\n* Project:\n* Auther:\n* Version:\n*/\n#include <stdio.h>\n#include <stdlib.h>\n#include ""header/function.h""\nint main(void){\n    \n    return 0;\n}"
#define FUNCTION_SOURCE_CODE "int function(){\n    return 0;\n}"
#define HEADER_SOURCE_CODE "int function();" 
int main(int argc, char *argv[]){
    char *project_dir=argv[1];
    char source_dir[64];
    char header_dir[64];
    sprintf(source_dir, "%s/%s", project_dir, "source");
    sprintf(header_dir, "%s/%s", project_dir, "header");
    mkdir(project_dir, 0777);
    mkdir(source_dir, 0777);
    mkdir(header_dir, 0777);
    FILE *file;
    char main_source[64];
    char function_source[64];
    char header_source[64];
    sprintf(main_source, "./%s/source/main.c", project_dir);
    sprintf(function_source, "./%s/source/function.c", project_dir);
    sprintf(header_source, "./%s/header/function.h", project_dir);
    file=fopen(main_source,"w");
    fprintf(file, MAIN_SOURCE_CODE);
    fclose(file);
    file=fopen(function_source,"w");
    fprintf(file, FUNCTION_SOURCE_CODE);
    fclose(file);
    file=fopen(header_source,"w");
    fprintf(file, HEADER_SOURCE_CODE);
    fclose(file);


    return 0;
}