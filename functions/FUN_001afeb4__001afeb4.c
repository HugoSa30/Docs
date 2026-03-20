/*
 * Program: n42.bin
 * Function: FUN_001afeb4
 * Entry: 001afeb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001afeb4(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  if (_DAT_003fc5e0 < 2) {
    (*(code *)&SUB_00fafd30)(0x34,_DAT_003fc5e0,0,0);
    uVar10 = 0;
  }
  else {
    _DAT_003fc5e0 = 2;
    (*(code *)&SUB_00faf214)(*_DAT_003fc5dc,*(undefined *)(_DAT_003fc5dc + 3),0);
    (*(code *)&SUB_00faf214)(*_DAT_003fc5dc,*(undefined *)((int)_DAT_003fc5dc + 0xd),0);
    piVar9 = _DAT_003fc5dc;
    uVar16 = 0;
    iVar11 = _DAT_003fc5dc[2];
    do {
      *(undefined2 *)(iVar11 + uVar16 * 2) = 0;
      uVar16 = uVar16 + 1 & 0xffff;
    } while (uVar16 < 6);
    uVar16 = 0;
    iVar11 = piVar9[1];
    do {
      *(undefined2 *)(iVar11 + uVar16 * 2) = 0;
      puVar12 = _DAT_003fc5d8;
      uVar16 = uVar16 + 1 & 0xffff;
    } while (uVar16 < 6);
    iVar15 = (int)((uint)*_DAT_003fc5d8 * (uint)_DAT_003fc5d8[1]) / 100;
    uVar14 = (uint)_DAT_003fc66a;
    uVar16 = (uint)(iVar15 * 10000) / uVar14 >> 6;
    puVar13 = (ushort *)(iVar11 + 4);
    *puVar13 = *puVar13 & 0xff |
               (ushort)(((((uint)*_DAT_003fc5d8 - iVar15) * 10000) / uVar14 >> 6) << 8);
    uVar5 = (ushort)uVar16;
    *puVar13 = *puVar13 & 0xff00 | uVar5 & 0xff;
    iVar15 = (int)((uint)*puVar12 * (uint)puVar12[2]) / 100;
    uVar3 = (uint)(iVar15 * 10000) / uVar14 >> 6;
    puVar13 = (ushort *)(iVar11 + 6);
    *puVar13 = *puVar13 & 0xff | (ushort)(((((uint)*puVar12 - iVar15) * 10000) / uVar14 >> 6) << 8);
    uVar6 = (ushort)uVar3;
    *puVar13 = *puVar13 & 0xff00 | uVar6 & 0xff;
    iVar15 = (int)((uint)*puVar12 * (uint)puVar12[3]) / 100;
    uVar4 = (uint)(iVar15 * 10000) / uVar14 >> 6;
    puVar13 = (ushort *)(iVar11 + 8);
    *puVar13 = *puVar13 & 0xff | (ushort)(((((uint)*puVar12 - iVar15) * 10000) / uVar14 >> 6) << 8);
    uVar7 = (ushort)uVar4;
    *puVar13 = *puVar13 & 0xff00 | uVar7 & 0xff;
    sVar8 = (short)((uVar16 * 0x32) / 100);
    iVar11 = piVar9[2];
    puVar12 = (ushort *)(iVar11 + 4);
    *puVar12 = *puVar12 & 0xff | (uVar5 + sVar8) * 0x100;
    *puVar12 = *puVar12 & 0xff00 | uVar5 - sVar8 & 0xff;
    puVar12 = (ushort *)(iVar11 + 6);
    *puVar12 = *puVar12 & 0xff | (uVar6 + (short)((uVar3 * 0x21) / 100)) * 0x100;
    *puVar12 = *puVar12 & 0xff00 | uVar6 - (short)((uVar3 * 0x11) / 100) & 0xff;
    puVar12 = (ushort *)(iVar11 + 8);
    *puVar12 = *puVar12 & 0xff | (uVar7 + (short)((uVar4 * 0x19) / 100)) * 0x100;
    *puVar12 = *puVar12 & 0xff00 | uVar7 - (short)((uVar4 * 0x11) / 100) & 0xff;
    DAT_003fc65c = 0;
    DAT_003fc65d = 0;
    DAT_003fc65e = 0;
    _DAT_003fc664 = 0;
    DAT_003fc668 = 0;
    (*(code *)&SUB_00067f70)();
    (*(code *)&SUB_00faf2d0)(*_DAT_003fc5dc,*(undefined *)(_DAT_003fc5dc + 3),0xb);
    (*(code *)&SUB_00faf2d0)(*_DAT_003fc5dc,*(undefined *)((int)_DAT_003fc5dc + 0xd),10);
    piVar9 = _DAT_003fc5dc;
    bVar1 = *(byte *)((int)_DAT_003fc5dc + 0xd);
    iVar11 = *_DAT_003fc5dc;
    *(int *)(iVar11 + 0x18) = 3 << ((uint)bVar1 * 2 & 0x3f);
    bVar2 = *(byte *)(piVar9 + 3);
    *(ushort *)(iVar11 + 0x20) = ~(ushort)(1 << (bVar2 & 0x3f));
    *(ushort *)(iVar11 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
    (*(code *)&SUB_00faf170)(iVar11,(uint)bVar2,1);
    _DAT_003fc5e0 = 3;
    (*(code *)&SUB_00faf214)(*_DAT_003fc5dc,*(undefined *)((int)_DAT_003fc5dc + 0xd),1);
    (*(code *)&SUB_00faf214)(*_DAT_003fc5dc,*(undefined *)(_DAT_003fc5dc + 3),1);
    uVar10 = 1;
  }
  return uVar10;
}

