#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
void catchint(int signo){
  printf("SIGIN Receieve %d\n",signo);
}
main(){
  signal(SIGINT,(void *) catchint);
  printf("sleep call #1\n"); sleep(1);
  printf("sleep call #2\n"); sleep(2);
  printf("sleep call #3\n"); sleep(3);
  printf("sleep call #4\n"); sleep(4);
  printf("Exiting");
  exit(0);
}
