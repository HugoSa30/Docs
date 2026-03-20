/*
 * Program: n42.bin
 * Function: FUN_00099970
 * Entry: 00099970
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00099970(undefined4 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  char local_20 [8];
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = 0x1fU - LZCOUNT(param_2) & 0xff;
      param_2 = param_2 & ~(1 << (0x1fU - LZCOUNT(param_2) & 0x3f));
      cVar2 = (*(code *)&SUB_00069154)(uVar1,local_20);
      while (cVar2 != '\0') {
        if (local_20[0] == '\0') {
          *param_3 = *param_3 & ~(1 << (uVar1 & 0x3f));
        }
        else {
          *param_3 = *param_3 | 1 << (uVar1 & 0x3f);
        }
        if (param_2 == 0) {
          return uVar3;
        }
        uVar1 = 0x1fU - LZCOUNT(param_2) & 0xff;
        param_2 = param_2 & ~(1 << (0x1fU - LZCOUNT(param_2) & 0x3f));
        cVar2 = (*(code *)&SUB_00069154)(uVar1,local_20);
      }
      uVar3 = 1;
    } while (param_2 != 0);
  }
  return uVar3;
}

