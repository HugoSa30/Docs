/*
 * Program: n42.bin
 * Function: FUN_0010c4d8
 * Entry: 0010c4d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c4d8(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = FUN_0010c8b4();
  uVar7 = (uint)DAT_003fbd5d;
  bVar1 = *(byte *)((int)_DAT_003fbe34 + 0x1d);
  iVar6 = FUN_0010c864();
  uVar9 = 1 << (uVar5 & 0x3f) | 1 << (uVar7 + bVar1 & 0x3f) |
          iVar6 << (*(byte *)((int)_DAT_003fbe34 + 0x1e) & 0x3f);
  uVar5 = FUN_0010c82c();
  cVar4 = DAT_003fbe1c;
  cVar3 = DAT_003fbe1b;
  sVar2 = _DAT_003fbe16;
  uVar8 = 1 << (uVar5 & 0x3f);
  bVar1 = *(byte *)(_DAT_003fbe34 + 7);
  uVar5 = 0;
  uVar7 = 0;
  do {
    uVar10 = uVar7;
    if (*(char *)(*_DAT_003fbe34 + uVar5 * 0x14) == cVar3) {
      iVar6 = *_DAT_003fbe34 + uVar5 * 0x14;
      if ((((*(char *)(iVar6 + 1) == -1) || ((sVar2 != 0 && (*(char *)(iVar6 + 1) == cVar4)))) &&
          (uVar10 = uVar7 | 1, (uVar9 & *(ushort *)(iVar6 + 2)) == (uVar9 & 0xffff))) &&
         (uVar10 = uVar7 | 3, (uVar8 & *(uint *)(iVar6 + 4)) == uVar8)) {
        uVar10 = 7;
        (**(code **)(iVar6 + 8))(*(undefined4 *)(iVar6 + 0x10),&DAT_003fbe10);
        uVar5 = (uint)bVar1;
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
    uVar7 = uVar10;
  } while (uVar5 < bVar1);
  if (uVar10 != 7) {
    if (DAT_003fbe20 == '\0') {
      if (DAT_003fbe21 == '\0') {
        if (uVar10 == 1) {
          (*(code *)_DAT_003fbe34[3])(_DAT_003fbe34[4],&DAT_003fbe10);
        }
        else if (uVar10 == 3) {
          (*(code *)_DAT_003fbe34[5])(_DAT_003fbe34[6],&DAT_003fbe10);
        }
        else {
          (*(code *)_DAT_003fbe34[1])(_DAT_003fbe34[2],&DAT_003fbe10);
        }
      }
      else {
        DAT_003fbe1a = '\t';
      }
    }
    else {
      DAT_003fbe1a = '\b';
    }
  }
  if ((*(byte *)((int)_DAT_003fbe34 + 0x1f) == DAT_003fbd5d) &&
     ((DAT_003fbe1a == '\x01' || (DAT_003fbe1a == '\x02')))) {
    DAT_003fbe1a = '\x03';
  }
  if ((*(byte *)(_DAT_003fbe34 + 8) == DAT_003fbd5d) && (DAT_003fbe1a == '\x02')) {
    DAT_003fbe1a = '\x03';
  }
  return;
}

