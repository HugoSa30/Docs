/*
 * Program: n42.bin
 * Function: FUN_0019f960
 * Entry: 0019f960
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f960(void)

{
  char cVar1;
  
  if (DAT_003fb8dc == '\0') {
    cVar1 = func_0xff2102d0(4,0x19,2,0,&DAT_003fe978,0);
    if ((cVar1 == '\x02') && (cVar1 = func_0xff2102d0(4,0x18,1,0,&kva_korr,0), cVar1 == '\x02')) {
      DAT_003fb8dc = '\x01';
    }
    else {
      DAT_003fb8dc = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

