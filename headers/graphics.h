void printGrid(SDL_Renderer *, int, int n, int g[n][n], int);
void printText(char *, SDL_Renderer *, SDL_Point);
int nb_players_Message();
int Game_mode_multi_Message();
int Game_mode_3_Message(int Game_mode, int Game_mode_multi);
int Game_size_grid_Message(int Game_mode);
void resetScreen(SDL_Renderer *);
void hideGrid(SDL_Renderer *, int, int);
void createButton(char*, SDL_Renderer*, SDL_Point);
int EndPopUp(char*);