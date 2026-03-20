/*
 * Program: n42.bin
 * Function: FUN_000f5f5c
 * Entry: 000f5f5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f5f5c(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  
  iVar4 = _DAT_003fc5b0;
  iVar7 = param_1 * 0x70;
  bVar1 = (&UNK_003fc3f9)[iVar7] == '\0';
  if (bVar1) {
    (*(code *)&SUB_00065b10)(1,param_1);
  }
  uVar14 = (uint)bVar1;
  *(undefined2 *)(&UNK_003fc40c + iVar7) = 0xffff;
  *(undefined2 *)(&UNK_003fc40a + iVar7) = 0xffff;
  (*(code *)&SUB_00065b6c)(bVar1,param_2,param_1);
  sVar12 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = (uint)DAT_003fc5ad;
  if (uVar11 != 0) {
    cVar2 = (&UNK_003fc3f8)[iVar7];
    do {
      (*(code *)&SUB_00065b6c)(uVar14 & 0xff,param_2,param_1);
      uVar6 = *(undefined4 *)(&UNK_003fc40a + iVar7);
      uVar8 = *(undefined4 *)(&UNK_003fc40e + iVar7);
      cVar5 = (*(code *)&SUB_00065ddc)
                        (iVar4,uVar14 & 0xff,&UNK_003fc3f0 + iVar7,cVar2 + '\x01',param_1,param_2);
      if (cVar5 == '\x01') {
        sVar12 = sVar12 + 1;
        uVar9 = uVar14;
      }
      *(undefined4 *)(&UNK_003fc40a + iVar7) = uVar6;
      *(undefined4 *)(&UNK_003fc40e + iVar7) = uVar8;
      uVar14 = uVar14 + 1 & 0xffff;
      uVar14 = uVar14 - (uVar14 / uVar11) * uVar11;
      uVar3 = uVar14 & 0xff;
      (*(code *)&SUB_00065b10)(uVar3,param_1);
      (*(code *)&SUB_00065b6c)(uVar3,param_2,param_1);
      uVar14 = uVar14 + 1 & 0xffff;
      uVar14 = uVar14 - (uVar14 / uVar11) * uVar11;
      (*(code *)&SUB_00065b10)(uVar14 & 0xff,param_1);
      uVar10 = uVar10 + 2 & 0xffff;
    } while (uVar10 < uVar11);
    if (sVar12 == 1) {
      sVar12 = 0;
      uVar14 = (uint)(byte)(&UNK_003fc3f8)[iVar7];
      if (uVar14 == 0) {
        return -2;
      }
      uVar10 = uVar9 + uVar14 & 0xff;
      uVar10 = uVar10 - uVar11 * (uVar10 / uVar11) & 0xff;
      uVar9 = 0;
      sVar13 = 0;
      if (uVar10 != 0) {
        do {
          sVar12 = sVar13 + (ushort)*(byte *)(iVar4 + uVar9);
          uVar9 = uVar9 + 1 & 0xffff;
          sVar13 = sVar12;
        } while (uVar9 < uVar10);
      }
      return (int)(short)(sVar12 + (ushort)(byte)(&UNK_003fc3f0)[iVar7 + uVar14] +
                         (ushort)(byte)(&UNK_003fc44b)[iVar7]);
    }
    if (sVar12 != 0) {
      return (int)(short)-(sVar12 + 1);
    }
  }
  return -1;
}

