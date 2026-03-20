/*
 * Program: n42.bin
 * Function: FUN_0019dd7c
 * Entry: 0019dd7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019dd7c(void)

{
  char cVar1;
  
  if (DAT_003fb8a5 == '\0') {
    cVar1 = func_0xff2102d0(10,2,2,0,&twslp_w,0);
    if (cVar1 == '\x02') {
      DAT_003fb8a5 = '\x01';
    }
    else {
      DAT_003fb8a5 = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

