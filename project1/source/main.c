/**
* Project:make C project a command
* Auther:Harupyon
* Version:0.0.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#define SORCE_CODE "/**\n* Project:\n* Auther:\n* Version:\n*/\n#include <stdio.h>\n#include <stdlib.h>\nint main(void){\n    \n    return 0;\n}"
int main(int argc, char *argv[]){
    char *project_dir=argv[1];
    char source_dir[64];
    char header_dir[64];
    sprintf(source_dir, "%s/%s", project_dir, "source");
    sprintf(header_dir, "%s/%s", project_dir, "header");
    mkdir(project_dir, 0777);
    mkdir(source_dir, 0777);
    mkdir(header_dir, 0777);
    FILE *source_file;
    char main_source[128];
    sprintf(main_source, "./%s/source/main.c", project_dir);
    source_file=fopen(main_source,"w");
    fprintf(source_file, SORCE_CODE);
    fclose(source_file);
    return 0;
}