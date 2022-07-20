#include <stdio.h>

int main(void)
{
  double pi = 3.14159;

  /** 
   * 整数3 少数2 小数点1 6.2 
   * 6 ・・・ 整数+少数+小数点の数
   * 2 ・・・ 少数桁数
   * **/
  printf("%6.2f", pi);

  return 0;
}