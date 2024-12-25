#include <stdio.h>

void a(){
    // #region if
    if(5>1) printf("一条语句");

    if(false){
        int a = 1;
        a++;
    }

    if(1);
    else if(1);
    else;
    // #endregion if
}

void b(){
    // #region switch
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 3: printf("Wednesday\n"); break;
        default: printf("Invalid day\n"); break;
    }

    switch ('a') {
        case 'a': day++;
        case 'b': day--; break;
        case '1':
        case 'q':
        case '8': day++;
    }
    // #endregion switch
}

void c(){
    // #region for

    for (int i = 0; i < 10; ++i) {
        printf("%d",i);
    }

    for(;;) printf("-");

    int a = 1;
    for(;a < 4;) a++;

    // #endregion for
}

void d(){
    // #region while
    int i = 0;
    while (i < 10) i++;

    int a = 1;
    do a++;
    while (a < 5);
    // #endregion whlie
}

void e(){
    // #region goto

    printf("Before goto\n");
    goto jump; // 跳转到 label "jump"

    printf("This will be skipped\n");

    jump:
    printf("After goto\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            if (i == 1 && j == 1) goto end; // 跳出所有循环
    }

    end:
    printf("Exited nested loops\n");

    // #endregion goto
}

// #region return
int getNum(){
    for (int i = 0; i < 100; ++i)
        if(i==3) return i;
    return 0;
}
// #endregion return

void f(){
    // #region break
    for (int i = 0; i < 8; ++i){
        printf("%d",i);
        if(i==3) break;
    }
    // #endregion break
}

void g(){
    // #region continue
    int i = 0;
    while (i<8){
        i++;
        if(i==3) continue;
        printf("%d",i);
    }
    // #endregion continue
}