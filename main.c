#include <stdio.h>

typedef struct {
	int x;
	int y;
	int width;
	int height;
} Rectangle;

void print_rectangle(Rectangle* rectangle) {
	set_cursor(rectangle->x, rectangle->y);
	char top_bottom[rectangle->width + 1];
	memset(top_bottom, '-', rectangle->width);
	top_bottom[rectangle->width] = '\0';
	printf(top_bottom);

}

void set_cursor(int x, int y) {
	printf("\033[x:yH");
}

int main() {
	printf("Hello, World!\n");
return 0;
}
