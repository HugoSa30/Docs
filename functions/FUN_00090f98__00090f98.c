/*
 * Program: n42.bin
 * Function: FUN_00090f98
 * Entry: 00090f98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090f98(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = _LAB_001c0044[1];
  bVar2 = *param_2;
  uVar7 = (uint)param_2[1];
  if (uVar7 < 0xf1) {
    iVar8 = uVar7 * 0xf424;
  }
  else if (uVar7 < 0xff) {
    iVar8 = ((param_2[1] & 0xf) * 0x100 + uVar7) * 0xf424;
  }
  else {
    iVar8 = 0x7fffffff;
  }
  bVar3 = param_2[2];
  bVar4 = param_2[3];
  bVar5 = param_2[4];
  bVar6 = _LAB_001c0044[7];
  *param_1 = (uint)*_LAB_001c0044 * 0x9c4;
  param_1[1] = (uint)bVar1 * 0x9c4;
  param_1[2] = (uint)bVar2 * 0x4e2;
  param_1[3] = iVar8;
  param_1[4] = (uint)bVar3 * 0x4e2;
  param_1[5] = (uint)bVar4 * 0x98968;
  param_1[6] = (uint)bVar5 * 0x4e2;
  param_1[7] = (uint)bVar6 * 0x9c4;
  return;
}

