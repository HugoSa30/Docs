/*
 * Program: n42.bin
 * Function: FUN_00124120
 * Entry: 00124120
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00124120(int param_1,short *param_2,uint param_3,uint param_4,int param_5)

{
  byte bVar1;
  short sVar3;
  undefined4 uVar2;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  
  bVar1 = *(byte *)(param_4 * 4 + 0xec02);
  if ((bVar1 & 3) == 0) {
    uVar2 = 0;
  }
  else {
    iVar5 = *(int *)(param_4 * 8 + 0xebf8);
    if ((bVar1 & 2) == 0) {
      sVar3 = 0;
    }
    else {
      sVar3 = func_0xff20d6e4(param_4 & 0xffff,iVar5);
      sVar3 = sVar3 - *(short *)(iVar5 + -2);
    }
    *param_2 = sVar3;
    if (param_3 != 0) {
      puVar6 = (undefined *)(iVar5 + param_5 + -1);
      puVar4 = (undefined *)(param_1 + -1);
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        param_3 = param_3 + 0xffff;
      } while ((param_3 & 0xffff) != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

