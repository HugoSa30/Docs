/*
 * Program: n42.bin
 * Function: FUN_00090ec4
 * Entry: 00090ec4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00090ec4(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  uVar7 = (uint)param_2[3];
  if (uVar7 < 0xf1) {
    iVar8 = uVar7 * 0xf424;
  }
  else if (uVar7 < 0xff) {
    iVar8 = ((param_2[3] & 0xf) * 0x100 + uVar7) * 0xf424;
  }
  else {
    iVar8 = 0x7fffffff;
  }
  bVar3 = param_2[4];
  bVar4 = param_2[5];
  bVar5 = param_2[6];
  bVar6 = param_2[7];
  *param_1 = (uint)*param_2 * 0x9c4;
  param_1[1] = (uint)bVar1 * 0x9c4;
  param_1[2] = (uint)bVar2 * 0x4e2;
  param_1[3] = iVar8;
  param_1[4] = (uint)bVar3 * 0x4e2;
  param_1[5] = (uint)bVar4 * 0x98968;
  param_1[6] = (uint)bVar5 * 0x4e2;
  param_1[7] = (uint)bVar6 * 0x9c4;
  return;
}

