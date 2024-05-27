#include <stdio.h>

int main(void){
    int x;
    struct member
    {
        char name[50];
        char pros[100];
        char cons[100];


    };
    struct member Fathi = {"Boda ass Fathi","ass with a good taste of potatoes","very short and has black knees"};
    
    struct member Qodaz = {"Elhandsa (naqash) Qodaz","has a laptop like us","very tall and has black knees"};

    struct member Tarek = {"Tarek calculator","talks memes(mostly)","drug addiction"};

    struct member Shams = {"bitch ass nigga Shams","big boob muscles","he is still alive, which is bad, he is sus also"};

    struct member Onion = {"Onion","white with weird mustache","a slave under his wife (she isn't his wife)"};

    struct member Fares = {"Fares da venom (zengi)","\"none\"","useless(and sad(like always(like who is always sad like that!)))"};

    struct member Ayman = {"Ayman watermelon","goofy ahh ass","goofy ahh ass also"};

    struct member Rostom = {"3zz","nobody saw him yet","maybe he doesn't exist"};

    struct member Sam = {"Seif elHandsa","he is sort of a blessing in everyone's life, keep grateful and call him Batman","none(and he is not suffering of anything like his haters will say)"};

    printf("for Fathi press 1\nfor Qodaz press 2\nfor Tarek press 3\nfor Shams press 4\nfor Onion press 5\nfor Fares press 6\nFor Ayman press 7\nfor Rostom press 8\nfor da most important piece of member press 9\nChoose ur fighter : ");
    scanf("%d",&x);

      switch (x) {
        case 1:
            printf("%s\nPros: %s\nCons: %s\n", Fathi.name, Fathi.pros, Fathi.cons);
            break;
        case 2:
            printf("%s\nPros: %s\nCons: %s\n", Qodaz.name, Qodaz.pros, Qodaz.cons);
            break;
        case 3:
            printf("%s\nPros: %s\nCons: %s\n", Tarek.name, Tarek.pros, Tarek.cons);
            break;
        case 4:
            printf("%s\nPros: %s\nCons: %s\n", Shams.name, Shams.pros, Shams.cons);
            break;
        case 5:
            printf("%s\nPros: %s\nCons: %s\n", Onion.name, Onion.pros, Onion.cons);
            break;
        case 6:
            printf("%s\nPros: %s\nCons: %s\n", Fares.name, Fares.pros, Fares.cons);
            break;
        case 7:
            printf("%s\nPros: %s\nCons: %s\n", Ayman.name, Ayman.pros, Ayman.cons);
            break;
        case 8:
            printf("%s\nPros: %s\nCons: %s\n", Rostom.name, Rostom.pros, Rostom.cons);
            break;
        case 9:
            printf("%s\nPros: %s\nCons: %s\n", Sam.name, Sam.pros, Sam.cons);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}