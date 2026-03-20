/*
 * Program: n42.bin
 * Function: FUN_001b2db8
 * Entry: 001b2db8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b2db8(int param_1,int param_2,byte param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  
  iVar2 = _DAT_003fc5b0;
  if (param_3 < 4) {
    iVar6 = (uint)param_3 * 0x70;
    if ((int)*(uint *)(&UNK_003fc44c + iVar6) < 3) {
      if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
        (**_DAT_003fc914)(0xd,0xd,*(uint *)(&UNK_003fc44c + iVar6) & 0xffff);
      }
      uVar3 = 0;
    }
    else {
      iVar4 = -(param_2 >> 1) - (param_1 % 0x2d0 & 0xffffU);
      if ((short)iVar4 < 0) {
        iVar4 = iVar4 + 0x2d0;
      }
      bVar9 = 0;
      uVar5 = (uint)DAT_003fc5ad;
      do {
        iVar4 = (int)(short)((short)iVar4 + (ushort)bVar9 * 0x168) % 0x2d0;
        iVar7 = ((short)iVar4 * 0x78) / 0x2d0;
        iVar13 = 0;
        uVar12 = 0;
        if (uVar5 != 0) {
          pbVar11 = (byte *)(iVar2 + -1);
          uVar10 = uVar5;
          do {
            pbVar11 = pbVar11 + 1;
            iVar13 = iVar13 + (uint)*pbVar11;
            if ((short)iVar7 < (short)iVar13) {
              uVar12 = uVar5 - uVar10;
              break;
            }
            uVar10 = uVar10 - 1;
            uVar12 = uVar5;
          } while (uVar10 != 0);
        }
        iVar13 = iVar13 - iVar7;
        iVar7 = (uint)bVar9 * 6 + iVar6;
        (&DAT_003fc3e0)[iVar7 + 0x1e] = (char)uVar12;
        cVar1 = (char)iVar13;
        cVar8 = *(char *)(iVar2 + uVar12) - cVar1;
        (&DAT_003fc3e0)[iVar7 + 0x1f] = cVar8;
        (&DAT_003fc3e0)[iVar7 + 0x20] = cVar8 + (char)(param_2 / 6);
        (&DAT_003fc3e0)[iVar7 + 0x21] = cVar1;
        *(short *)(&DAT_003fc3e0 + iVar7 + 0x22) = (short)iVar13 - (short)(param_2 / 6);
        bVar9 = bVar9 + 1;
      } while (bVar9 < 2);
      *(undefined2 *)(&UNK_003fc40c + iVar6) = 0xffff;
      *(undefined2 *)(&UNK_003fc40a + iVar6) = 0xffff;
      uVar3 = 1;
    }
  }
  else {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,0xc,param_3);
    }
    uVar3 = 0;
  }
  return uVar3;
}

