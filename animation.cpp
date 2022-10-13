#include<graphics.h>
#include<conio.h>
int main()
{
    initwindow(1000,1000,"Animation");
    while(1){
    readimagefile("h4.jpg",0,0,1000,1000);
    delay(1000);
    readimagefile("h3.jpg",0,0,1000,1000);
    delay(1000);
    readimagefile("h2.jpg",0,0,1000,1000);
    delay(1000);
    readimagefile("h1.jpg",0,0,1000,1000);
    delay(1000);
    readimagefile("h5.jpg",0,0,1000,1000);
    delay(1000);
    }

    getche();
}

