#include <stdio.h>

int main() {

    int d1,h1,m1,s1;
    int d2,h2,m2,s2;
    char word[10];
    scanf("%s %d",word,&d1);
    scanf("%d %*c %d %*c %d",&h1, &m1, &s1);
    scanf("%s %d",word,&d2);
    scanf("%d %*c %d %*c %d",&h2, &m2, &s2);
    int days,hours,minutes,seconds;

    seconds = s2-s1;
    if(seconds < 0){
        seconds += 60;
        m2--;
    }
    minutes =  m2-m1;
    if(minutes < 0){
        minutes += 60;
        h2--;
    }
    hours = h2-h1;
    if(hours < 0){
        hours += 24;
        d2--;
    }
    days = d2-d1;

    printf("%d dia(s)\n",days);
    printf("%d hora(s)\n",hours);
    printf("%d minuto(s)\n",minutes);
    printf("%d segundo(s)\n",seconds);
    return 0;
}
