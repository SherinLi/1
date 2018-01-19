#include <stdio.h>



enum paper{
    newspaper = 1,
    magazine,
    book,
    etc};

struct rectangle {
    int height, width, square;
};

union MP3{
    unsigned int condition;
    struct{
        unsigned int play:1;
        unsigned int pause :1;
        unsigned int record :1;
    } state;
} MP3;


int main() {

    struct rectangle a;

    a.height = 5;
    a.width = 7;
    a.square = a.height* a.width;
    printf("%d\n",newspaper);
    printf("%d\n",a.square);
    scanf("%x", &MP3.condition);
    printf("1.%s\n2.%s\n3.%s\n", MP3.state.play? "OFF" : "ON", MP3.state.pause ? "OFF" : "ON", MP3.state.record ? "OFF" : "ON");

    return 0;

}
