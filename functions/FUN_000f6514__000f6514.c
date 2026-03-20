/*
 * Program: n42.bin
 * Function: FUN_000f6514
 * Entry: 000f6514
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f6514(void)

{
  char cVar4;
  short sVar1;
  char cVar5;
  ushort uVar2;
  undefined2 uVar3;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint local_20;
  
  uVar8 = (uint)DAT_003fc5c8;
  iVar7 = -1;
  iVar6 = -1;
  if ((DAT_003fc5be == 0) && (DAT_003fc5bf == '\0')) {
    return 0;
  }
  uVar10 = 0;
  do {
    if ((((uVar8 & 1) != 0) && (2 < *(int *)(&UNK_003fc44c + uVar10 * 0x70))) &&
       (cVar4 = (*(code *)&SUB_000661d0)(uVar10 & 0xff), cVar4 == '\0')) {
      return 0;
    }
    uVar8 = uVar8 >> 1;
    uVar10 = uVar10 + 1 & 0xffff;
  } while (uVar10 < 4);
  cVar4 = (*(code *)&SUB_00064540)(&local_20);
  if ((cVar4 == '\x01') && (local_20 / 10 < (uint)_DAT_003fc5c4)) {
    local_20 = 10000000 / local_20;
    if (*(code **)(_DAT_003fc914 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc914 + 4))(0xd,3,local_20 & 0xffff,0);
    }
    (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
    DAT_003fc5be = 0;
    DAT_003fc5bf = 0;
    return 0;
  }
  uVar10 = (uint)DAT_003fc5c8;
  uVar11 = 0;
  uVar8 = uVar10;
  do {
    if (((uVar8 & 1) != 0) && (2 < *(int *)(&UNK_003fc44c + uVar11 * 0x70))) {
      sVar1 = (*(code *)&SUB_00065f5c)(uVar11 & 0xff,0);
      iVar6 = (int)sVar1;
      if (-2 < iVar6) break;
    }
    uVar8 = uVar8 >> 1;
    uVar11 = uVar11 + 1 & 0xffff;
  } while (uVar11 < 4);
  uVar8 = 0;
  do {
    if (((uVar10 & 1) != 0) && (2 < *(int *)(&UNK_003fc44c + uVar8 * 0x70))) {
      sVar1 = (*(code *)&SUB_00065f5c)(uVar8 & 0xff,1);
      iVar7 = (int)sVar1;
      if (-2 < iVar7) break;
    }
    uVar10 = uVar10 >> 1;
    uVar8 = uVar8 + 1 & 0xffff;
  } while (uVar8 < 4);
  if ((iVar6 == -1) && (iVar7 == -1)) {
    if (DAT_003fc5c6 != '\x01') {
      (*(code *)&SUB_00fb2c44)(0x4b,0);
      (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
      DAT_003fc5be = 0;
      DAT_003fc5bf = 0;
      return 0;
    }
    (*(code *)&SUB_00fb2c44)(0x4d,0);
    DAT_003fc5c6 = '\0';
  }
  cVar4 = DAT_003fc5bf;
  if (-1 < iVar6) {
    if (iVar7 < 0) goto LAB_000f67f8;
    iVar9 = iVar6 - iVar7;
    if (iVar9 < 0) {
      iVar9 = iVar7 - iVar6;
    }
    if (5 < iVar9) {
      return 1;
    }
    if (-1 < iVar6) goto LAB_000f67f8;
  }
  if (iVar7 < 0) {
    return 1;
  }
LAB_000f67f8:
  uVar10 = (uint)DAT_003fc5be;
  _DAT_003fc5ca = (ushort)iVar6;
  if (-1 < iVar7) {
    _DAT_003fc5ca = (ushort)iVar7;
    uVar11 = uVar8;
  }
  _DAT_003fc5ca = _DAT_003fc5ca + (short)(char)(&UNK_003fc3fd)[uVar11 * 0x70];
  cVar5 = (*(code *)&SUB_00fadb88)();
  if (cVar5 == '\x01') {
    _DAT_003fc5cc = (*(code *)&SUB_00064ab0)();
    (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
    DAT_003fc5bf = 0;
    DAT_003fc5be = 0;
    _DAT_003fc5ce = (*(code *)&SUB_00065f5c)(uVar11 & 0xff,0);
    _DAT_003fc5d0 = (*(code *)&SUB_00065f5c)(uVar11 & 0xff,1);
    (*(code *)&SUB_00fb322c)(_DAT_003fc5cc,_DAT_003fc5ca,cVar4,4);
  }
  else {
    if (DAT_003fc5be == 0) {
      DAT_003fc5c0 = DAT_003fc5ad;
      if (*(code **)(_DAT_003fc914 + 4) != (code *)0x0) {
        (**(code **)(_DAT_003fc914 + 4))(0xd,6,_DAT_003fc5ca,0);
      }
      return 1;
    }
    if ((int)(0x3c - (uint)_DAT_003fc5ca % 0x3c) < (int)(uint)_DAT_003fc5c2) {
      if (*(code **)(_DAT_003fc914 + 4) != (code *)0x0) {
        (**(code **)(_DAT_003fc914 + 4))(0xd,6,(uint)_DAT_003fc5ca,0);
      }
      return 1;
    }
    (*(code *)&SUB_00fad9ec)((int)(short)DAT_003fc5c9);
    DAT_003fc5bf = 0;
    DAT_003fc5be = 0;
    _DAT_003fc5ce = (*(code *)&SUB_00065f5c)(uVar11 & 0xff,0);
    _DAT_003fc5d0 = (*(code *)&SUB_00065f5c)(uVar11 & 0xff,1);
    iVar6 = (*(code *)&SUB_00fb3178)(0);
    if (iVar6 < (int)uVar10) {
      (*(code *)&SUB_00fadc34)(1,_DAT_003fc5ca);
      (*(code *)&SUB_00fadc34)(0,_DAT_003fc5ca);
      uVar2 = (*(code *)&SUB_00064a1c)(1);
      if (_DAT_003fc5ca != uVar2) {
        (*(code *)&SUB_00fadc34)(1,_DAT_003fc5ca);
      }
      uVar2 = (*(code *)&SUB_00064a1c)(0);
      if (_DAT_003fc5ca != uVar2) {
        (*(code *)&SUB_00fadc34)(0,_DAT_003fc5ca);
      }
      cVar4 = (*(code *)&SUB_00065120)(1);
      if (cVar4 == '\x01') {
        (*(code *)&SUB_0006515c)(0);
      }
      (*(code *)&SUB_00fb2c98)(4,0);
      (*(code *)&SUB_00fb2b84)(uVar10);
      _DAT_003fc97c = 0;
      uVar3 = (*(code *)&SUB_00fb3178)(0);
      if (*(code **)(_DAT_003fc914 + 4) != (code *)0x0) {
        (**(code **)(_DAT_003fc914 + 4))(0xd,1,uVar3,4);
      }
    }
  }
  return 1;
}

