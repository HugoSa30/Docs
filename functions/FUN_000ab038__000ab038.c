/*
 * Program: n42.bin
 * Function: FUN_000ab038
 * Entry: 000ab038
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000ab038(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  
  uVar1 = param_4 & 0xffff;
  psVar2 = (short *)(param_1 + ((param_4 >> 0x10) + param_2 * (param_3 >> 0x10)) * 2);
  sVar4 = *psVar2;
  if (uVar1 != 0) {
    sVar4 = sVar4 + (short)(uVar1 * ((int)psVar2[1] - (int)sVar4) >> 0x10);
  }
  if ((param_3 & 0xffff) != 0) {
    sVar3 = psVar2[param_2];
    if (uVar1 != 0) {
      sVar3 = sVar3 + (short)(uVar1 * ((int)(psVar2 + param_2)[1] - (int)sVar3) >> 0x10);
    }
    sVar4 = sVar4 + (short)((param_3 & 0xffff) * ((int)sVar3 - (int)sVar4) >> 0x10);
  }
  return (int)sVar4;
}

