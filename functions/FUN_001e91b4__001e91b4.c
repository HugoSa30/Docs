/*
 * Program: n42.bin
 * Function: FUN_001e91b4
 * Entry: 001e91b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001e91b4(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((param_3 < 0x20) && (param_4 != 0)) {
    puVar2 = (uint *)(param_2 + param_4 * 4);
    puVar1 = (uint *)(param_1 + param_4 * 4);
    do {
      param_4 = param_4 + -1;
      puVar2 = puVar2 + -1;
      uVar4 = *puVar2;
      puVar1 = puVar1 + -1;
      *puVar1 = uVar3 | uVar4 >> (param_3 & 0x3f);
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar4 << (0x20 - param_3 & 0x3f);
      }
    } while (param_4 != 0);
  }
  return uVar3;
}

