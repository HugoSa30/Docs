/*
 * Program: n42.bin
 * Function: FUN_00105ffc
 * Entry: 00105ffc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00105ffc(uint *param_1,uint *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  
  if (0 < param_3) {
    puVar1 = (undefined *)(param_4 + -1);
    do {
      bVar2 = 0;
      uVar3 = 0;
      do {
        FUN_00105f34(param_1);
        FUN_00105f98(param_2);
        if ((*param_2 & 1) != 0) {
          uVar3 = uVar3 * 2 ^ *param_1 & 1;
          bVar2 = bVar2 + 1;
        }
      } while (bVar2 < 8);
      puVar1 = puVar1 + 1;
      *puVar1 = (char)uVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

