#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
#include <string.h>

#include <stdio.h>     //// include required header files
#include <string.h>


int main(void)
{
    // файл чтения
    char * filename = "sam.txt";
    // буфер для считавания данных из файла
    char buffer[256];
    // чтение из файла
    FILE *fp = fopen(filename, "r");
    //fseek(fp, 11, SEEK_END);
    if(fp)
    {
        // пока не дойдем до конца, считываем по 256 байт
        while((fgets(buffer, 256, fp))!=NULL)
        {
            printf("%s", buffer+strlen(buffer)/2);
        }
        
        fclose(fp);
    } 
}