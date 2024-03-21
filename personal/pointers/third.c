#include <stdio.h>
#include <string.h>

struct tag {
  char lname[20];
  char fname[20];
  int age;
  float rate;
};

struct tag my_struct;
void show_name(struct tag *p);

int main() {
  struct tag *st_ptr;
  st_ptr = &my_struct;
  
  strcpy(my_struct.lname, "Dompeh");
  strcpy(my_struct.fname, "Bright");
  
  show_name(st_ptr);

  return 0;
}

void show_name(struct tag *p){
  printf("\n%s", p->lname);
  printf("%s\n", p->fname);
}
