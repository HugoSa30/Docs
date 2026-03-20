/*
 * Program: n42.bin
 * Function: FUN_00099a70
 * Entry: 00099a70
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00099a70(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = 0x1f - LZCOUNT(param_2);
      param_2 = param_2 & ~(1 << (uVar1 & 0x3f));
      cVar2 = (*(code *)&SUB_00069270)(uVar1 & 0xff,param_3 >> (uVar1 & 0x3f) & 1);
      if (cVar2 == '\0') {
        uVar3 = 1;
      }
    } while (param_2 != 0);
  }
  return uVar3;
}

