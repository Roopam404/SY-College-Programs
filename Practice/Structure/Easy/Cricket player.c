#include<stdio.h>
struct Player{char name[10]; int runs;};

int main(){
    struct Player p={"Virat",120};
    printf("%s %d",p.name,p.runs);
}
