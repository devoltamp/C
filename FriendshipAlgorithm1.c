// The friendship algorithm by Dr. Sheldon Lee Cooper from The Big Bang Theory
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void clearbuffer()
{
  while (getchar() != '\n')
    ;
}

char uresponse(const char *question)
{
  char response;
  printf("%s [y/n]: ", question);
  scanf(" %c", &response);
  clearbuffer();
  return response;
}

int main()
{
  char a, b, c, d, e, f, g;
  char response;
  int i,j;
  int hastag = 47;

  //The ART
  FILE *file = fopen("banner.txt", "r");
  if (!file)
  {
    printf("Error: Could not open banner file.\n");
    return 1;
  }

  char line[256];
    printf("\033[1;36m");
  while (fgets(line, sizeof(line), file))
  {
    printf("%s", line);
  }
  printf("\033[0m");
  fclose(file);

  // START
  printf("\n");
  printf("\033[1;32mWELCOME TO SHELDON COOPER'S FRIENDSHIP ALGORITHM!!\033[0m\n\n");

  printf("Place phone call...\n");
  sleep(1);

  a = uresponse("Is the person home?");
  if (a == 'y' || a == 'Y')
  {
    sleep(1);
    printf("Would you like to share a meal?\n");
  }
  else
  {
    printf("Leave message...\n");
    sleep(1);
    printf("Wait for the call back...\n");
    sleep(1);
    printf("Would you like to share a meal?\n");
  }

  b = uresponse("Your response");
  if (b == 'y' || b == 'Y')
  {
    printf("Dine together\n");
    printf("#######################\n");
    printf("\033[1;5;32mFriendship established!\033[0m\n");
    printf("#######################\n");
    sleep(1);
  }
  else
  {
    // Beverage path
    c = uresponse("Do you enjoy a hot beverage?");
    if (c == 'y' || c == 'Y')
    {
      d = uresponse("Tea?");
      if (d == 'y' || d == 'Y')
      {
        printf("Let's have tea.\n");
      }
      else
      {
        e = uresponse("Coffee?");
        if (e == 'y' || e == 'Y')
        {
          printf("Let's have coffee.\n");
        }
        else
        {
            f = uresponse("Cocoa?");
            if (f == 'y' || f == 'Y')
            {
              printf("Let's have cocoa!\n");
              printf("#######################\n");
              printf("\033[1;5;32mFriendship established!\033[0m\n");
              printf("#######################\n");
            }
            else
            {
              // Interest sharing fallback
              sleep(1);
                do
                {
                  for(int i=1; i<=6; i++)
                  f = uresponse("Tell me one of your interests.");
                  if(f =='y'||f =='Y')
                  {
                    g = uresponse("Do I share that interest?");
                    if (g=='y'||g=='Y')
                    {
                      printf("Why don't we do that together?\n");
                      printf("\n");
                      printf("We can partake in that interest anyway!\n");
                      for (j = 1; j <= hastag; j++)
                      {
                        usleep(50000);
                        printf("#");
                        fflush(stdout);
                      }
                      printf("\n");
                      printf("\033[1;5;32mFriendship established through shared activity!\033[0m\n");
                      for (j = 1; j <= hastag; j++)
                      {
                        usleep(50000);
                        printf("#");
                        fflush(stdout);
                      }
                      printf("\n");
                      // printf("#######################\n");
                      // printf("\033[1;5;32mFriendship established!\033[0m\n");
                      // printf("#######################\n");
                      // // break;
                    }
                    else{
                    printf("Try Again!");
                    }
                  }
                else
                {
                  printf("#####################\n");
                  printf("\033[1;5;31mWe can not be Friends.\033[0m\n");
                  printf("#####################\n");
                }
                }
                  while (i<6);
                  // {
                  //   /* code */
                  // }
                  
                  //   g = uresponse("Do I share that interest?");
                  // if(f=='y'||f=='Y')
                  // {
                    
                  //   // break;
                  // }
                  
            }
          }
        }
      }
    }
  }
    else
    {
      printf("#####################\n");
      printf("\033[1;5;31mWe can not be Friends.\033[0m\n");
      printf("#####################\n");
    }
  }
  return 0;
}
