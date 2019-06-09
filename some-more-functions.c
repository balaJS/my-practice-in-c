#include <stdio.h>
#include <string.h>
#include <time.h>

struct Person {
  char id[4];
  char name [30];
  char title [30];
  char company [30];
  char joining_date [30];
  char current_time [30];
};


int add_value(int a, int b);
int add_value_using_array(int numbers[3], int length);
int add_value_using_pointer(int *pointer, int length);
struct Person set_prop(struct Person developer, char dev_data[6][30]);
void dispaly_dev(struct Person dev);

void main() {
    // Working fine :)
    // printf("Total value is %d \n", add_value(10, 30));

    // Working fine :)
    // int numbers[3] = {12, 23, 45};
    // int length = sizeof(numbers) / sizeof(*numbers);
    // printf("Total value of array method  %d \n", add_value_using_array(numbers, length));

    // Working fine :)
    // int numbers[3] = {12, 23, 45};
    // int length = sizeof(numbers) / sizeof(*numbers);
    // printf("Total value of pointer method  %d \n", add_value_using_pointer(numbers, length));

    // Working fine :)
    // int numbers[5] = {12, 23, 45, 20, 50};
    // printf("Length of given array using method %ld \n", sizeof(numbers) / sizeof(*numbers));
    
    // working fine. We get univarsal time from below code.
    // time_t current_time;
    // time(&current_time);
    // printf("%s \n", asctime(gmtime(&current_time)));

    struct Person bala, dennis;
    
    time_t seconds;
    struct tm* current_time;
    seconds = time(NULL);
    current_time = localtime(&seconds);
    char formatted_time[30];
    // sprintf(formatted_time, "%d:%d:%d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    // sprintf(formatted_time, "%02d:%02d:%02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    //printf("Current time %s \n", formatted_time);
    
    char bala_data[6][30] = {"1", "Bala", "C programmer", "Bell lab", "Not yet:)", "dummy:not_working:#fix it soon"};
    bala = set_prop(bala, bala_data);
    dispaly_dev(bala);

    char dennis_data[6][30] = {"2", "Dennis", "C programmer", "Bell lab", "I don't know", "dummy:not_working:#fix it soon"};
    dennis = set_prop(dennis, dennis_data);
    dispaly_dev(dennis);
    // printf("See %s \n", bala.name);

}

int add_value(int a, int b) {
    return a + b;
}

int add_value_using_array(int numbers[3], int length) {
    int total = 0;

    for (int i = 0; i < length; i++) {
        total += numbers[i];
    }

    return total;
}

int add_value_using_pointer(int *pointer, int length) {
    int total = 0;

    for(int j= 0; j < length; j++) {
        total += pointer[0];
        pointer++;
    }
    return total;
}

struct Person set_prop(struct Person developer, char dev_data[6][30]) {
  strcpy(developer.id, &dev_data[0][0]);
  strcpy(developer.name, &dev_data[1][0]);
  strcpy(developer.title, &dev_data[2][0]);
  strcpy(developer.company, &dev_data[3][0]);
  strcpy(developer.joining_date, &dev_data[4][0]);

  time_t seconds;
  struct tm* current_time;
  seconds = time(NULL);
  current_time = localtime(&seconds);
  char formatted_time[30];
  snprintf(formatted_time, 30, "%d:%d:%d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);

  strcpy(developer.current_time, formatted_time);

  return developer;
}

void dispaly_dev(struct Person dev) {
  printf("Developer's ID => %s \n", dev.id);
  printf("Developer's name => %s \n", dev.name);
  printf("Developer's title => %s \n", dev.title);
  printf("Developer's company => %s \n", dev.company);
  printf("Developer's joining date => %s \n", dev.joining_date); 
  printf("Current time => %s \n", dev.current_time);
}
