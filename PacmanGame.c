#include <stdio.h> // printf()
#include <conio.h> // getch()
#include <windows.h>
#include <stdbool.h>

#define H 30
#define W 60
#define NR_GHOSTS 5

struct coord
{
   int x;
   int y;
};

struct PacMan {
   struct coord position;
   int vx;
   int vy;
   int lives;
   bool chasing;
   int food_collected;
};


struct Ghost {
   struct coord position;
   int vx;
   int vy;
   bool chasing;
};


struct Ghost allGhosts[NR_GHOSTS];

struct PacMan myPacMan = {
                           {
                              .x = 1,
                              .y = 1,
                           },
                           .vx = 0,
                           .vy = 0,
                           .lives = 3,
                           .chasing = false,
                           .food_collected = 0
                         };

char playfield[H][W] =
{
   { "############################################################" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "#        # # # # #          #             # # # # # #      #" },
   { "#        #       #         # #            #                #" },
   { "#        #       #        #   #           #                #" },
   { "#        # # # # #       #     #          #                #" },
   { "#        #              # # # # #         #                #" },
   { "#        #             #         #        #                #" },
   { "#        #            #           #       #                #" },
   { "#        #           #             #      #                #" },
   { "#        #          #               #     # # # # # #      #" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "#        ##        ##           #          ##        #     #" },
   { "#        # #      # #          # #         # #       #     #" },
   { "#        #  #    #  #         #   #        #  #      #     #" },
   { "#        #    # #   #        #     #       #   #     #     #" },
   { "#        #     #    #       # # # # #      #    #    #     #" },
   { "#        #          #      #         #     #     #   #     #" },
   { "#        #          #     #           #    #      #  #     #" },
   { "#        #          #    #             #   #       # #     #" },
   { "#        #          #   #               #  #        ##     #" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "#                                                          #" },
   { "############################################################" }
}; // <-- CAUTION! Semicolon necessary!


void initialize()
{
   // 1. replace each empty field in the playfield
   //    with a food field
   for (int i = 0; i < H; i++)
   {
      for (int j = 0; j < W; j++)
      {
         if (playfield[i][j]==' ')
            playfield[i][j] = '.';
      }
   }

   // 2. initialize all ghosts
   for (int i = 0; i < NR_GHOSTS; i++)
   {
      allGhosts[i].vx = 0;
      allGhosts[i].vy = 0;
      allGhosts[i].chasing = true;

      // try to find a (x,y) coordinate randomly where a food piece is
      int x,y;
      do
      {
         x = 1 + rand() % (W-1);
         y = 1 + rand() % (H-1);

      } while (playfield[y][x] != '.');
      allGhosts[i].position.x = x;
      allGhosts[i].position.y = y;
      playfield[y][x] = 'G';

   }


} // initialize


void user_input()
{
   if (_kbhit())
   {
      char c1 = _getch();

      if (c1 == -32)
      {
         char c2 = _getch();

         myPacMan.vx = 0;
         myPacMan.vy = 0;

         switch (c2)
         {
            case 72: myPacMan.vy = -1; break; // cursor up
            case 80: myPacMan.vy = +1; break; // cursor down
            case 75: myPacMan.vx = -1; break; // cursor left
            case 77: myPacMan.vx = +1; break; // cursor right
         }
      }


      //printf("c1=%d c2=%d\n", c1, c2);

   }
}


void move_figures()
{
   // 1. delete PacMan from old position
   playfield[myPacMan.position.y][myPacMan.position.x] = ' ';

   // 2. compute new desired coordinate (nx,ny)
   int nx = myPacMan.vx + myPacMan.position.x;
   int ny = myPacMan.vy + myPacMan.position.y;

   // 3. test whether there is a wall at (nx,ny)
   if (playfield[ny][nx] == '#')
   {
      // Damn! There is a wall! Stop PacMan!
      myPacMan.vx = 0;
      myPacMan.vy = 0;
   }

   // 4. update PacMan's coordinate
   myPacMan.position.x += myPacMan.vx;
   myPacMan.position.y += myPacMan.vy;

   // 5. is there a food piece at the new location?
   if (playfield[ny][nx] == '.')
   {
      myPacMan.food_collected++;
   }

   // 6. put PacMan back again to playfield
   playfield[myPacMan.position.y][myPacMan.position.x] = 'P';


}


void check_for_collisions()
{

}


void show_playfield()
{
   for (int i = 0; i < H; i++)
   {
      for (int j = 0; j < W; j++)
      {
         printf("%c", playfield[i][j]);
      }
      printf("\n");
   }

   printf("Score: %d\n", myPacMan.food_collected);
}


// Set cursor position in console
// see http://www.dreamincode.net/forums/topic/153240-console-cursor-coordinates/
void set_cursor_position(int x, int y)
{
   //Initialize the coordinates
   COORD coord = { x, y };
   //Set the position
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

} // set_cursor_position


void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}


int main()
{
   system("cls");



   hidecursor();
   initialize();

   while (1)
   {
      user_input();
      move_figures();
      check_for_collisions();
      show_playfield();

      Sleep( 1000 / 30 );
      set_cursor_position(0,0);
   }

} // main
