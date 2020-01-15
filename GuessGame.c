#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

  int num, guess , count=0;
  srand((unsigned int)time(NULL));
  num=rand()%10+1;
  printf("Guess game\n");
  printf("You can type 0 to leave at any time\n");
  printf("Enter number between 1 and 10: ");
  scanf("%d",&guess);
  while(guess!=0)
  {
    count+=1;
    if (guess>num)
    printf("higher!\n");
    else if (guess<num)
    printf("lower!\n");
    else 
    printf("congrt! %d is the answer!You got right in %d guesses\n ", guess , count);
    printf("Enter number between 1 and 10:");
    scanf("%d", &guess);

  }

  printf("Bye\n");
  return 0;
}
