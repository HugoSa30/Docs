/*
 * Program: n42.bin
 * Function: FUN_001ade1c
 * Entry: 001ade1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ade1c(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  undefined4 uVar4;
  char cVar7;
  int iVar5;
  uint uVar6;
  uint extraout_r4;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort *puVar16;
  uint in_TBLr;
  int in_TBUr;
  
  if ((int)_DAT_003fc2f8 < 2) {
    (*(code *)&SUB_00fadcf8)(0x38,_DAT_003fc2f8 & 0xffff);
    uVar4 = 0;
  }
  else {
    (*(code *)&SUB_00fad4ac)();
    (*(code *)&SUB_00fb1728)(&DAT_00304400,0xf);
    (*(code *)&SUB_00fb1728)(&DAT_00304000,0xf);
    iVar5 = _DAT_003fc2c0;
    _DAT_003fc32c = 0;
    DAT_003fc33a = 0;
    DAT_003fc33d = 0;
    DAT_003fc33b = 0;
    DAT_003fc33c = 0;
    _DAT_003fc328 = 0;
    DAT_003fc34c = 0;
    _DAT_003fc334 = 1;
    iVar10 = (uint)*(byte *)(_DAT_003fc2c0 + 8) * 10000000;
    func_0xff21fd5c(iVar10 >> 0x1f,iVar10,0,(uint)_DAT_003fc330 << 0xe);
    uVar13 = (ushort)*(byte *)(iVar5 + 9);
    if (*(byte *)(iVar5 + 9) < 6) {
      uVar13 = 6;
    }
    uVar11 = 0xffff;
    uVar14 = 0xffff;
    uVar12 = 0;
    uVar15 = 0;
    cVar7 = (*(code *)&SUB_0006a26c)(1);
    if (cVar7 == '\x01') {
      iVar5 = (*(code *)&SUB_00fb3178)(1);
      iVar10 = (*(code *)&SUB_00fb3178)(0);
      if (iVar10 < iVar5) {
        uVar6 = (*(code *)&SUB_00fb2ba0)(1);
        uVar6 = uVar6 & 0xff;
        if (uVar6 % 0x3c < (param_1 & 0xff)) {
          iVar5 = (param_1 & 0xff) - uVar6 % 0x3c;
          uVar6 = uVar6 + iVar5 & 0xffff;
          uVar13 = uVar13 + (short)iVar5;
        }
        uVar11 = (ushort)(uVar6 % 0x3c);
        uVar15 = (ushort)param_1 & 0xff;
        uVar14 = uVar11 - uVar15;
        uVar12 = (ushort)(uVar6 % 0x78);
        uVar15 = uVar12 - uVar15;
        DAT_003fc336 = 1;
      }
    }
    else {
      DAT_003fc336 = 0;
    }
    if (_DAT_003fc2c8 != 0) {
      (*(code *)&SUB_00faf170)(_DAT_003fc2c8,0,0);
      (*(code *)&SUB_00faf214)(_DAT_003fc2c8,0,0);
      *(undefined2 *)(_DAT_003fc2c8 + 0x20) = 0xfffe;
      iVar5 = _DAT_003fc2cc;
      uVar6 = 0;
      do {
        *(undefined2 *)(iVar5 + uVar6 * 2) = 0;
        iVar10 = _DAT_003fc2d0;
        uVar6 = uVar6 + 1 & 0xffff;
      } while (uVar6 < 8);
      uVar6 = 0;
      do {
        *(undefined2 *)(iVar10 + uVar6 * 2) = 0;
        uVar6 = uVar6 + 1 & 0xffff;
      } while (uVar6 < 8);
      (*(code *)&SUB_0006561c)(&DAT_00304000,0xc,7,0);
      uVar2 = _DAT_003fc332;
      iVar5 = _DAT_003fc2cc;
      puVar8 = (ushort *)(_DAT_003fc2cc + 4);
      *puVar8 = *puVar8 & 0xff80 | _DAT_003fc332 & 0x7f;
      bVar1 = *(byte *)(_DAT_003fc2c0 + 0x11);
      *puVar8 = *puVar8 & 0xff7f | (ushort)((bVar1 & 1) << 7);
      puVar8 = (ushort *)(iVar5 + 6);
      *puVar8 = *puVar8 & 0xff80 | uVar2 & 0x7f;
      *puVar8 = *puVar8 & 0xff7f | (ushort)(((int)(uint)bVar1 >> 1 & 1U) << 7);
      puVar16 = (ushort *)(iVar5 + 8);
      *puVar16 = *puVar16 & 0xff | (ushort)((int)DAT_003fc349 << 8);
      puVar9 = (ushort *)(iVar5 + 10);
      *puVar9 = *puVar9 & 0xff00 | uVar14 & 0xff;
      puVar8 = (ushort *)(iVar5 + 0xc);
      *puVar8 = *puVar8 & 0xff00 | uVar15 & 0xff;
      *puVar9 = *puVar9 & 0x80ff | 0x3c00;
      *puVar8 = *puVar8 & 0x80ff | 0x7800;
      iVar5 = _DAT_003fc2d0;
      *(ushort *)(_DAT_003fc2d0 + 10) =
           *(ushort *)(_DAT_003fc2d0 + 10) & 0x8000 | (ushort)extraout_r4 & 0x7fff;
      *(ushort *)(iVar5 + 8) = *(ushort *)(iVar5 + 8) & 0xff00 | uVar13 & 0xff;
      *puVar16 = *puVar16 & 0xfff0 | 8;
      *puVar16 = *puVar16 & 0xff0f | 0x10;
      _DAT_003fc2f8 = 3;
      _DAT_003fc2fc = 3;
      *(uint *)(_DAT_003fc2c8 + 0x14) = *(uint *)(_DAT_003fc2c8 + 0x14) & 0xfffffffc;
      iVar5 = _DAT_003fc2c8;
      *(undefined4 *)(_DAT_003fc2c8 + 0x18) = 3;
      (*(code *)&SUB_00faf2d0)(iVar5,0,0xe);
    }
    if (_DAT_003fc2d4 != 0) {
      (*(code *)&SUB_00faf170)(_DAT_003fc2d4,0,0);
      (*(code *)&SUB_00faf214)(_DAT_003fc2d4,0,0);
      *(undefined2 *)(_DAT_003fc2d4 + 0x20) = 0xfffe;
      iVar5 = _DAT_003fc2d8;
      uVar6 = 0;
      do {
        *(undefined2 *)(iVar5 + uVar6 * 2) = 0;
        iVar10 = _DAT_003fc2dc;
        uVar6 = uVar6 + 1 & 0xffff;
      } while (uVar6 < 8);
      uVar6 = 0;
      do {
        *(undefined2 *)(iVar10 + uVar6 * 2) = 0;
        uVar6 = uVar6 + 1 & 0xffff;
      } while (uVar6 < 8);
      (*(code *)&SUB_0006561c)(&DAT_00304400,0xc,7,0);
      uVar2 = _DAT_003fc332;
      iVar5 = _DAT_003fc2d8;
      puVar8 = (ushort *)(_DAT_003fc2d8 + 4);
      *puVar8 = *puVar8 & 0xff80 | _DAT_003fc332 & 0x7f;
      bVar1 = *(byte *)(_DAT_003fc2c0 + 0x11);
      *puVar8 = *puVar8 & 0xff7f | (ushort)((bVar1 & 1) << 7);
      puVar8 = (ushort *)(iVar5 + 6);
      *puVar8 = *puVar8 & 0xff80 | uVar2 & 0x7f;
      *puVar8 = *puVar8 & 0xff7f | (ushort)(((int)(uint)bVar1 >> 1 & 1U) << 7);
      puVar9 = (ushort *)(iVar5 + 8);
      *puVar9 = *puVar9 & 0xff | (ushort)((int)DAT_003fc349 << 8);
      puVar8 = (ushort *)(iVar5 + 10);
      *puVar8 = *puVar8 & 0xff00 | uVar14 & 0xff;
      *puVar8 = *puVar8 & 0x80ff | 0x3c00;
      puVar8 = (ushort *)(iVar5 + 0xc);
      *puVar8 = *puVar8 & 0xff00 | uVar15 & 0xff;
      *puVar8 = *puVar8 & 0x80ff | 0x7800;
      iVar5 = _DAT_003fc2dc;
      *(ushort *)(_DAT_003fc2dc + 10) =
           *(ushort *)(_DAT_003fc2dc + 10) & 0x8000 | (ushort)extraout_r4 & 0x7fff;
      *(ushort *)(iVar5 + 8) = *(ushort *)(iVar5 + 8) & 0xff00 | uVar13 & 0xff;
      *puVar9 = *puVar9 & 0xfff0 | 0xb;
      *puVar9 = *puVar9 & 0xff0f | 0x10;
      *(uint *)(_DAT_003fc2d4 + 0x14) = *(uint *)(_DAT_003fc2d4 + 0x14) & 0xfffffffc;
      iVar5 = _DAT_003fc2d4;
      *(undefined4 *)(_DAT_003fc2d4 + 0x18) = 3;
      (*(code *)&SUB_00faf2d0)(iVar5,0,0xe);
    }
    iVar5 = _DAT_003fc2c0;
    (*(code *)&SUB_00064920)(*(undefined *)(_DAT_003fc2c0 + 0xc),1,1);
    (*(code *)&SUB_00064920)(*(undefined *)(iVar5 + 0xd),2,1);
    (*(code *)&SUB_00064920)(*(undefined *)(iVar5 + 0xe),1,0);
    (*(code *)&SUB_00064920)(*(undefined *)(iVar5 + 0xf),2,0);
    uVar3 = DAT_003fc348;
    (*(code *)&SUB_00fada50)(*(byte *)(iVar5 + 10) / 3);
    DAT_003fc348 = uVar3;
    *(ushort *)(_DAT_003fc2e8 + 10) =
         *(ushort *)(_DAT_003fc2e8 + 10) & 0x8000 |
         (ushort)(((extraout_r4 & 0xffff) * 0x8c) / 100) & 0x7fff;
    iVar5 = _DAT_003fc2e4;
    *(ushort *)(_DAT_003fc2e4 + 10) = *(ushort *)(_DAT_003fc2e4 + 10) & 0xff00 | uVar11 & 0xff;
    *(ushort *)(iVar5 + 0xc) = *(ushort *)(iVar5 + 0xc) & 0xff00 | uVar12;
    *(ushort *)(_DAT_003fc2f4 + 8) =
         *(ushort *)(_DAT_003fc2f4 + 8) & 0xff00 | uVar13 - ((ushort)param_1 & 0xff) & 0xff;
    (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc349);
    iVar5 = _DAT_003fc2e0;
    if (_DAT_003fc2e0 != 0) {
      *(undefined2 *)(_DAT_003fc2e0 + 0x20) = 0xfffe;
      (*(code *)&SUB_00faf170)(iVar5,0,1);
    }
    (*(code *)&SUB_00faf214)(_DAT_003fc2ec,0,3);
    (*(code *)&SUB_00faf214)(_DAT_003fc2e0,0,3);
    _DAT_003fc2b8 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
    _DAT_003fc2bc = _DAT_003fc2b8 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
    _DAT_003fc2b8 = _DAT_003fc2b8 >> 0x10;
    uVar4 = 1;
  }
  return uVar4;
}

