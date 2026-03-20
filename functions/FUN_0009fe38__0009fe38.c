/*
 * Program: n42.bin
 * Function: FUN_0009fe38
 * Entry: 0009fe38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009fe38(void)

{
  char cVar2;
  short sVar1;
  byte *pbVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  byte bVar9;
  short *psVar7;
  undefined *puVar8;
  short sVar11;
  undefined *puVar10;
  int iVar12;
  byte *pbVar13;
  ushort uVar14;
  
  if (DAT_003fa18b == '\0') {
    DAT_003fa18b = 1;
    _DAT_003fa1ba = 0xffff;
    return;
  }
  if (DAT_003fa18b == '\x01') {
    iVar4 = (int)(short)_DAT_003fa1ba;
    puVar5 = (ushort *)(&DAT_00016c7e + iVar4 * 10);
    do {
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 5;
      _DAT_003fa1ba = (ushort)iVar4;
      if ((*puVar5 >> 2 & 1) != 0) {
        if ((int)(short)_DAT_003fa1ba < (int)(uint)DAT_00016cf4) {
          DAT_003fa18b = 2;
          return;
        }
        DAT_003fa18b = 3;
        return;
      }
    } while (iVar4 < (int)(uint)DAT_00016cf4);
    DAT_003fa18b = 3;
    return;
  }
  if (DAT_003fa18b != '\x02') {
    if (DAT_003fa18b == '\x03') {
      DAT_003fa18a = DAT_003fa18a | 2;
      DAT_003fa18b = 0x20;
      _DAT_003fe730 = 0x3aa3;
      return;
    }
    return;
  }
  cVar2 = FUN_0009efbc(_DAT_003fa1ba & 0xff,_DAT_00016cf0);
  if (cVar2 != '\x01') {
    if (cVar2 != -0x80) {
      return;
    }
    uVar6 = (uint)DAT_003fa18a;
    bVar9 = DAT_003fa18a;
    if (((int)uVar6 >> 3 & 1U) == 0) {
      if ((((int)uVar6 >> 4 & 1U) != 0) &&
         ((*(ushort *)(&DAT_00016c7e + (short)_DAT_003fa1ba * 10) >> 5 & 1) == 0)) {
LAB_0009fffc:
        (&DAT_003fe734)[(short)_DAT_003fa1ba] = (&DAT_003fe734)[(short)_DAT_003fa1ba] | 8;
        DAT_003fa18b = 1;
        return;
      }
      iVar4 = (short)_DAT_003fa1ba * 10;
      if ((*(ushort *)(&DAT_00016c7e + iVar4) >> 5 & 1) != 0) {
        cVar2 = FUN_0009edb4((int)(short)_DAT_003fa1ba,
                             _DAT_00016ce8 + (uint)*(ushort *)(iVar4 + 0x16c78));
        bVar9 = (byte)uVar6;
        if (cVar2 != '\0') goto LAB_0009fffc;
      }
    }
    iVar12 = (int)(short)_DAT_003fa1ba;
    iVar4 = iVar12 * 10;
    if ((*(ushort *)(&DAT_00016c7e + iVar4) >> 6 & 1) == 0) {
      DAT_003fa18a = bVar9 | 0x20;
    }
    else {
      FUN_0009eca4(iVar12,_DAT_00016cec + (uint)*(ushort *)(iVar4 + 0x16c7c),
                   _DAT_00016ce8 + (uint)*(ushort *)(iVar4 + 0x16c78));
      (&DAT_003fe734)[iVar12] = (&DAT_003fe734)[iVar12] | 0xc;
    }
    DAT_003fa18b = 1;
    return;
  }
  if (((int)(uint)DAT_003fa18a >> 3 & 1U) == 0) {
    if (((int)(uint)DAT_003fa18a >> 4 & 1U) != 0) {
      if ((*(ushort *)(&DAT_00016c7e + (short)_DAT_003fa1ba * 10) >> 5 & 1) != 0) goto LAB_000a0130;
LAB_000a0164:
      iVar4 = (short)_DAT_003fa1ba * 10;
      if ((*(ushort *)(&DAT_00016c7e + iVar4) & 3) != 0) {
        iVar12 = _DAT_00016ce8 + (uint)*(ushort *)(iVar4 + 0x16c78) +
                 (uint)*(byte *)(iVar4 + 0x16c80);
        psVar7 = (short *)(iVar12 + -2);
        sVar1 = 0;
        sVar11 = 1;
        pbVar13 = (byte *)(iVar12 + -4);
        pbVar3 = (byte *)(_DAT_00016cf0 + (uint)*(byte *)(iVar4 + 0x16c80) + -4);
        do {
          pbVar3 = pbVar3 + 1;
          sVar1 = sVar1 + ((ushort)*pbVar3 - (ushort)pbVar13[1]);
          pbVar13 = pbVar13 + 1;
          *pbVar13 = *pbVar3;
          sVar11 = sVar11 + -1;
        } while (sVar11 != 0);
        *psVar7 = *psVar7 - sVar1;
      }
      goto LAB_000a0260;
    }
    if (((*(ushort *)(&DAT_00016c7e + (short)_DAT_003fa1ba * 10) >> 5 & 1) != 0) &&
       ((char)(&DAT_003fe734)[(short)_DAT_003fa1ba] < '\0')) {
LAB_000a0130:
      cVar2 = FUN_0009edb4((int)(short)_DAT_003fa1ba,
                           _DAT_00016ce8 + (uint)*(ushort *)((short)_DAT_003fa1ba * 10 + 0x16c78));
      if (cVar2 != '\0') goto LAB_000a0164;
    }
  }
  bVar9 = *(byte *)(((int)(short)_DAT_003fa1ba & 0xffU) * 10 + 0x16c80);
  uVar14 = (ushort)bVar9;
  if (bVar9 != 0) {
    puVar10 = (undefined *)(_DAT_00016cf0 + -1);
    puVar8 = (undefined *)
             (_DAT_00016ce8 + (uint)*(ushort *)((short)_DAT_003fa1ba * 10 + 0x16c78) + -1);
    do {
      puVar10 = puVar10 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar10;
      uVar14 = uVar14 - 1;
    } while (0 < (short)uVar14);
  }
LAB_000a0260:
  (&DAT_003fe734)[(short)_DAT_003fa1ba] = (&DAT_003fe734)[(short)_DAT_003fa1ba] | 8;
  DAT_003fa18b = 1;
  return;
}

