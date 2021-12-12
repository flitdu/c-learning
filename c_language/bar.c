#include <stdio.h>
#include <limits.h>

#define DEMO_4

#ifdef DEMO_1
int main(void){
    int x1 = INT_MIN;  //最小值 1000....00
    printf("case1: x=%d, x*2=%d\n", x1, x1*2);
    
    unsigned ux=5;   //有符号数会强制转为无符号数
    printf("case2: ux>-1: %d\n", ux>-1);

    int x2=1;
    int y= INT_MIN;  // y相反数为自己，仍为最小数
    printf("case3: x >y: %d\n", x2>y);
    printf("case3: -x<-y: %d\n", -x2<-y);

    int x3=50000;   //溢出
    printf("case4: x*x: %d\n", x3*x3);

    return 0;
}
#endif

#ifdef DEMO_2
// Demo_2:观察字节序的一个简单例子
typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len){
    size_t i;
    for (i = 0; i < len; i++)
    printf("%p\t0x%.2x\n",start+i, start[i]);
    printf("\n");
}

int main(){
    int a = 0x01234567;
    show_bytes((pointer) &a, sizeof(int));
}
#endif

#ifdef DEMO_3
// Demo_3
#include <assert.h>

int main(){
    assert(+0. == -0.);      // 断言成功
    assert(1.0/+0. == 1.0/-0.); // 断言失败
    return 0;
}

#endif


#ifdef DEMO_4
// Demo_4

int isTmax(int x) {
  int min_val = (1<<31);
  int res = min_val & x;
  return res==0;
}

int main() {
    int a = isTmax(4);
    printf("%d", a);

    return 0;
}
#endif