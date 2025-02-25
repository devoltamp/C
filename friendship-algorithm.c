// The friendship algorithm by Dr. Sheldon Lee Cooper from The Big Bang Theory
#include <stdio.h>
#include <unistd.h>

void clear_input_buffer() {
    while (getchar() != '\n'); // Clears leftover input
}

char get_user_response(const char *question) {
    char response;
    printf("%s [y/n]: ", question);
    scanf(" %c", &response);
    clear_input_buffer();
    return response;
}

int main()
{
  char a, b, c, d, e, f;
  char response;
  int n = 0;
  int hastag1 = 21;
  int hastag2 = 47;
  int i;
  int j;


  printf("WELCOME TO SHELDON COOPER'S FREINDSHIP ALGORITHM!! \n");

  printf("Place phone call... \n");
  sleep(1);

  printf("Is the person home? \n");
  sleep(1);

  printf("[y/n] \n");
  a = getchar();

  if (a == 'y' || a == 'Y')
  {
    sleep(1);
    printf("Would you like to share a meal? \n");
  }
  else
  {
    // sleep(1);
    printf("Leave message \n");
    sleep(1);

    printf("Wait for the call back\n");
    sleep(1);

    printf("Would you like to share a meal? \n");
    sleep(1);
  }

  // The second part start

  // printf("WHAT IS THE RESPONSE? \n");
  // sleep(1);

  printf("[y/n] \n");

  scanf("%s", &b);

  if (b == 'y' || b == 'Y')
  {
    // sleep(1);
    printf("Dine together \n");
    sleep(1);
  }
  else
  {
    // The third part starts

    printf("Do you enjoy a hot beverage? \n");
    sleep(1);
    // printf("WHAT IS THE RESPONSE? \n");
    printf("[y/n] \n");
    scanf("%s", &c);

    if (c == 'y' || c == 'Y')
    {
      printf("Tea? \n");
      sleep(1);
      printf("[y/n] \n");
      // sleep(0.5);
      scanf("%s", &d);

      if (d == 'y' || d == 'Y')
      {
        printf("Let's have tea. \n");
      }
      else
      {
        printf("Coffee? \n");
        sleep(1);
        printf("[y/n] \n");
        scanf("%s", &e);

        if (e == 'y' || e == 'Y')
        {
          printf("Let's have Coffee \n");
        }
        else
        {
          printf("Cocoa? \n");
          sleep(1);
          printf("[y/n] \n");
          sleep(0.5);
          scanf("%s", &f);
          if (f == 'y' || f == 'Y')
          {
              printf("Let's have Cocoa! \n");
          }
          else
          {
            sleep(1);
            while (1)
            {
                printf("N = %d \n", n);
                response = get_user_response("Tell me one of your interests.");

                if (get_user_response("Do I share that interest?") == 'y')
                {

                    // for (j = 1; j <= hastag2; j++)
                    // {
                    //   printf("#");
                    // }
                    // printf("\n");
                    printf("Why don't we do that together?\n");
                    printf("\n");
                    printf("#######################\n");
                    printf("Friendship established!\n");
                    printf("#######################\n");
                    // for (j = 1; j <= hastag2; j++)
                    // {
                    //   printf("#");
                    // }
                    // printf("\n");
                    break;
                }
                else
                {
                    n++;
                    if (n >= 6) {
                        printf("Choosing the least objectionable interest...\n");
                        sleep(1);
                        printf("Friendship established through shared activity!\n");
                        break;
                    }
                    else
                    {
                      printf("We can partake in interest!");
                      for (j = 1; j <= hastag2; j++)
                      {
                        printf("#");
                      }
                      printf("\n");
                      // printf("###############################################\n");
                      printf("Friendship established through shared activity!\n");
                      // printf("###############################################\n");
                      for (j = 1; j <= hastag2; j++)
                      {
                        printf("#");
                      }
                      printf("\n");
                    }
                }
            }
          }

          return 0;
          }
        }
      }
      else
      {
        sleep(1);
        while (1)
        {
            printf("N = %d \n", n);
            response = get_user_response("Tell me one of your interests.");

            if (get_user_response("Do I share that interest?") == 'y')
            {
                printf("Why don't we do that together?\n");
                printf("\n");
                printf("#######################\n");
                printf("Friendship established!\n");
                printf("#######################\n");
                break;
            }

            else
            {
                n++;
                if (n >= 6)
                {
                    printf("Choosing the least objectionable interest...\n");
                    sleep(1);
                    printf("Friendship established through shared activity!\n");
                    break;
                }
                  else
                    {
                      for (i = 1; i <= hastag1; i++)
                      {
                        printf("#");
                      }
                      printf("\n");
                      printf("We can not be Friends \n");
                      for (i = 1; i <= hastag1; i++)
                      {
                        printf("#");
                      }
                      printf("\n");
                      break;
                    }
                }
            }
           // else
           // {
           //   for (i = 1; i <= hastag1; i++)
           //   {
           //     printf("#");
           //   }
           //   printf("\n");
           //   printf("We can not be Friends \n");
           //   for (i = 1; i <= hastag1; i++)
           //   {
           //     printf("#");
           //   }
           //   printf("\n");
           // }
      }
    }
    return 0;
}
