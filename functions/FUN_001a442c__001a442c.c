/*
 * Program: n42.bin
 * Function: FUN_001a442c
 * Entry: 001a442c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a442c(int param_1,byte *param_2,byte param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar2 = _DAT_003faf10;
  iVar3 = 0;
  *param_2 = param_3;
  bVar1 = DAT_003fae70;
  bVar4 = 0;
  if (DAT_003fae70 != 0) {
    do {
      if (*(byte *)(iVar2 + 1) == param_4) {
        *(byte *)(param_1 + (uint)param_3) = bVar4;
        param_3 = param_3 + 1;
        iVar3 = 1;
      }
      bVar4 = bVar4 + 1;
      iVar2 = iVar2 + 0x18;
    } while (bVar4 < bVar1);
    if (iVar3 != 0) {
      param_2[1] = param_3;
    }
  }
  return iVar3;
}

