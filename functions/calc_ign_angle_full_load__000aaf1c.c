/*
 * Program: n42.bin
 * Function: calc_ign_angle_full_load
 * Entry: 000aaf1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int calc_ign_angle_full_load(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  uVar1 = param_4 & 0xffff;
  pcVar4 = (char *)(param_1 + (param_4 >> 0x10) + param_2 * (param_3 >> 0x10));
  iVar3 = (int)*pcVar4;
  if (uVar1 != 0) {
    iVar3 = iVar3 + ((int)(uVar1 * (pcVar4[1] - iVar3)) >> 0x10);
  }
  if ((param_3 & 0xffff) != 0) {
    iVar2 = (int)pcVar4[param_2];
    if (uVar1 != 0) {
      iVar2 = iVar2 + ((int)(uVar1 * ((pcVar4 + param_2)[1] - iVar2)) >> 0x10);
    }
    iVar3 = iVar3 + ((int)((param_3 & 0xffff) * (iVar2 - iVar3)) >> 0x10);
  }
  return (int)(char)iVar3;
}

