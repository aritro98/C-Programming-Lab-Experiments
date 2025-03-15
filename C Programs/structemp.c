#include <stdio.h>
struct Emp 
{
  int id;
  int sal;
  char gen;
};
int main() 
{
  struct Emp emp1, emp2;
  printf("Enter details for the 1st Employee:\n");
  printf("ID:");
  scanf("%d",&emp1.id);
  printf("Salary:");
  scanf("%d",&emp1.sal);
  printf("Gender:");
  scanf("%c",&emp1.gen);
  printf("Enter details for the 2nd Employee:\n");
  printf("ID:");
  scanf("%d",&emp2.id);
  printf("Salary:");
  scanf("%f",&emp2.sal);
  printf("Gender:");
  scanf("%c",&emp2.gen);
  if (emp1.sal>emp2.sal) 
  {
    printf("Employee 1 has the highest salary:%d\n",emp1.id);
  } 
  else 
  {
    printf("Employee 2 has the highest salary:%d\n",emp2.id);
  }
  return 0;
}
