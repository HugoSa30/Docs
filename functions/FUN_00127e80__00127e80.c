/*
 * Program: n42.bin
 * Function: FUN_00127e80
 * Entry: 00127e80
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00127e80(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = func_0xff210928(7,0,0);
  uVar2 = func_0xff210928(8,0,0);
  if (((((int)(uVar1 & 0xff) >> 6 & 1U) == 0) && (((int)(uVar1 & 0xff) >> 3 & 1U) != 0)) ||
     ((((int)(uVar2 & 0xff) >> 6 & 1U) == 0 && (((int)(uVar2 & 0xff) >> 3 & 1U) != 0)))) {
    FUN_00127de0();
  }
  else {
    B_read_active = 1;
    DAT_003fb828 = 0;
    bVar3 = func_0xff2102d0(7,2,4,1,&DAT_003fb818,&DAT_005bb730);
    if (0x3f < bVar3) {
      DAT_005bb738 = 0x80;
    }
    DAT_003fb829 = 0;
    bVar3 = func_0xff2102d0(8,2,4,1,&DAT_003fb81e,&DAT_005bb73c);
    if (0x3f < bVar3) {
      DAT_005bb744 = 0x80;
    }
  }
  return;
}

