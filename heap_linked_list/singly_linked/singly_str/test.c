#include <stdio.h>
#include <stdlib.h>
#include "singly_str.h"

int main(){

singly_t* my_list = create_list();

printf("Testing push\n");

push(my_list, "Hello World\n", 13);

/*
push(my_list, 'b');
push(my_list, 'c');
push(my_list, 'd');
push(my_list, 'e');
push(my_list, 'f');
push(my_list, 'g');
push(my_list, 'h');
push(my_list, 'i');
push(my_list, 'j');
push(my_list, 'k');
push(my_list, 'l');

printf("Push Success\n\n");
*/


printf("Testing Pop\n");

const char* onep = pop(my_list);
printf("The Popped Value is %s\n", onep);
//free((void*) onep);


/*
char twop = pop(my_list);
printf("The Popped Value is %c\n", twop);

char threep = pop(my_list);
printf("The Popped Value is %c\n", threep);

char fourp = pop(my_list);
printf("The Popped Value is %c\n", fourp);

char fivep = pop(my_list);
printf("The Popped Value is %c\n", fivep);

char sixp = pop(my_list);
printf("The Popped Value is %c\n", sixp);

char sevenp = pop(my_list);
printf("The Popped Value is %c\n", sevenp);

char eightp = pop(my_list);
printf("The Popped Value is %c\n", eightp);

char ninep = pop(my_list);
printf("The Popped Value is %c\n", ninep);

char tenp = pop(my_list);
printf("The Popped Value is %c\n", tenp);

char elevenp = pop(my_list);
printf("The Popped Value is %c\n", elevenp);

char twelvep = pop(my_list);
printf("The Popped Value is %c\n", twelvep);

printf("Pop Success\n\n");


printf("Testing Enqueue\n");
enqueue(my_list, 'a');
enqueue(my_list, 'b');
enqueue(my_list, 'c');
enqueue(my_list, 'd');
enqueue(my_list, 'e');
enqueue(my_list, 'f');
enqueue(my_list, 'g');
enqueue(my_list, 'h');
enqueue(my_list, 'i');
enqueue(my_list, 'j');
enqueue(my_list, 'k');
enqueue(my_list, 'l');
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

char oneq = dequeue(my_list);
printf("The Dequeued Value is %c\n", oneq);

char twoq = dequeue(my_list);
printf("The Dequeued Value is %c\n", twoq);

char threeq = dequeue(my_list);
printf("The Dequeued Value is %c\n", threeq);

char fourq = dequeue(my_list);
printf("The Dequeued Value is %c\n", fourq);

char fiveq = dequeue(my_list);
printf("The Dequeued Value is %c\n", fiveq);

char sixq = dequeue(my_list);
printf("The Dequeued Value is %c\n", sixq);

char sevenq = dequeue(my_list);
printf("The Dequeued Value is %c\n", sevenq);

char eightq = dequeue(my_list);
printf("The Dequeued Value is %c\n", eightq);

char nineq = dequeue(my_list);
printf("The Dequeued Value is %c\n", nineq);

char tenq = dequeue(my_list);
printf("The Dequeued Value is %c\n", tenq);

char elevenq = dequeue(my_list);
printf("The Dequeued Value is %c\n", elevenq);

char twelveq = dequeue(my_list);
printf("The Dequeued Value is %c\n", twelveq);

printf("Dequeue Sucess\n\n");


printf("filling list to test Mix\n");

push(my_list, 'a');
push(my_list, 'b');
push(my_list, 'c');
push(my_list, 'd');
push(my_list, 'e');
push(my_list, 'f');
push(my_list, 'g');
push(my_list, 'h');
push(my_list, 'i');
push(my_list, 'j');
push(my_list, 'k');
push(my_list, 'l');

enqueue(my_list, 'M');
enqueue(my_list, 'N');
enqueue(my_list, 'O');
enqueue(my_list, 'P');
enqueue(my_list, 'Q');
enqueue(my_list, 'R');
enqueue(my_list, 'S');
enqueue(my_list, 'T');
enqueue(my_list, 'U');
enqueue(my_list, 'V');
enqueue(my_list, 'W');
enqueue(my_list, 'X');

printf("Testing Mix\n");


onep = pop(my_list);
printf("The Popped Value is %c\n", onep);
oneq = dequeue(my_list);
printf("The Dequeued Value is %c\n", oneq);

twop = pop(my_list);
printf("The Popped Value is %c\n", twop);
twoq = dequeue(my_list);
printf("The Dequeued Value is %c\n", twoq);

threep = pop(my_list);
printf("The Popped Value is %c\n", threep);
threeq = dequeue(my_list);
printf("The Dequeued Value is %c\n", threeq);

fourp = pop(my_list);
printf("The Popped Value is %c\n", fourp);
fourq = dequeue(my_list);
printf("The Dequeued Value is %c\n", fourq);

fivep = pop(my_list);
printf("The Popped Value is %c\n", fivep);
fiveq = dequeue(my_list);
printf("The Dequeued Value is %c\n", fiveq);

sixp = pop(my_list);
printf("The Popped Value is %c\n", sixp);
sixq = dequeue(my_list);
printf("The Dequeued Value is %c\n", sixq);

sevenp = pop(my_list);
printf("The Popped Value is %c\n", sevenp);
sevenq = dequeue(my_list);
printf("The Dequeued Value is %c\n", sevenq);

eightp = pop(my_list);
printf("The Popped Value is %c\n", eightp);
eightq = dequeue(my_list);
printf("The Dequeued Value is %c\n", eightq);

ninep = pop(my_list);
printf("The Popped Value is %c\n", ninep);
nineq = dequeue(my_list);
printf("The Dequeued Value is %c\n", nineq);

tenp = pop(my_list);
printf("The Popped Value is %c\n", tenp);
tenq = dequeue(my_list);
printf("The Dequeued Value is %c\n", tenq);

elevenp = pop(my_list);
printf("The Popped Value is %c\n", elevenp);
elevenq = dequeue(my_list);
printf("The Dequeued Value is %c\n", elevenq);

twelvep = pop(my_list);
printf("The Popped Value is %c\n", twelvep);
twelveq = dequeue(my_list);
printf("The Dequeued Value is %c\n", twelveq);

printf("Success Mix\n");



printf("filling list to test clear\n");

push(my_list, 1);
push(my_list, 2);
push(my_list, 3);
push(my_list, 4);
push(my_list, 5);
push(my_list, 6);
push(my_list, 7);
push(my_list, 8);
push(my_list, 9);
push(my_list, 10);
push(my_list, 11);
push(my_list, 12);

enqueue(my_list, 13);
enqueue(my_list, 14);
enqueue(my_list, 15);
enqueue(my_list, 16);
enqueue(my_list, 17);
enqueue(my_list, 18);
enqueue(my_list, 19);
enqueue(my_list, 20);
enqueue(my_list, 21);
enqueue(my_list, 22);
enqueue(my_list, 23);
enqueue(my_list, 24);

*/

printf("Testing Clear\n");

clear_list(my_list);

printf("Clear Success\n\n");



return 0;
}

