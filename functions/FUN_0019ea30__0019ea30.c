/*
 * Program: n42.bin
 * Function: FUN_0019ea30
 * Entry: 0019ea30
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019ea30(void)

{
  char cVar1;
  
  if (DAT_003faa70 == '\0') {
    cVar1 = func_0xff2102d0(4,2,1,0,&anznmax,0);
    if (((cVar1 == '\x02') && (cVar1 = func_0xff2102d0(4,4,2,0,&nmaxvk_w,0), cVar1 == '\x02')) &&
       (cVar1 = func_0xff2102d0(4,6,2,0,&kmstnmax,0), cVar1 == '\x02')) {
      DAT_003faa70 = '\x01';
    }
    else {
      DAT_003faa70 = '\0';
      B_eemrdy = 0;
    }
  }
  return;
}

