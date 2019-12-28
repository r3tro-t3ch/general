#include <stdio.h>
#include <sys/ioctl.h>
#include <time.h>
#include <stdlib.h>

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

int main(int argc, char * argv[]){
  struct winsize w;
  ioctl(0, TIOCGWINSZ, &w);
  int col_size = w.ws_col;

  char* box[7][col_size];

  //box init
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      box[i][j] = " ";
    }
  }


  //adding "*" in box
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){

      if(i == 0 || i == 6){
        box[i][j] = "*";
      }
      if(j == 0 || j == col_size-1){
        box[i][j] = "*";
      }

    }
  }

  system("clear");


  //printing the box
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
      delay(1);
    }
    printf("\n");
    delay(2);
  }


  //start of animation
  system("clear");

  //adding text in the box
  int mid_point = col_size/2;
  int start = mid_point - 8;
  box[3][start] = "*";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "*";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "H";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "e";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "l";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "l";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box;
  box[3][start] = "o";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = " ";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "V";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "i";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "s";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "h";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "n";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "u";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "*";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = "*";
  start++;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(350);

  //ending of animation

  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //adding text in the box
  box[3][start] = " ";
  start--;

  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  //END
  for(int j = 0;j < col_size;j++){
    box[6][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  for(int j = 0;j < col_size;j++){
    box[5][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  for(int j = 0;j < col_size;j++){
    box[4][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  for(int j = 0;j < col_size;j++){
    box[3][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  for(int j = 0;j < col_size;j++){
    box[2][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  for(int j = 0;j < col_size;j++){
    box[1][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);


  for(int j = 0;j < col_size;j++){
    box[0][j] = " ";
  }
  //printing the box
  system("clear");
  for(int i = 0;i < 7;i++){
    for(int j = 0;j < col_size;j++){
      printf("%s",box[i][j]);
    }
    printf("\n");
  }
  delay(80);

  return 0;
}
