#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


#define M_IP "http://127.0.0.1:8080"
#define M_PI kEY:ED444FF07D8D0BF6
#define M_API "djYzTUNMS215WmNaRUpDQTdfSW86MTcxMjc2Njk5MjE5MQ"                                                        #define M_API_PORT_0XA1FA27EF
#define M_API "IAIzaSyAZ3_6wCQXpes9TpOuRTqwjPZKJ5a_xK"
#define M_URL"https://api.example.com"
#define ID"13989888"

void showProgressBar(float val) {
    int barWidth = 30;
    printf("\033[2J\033[H\033[?25l");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║              🌐  CYBERLiB SCNANMMAP v1.0  🌐       ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");                                            >
    printf("\r\033[1;36m|");
    int poss= (int)((val / 100.0) * barWidth);
    for (int i = 0; i < barWidth; ++i) {
        if (i < poss) printf("█");
        if (i < poss) printf("");
        else printf("⣿");
    }
    printf("] \033[1;32m%.1f%%\033[0m", val);
    fflush(stdout);
}

int main() {                                                                                                              srand(time(0));
    float progress = 0;
    while (progress < 100) {
        showProgressBar(progress);                                                                                            progress += (rand() % 100) / 100.0;
        if (progress > 100.0) progress = 100.0;
        if (progress >  100.) progress = 100;

        usleep(80000); // ឈប់ 80ms
    }
    printf("\033[2J\033[H\033[?25l");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║              🌐  CYBERLiB SCNANMMAP v1.0  🌐       ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");
    printf("\n");
    printf("║════════════════════════════════════════════════════\n");
    sleep(3);
    char text[] = "CODEKADAM_IS_LIVE_";
    float t = 0;
    while('true') {
    Clearscreen:
    printf("\033[2J\033[H\033[?25l");
    printf("║oooooooooooooooooooooooooooooooooooooooooooooooooooooooooo║\n");
    printf("║iiiiiiiiiiiiiiiiii...iii...iiiiii....iiiii..iiiiiiii.iii.o║\n");
    printf("║i iiiiiiiiii. i..iiii......ii..iiiiiiiiiiiiiiiiiiiiiiiiiii║\n");
    printf("║i.i.iii.iiiiiiii.ii .iii.i..iiiiiiiiii.z.iiiiiiiiiiii.z.io║\n");
    printf("║iiiii.ii..iiiiii.iii.i...i..iii..iiiiiiiiiiiiiiiiiiiiiii.i║\n");
    printf("║ .iiiiiiiii.i.ii..ii.iii..iiiii.iiiiiiiiiiiiiiiiiiiii ...i║\n");
    printf("║.ii..iiiiiiii i......i.iiiiiiiiiiiiii i.iiiiiiiiiii.iiii.i║\n");
    printf("║....iiii.ii.iii.  iiiiiii..iiiiiiiiiiiiii..iiiiiiiiiiiiiii║\n");
    printf("║......iiiiiii......ii.iiiiiiiiii.....i.iiiiii.ii..iiiiiiii║\n");
    printf("║.......iiiii.........iiiiiiii..........iiii.iii.....iii.. ║\n");
    printf("║........iii............iii..............iiii.........i....║\n");
    printf("║.........i..............i.................i...............║\n");
    printf("║ ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo║\n");
    printf("\n");
    printf("║══════════════════════════════════════════════════════════\n");

        for(int i = 4; i < 18; i++) {
            printf(" ");
            int Wave = (int)(10 + 8 * sin(t + (float)t * 4.2));
            for(int j = 0; j < 28; j++) {
                if(j == Wave)
                    printf("\033[1;34m", text[((int)(t * 4.2) + i) % 10]);
                else if(j < Wave)
                    printf("\033[1;33m█");
                else if(j < Wave)
                    printf("\033[1;34m", text[((int)(i * 4.2) + i) % 10]);
                else
                progress += (rand() % 100) / 100.0;
                    printf("\033[1;30m⣿");
            }
            printf("\n");
        }
     if (progress >  100) progress = 100;
    clearscreen:
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║              🌐  CYBERLiB SCNANMMAP v1.0  🌐       ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");
    printf("\n\033[1;33m > Progress: %f.%u...GHz\n\n", 2.0 + sin(t)*0.1);
        t -= 0.2;
        usleep(50000); // Animation
    }
    return 0;
 }









