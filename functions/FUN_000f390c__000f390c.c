/*
 * Program: n42.bin
 * Function: FUN_000f390c
 * Entry: 000f390c
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000f390c(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  
  iVar11 = *param_1;
  if (*(int *)(iVar11 + 0x1c) == 0) {
    cVar9 = '\0';
  }
  else {
    (*(code *)&SUB_0001f9e0)(param_2,param_1[5],(uint)*(byte *)(param_1 + 10) << 1);
    uVar8 = (uint)*(byte *)(iVar11 + 0x21);
    do {
      uVar8 = uVar8 + 1 & 0xff;
      if (*(byte *)((int)param_1 + 0x22) <= uVar8) {
        uVar8 = 0;
      }
      uVar5 = *(uint *)(iVar11 + 0x1c) >> ((uVar8 & 7) << 3);
      *(char *)(iVar11 + 0x20) = (char)uVar5;
    } while ((uVar5 & 0xff) == 0);
    *(char *)(iVar11 + 0x21) = (char)uVar8;
    puVar6 = (ushort *)(param_2 + (uint)*(byte *)(param_1 + 10) * 2);
    uVar7 = 0;
    iVar10 = param_1[6];
    do {
      puVar6[uVar7] = (ushort)*(byte *)(iVar10 + uVar8 * 0x10 + uVar7) << 8;
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 0x10);
    uVar4 = (ushort)(*(uint *)(iVar11 + 0x10) >> (uVar8 << 3 & 0x38)) & 0xff;
    uVar3 = ~(ushort)(*(uint *)(iVar11 + 0x18) >> (uVar8 << 3 & 0x38)) & 0xff;
    uVar12 = *puVar6 | uVar4 | (ushort)uVar5 & 0xff;
    *puVar6 = uVar12;
    uVar2 = ~((ushort)uVar5 & 0xff);
    puVar6[7] = puVar6[7] | uVar4 & uVar2;
    uVar1 = puVar6[0xf];
    puVar6[0xf] = uVar1 | uVar4;
    if (uVar8 < *(byte *)((int)param_1 + 0x23)) {
      puVar6[1] = puVar6[1] | uVar3 & uVar2;
      puVar6[0xe] = puVar6[0xe] | uVar3;
    }
    else {
      puVar6[0xe] = uVar1 | uVar4;
      puVar6[1] = uVar12;
    }
    cVar9 = *(char *)((int)param_1 + 0x25);
  }
  return (int)cVar9;
}

