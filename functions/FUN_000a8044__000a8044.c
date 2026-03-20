/*
 * Program: n42.bin
 * Function: FUN_000a8044
 * Entry: 000a8044
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000a8044(int param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  
  iVar1 = param_2 * 0x100;
  sVar4 = (short)param_3;
  if (param_3 < iVar1) {
    uVar3 = (iVar1 - param_3) * param_1;
    sVar2 = (short)(uVar3 >> 0x10);
    if (uVar3 >> 0x10 == 0) {
      sVar2 = 1;
    }
    sVar4 = sVar2 + sVar4;
  }
  else if (iVar1 < param_3) {
    uVar3 = (param_3 + param_2 * -0x100) * param_1;
    sVar2 = (short)(uVar3 >> 0x10);
    if (uVar3 >> 0x10 == 0) {
      sVar2 = 1;
    }
    sVar4 = sVar4 - sVar2;
  }
  return (int)sVar4;
}

