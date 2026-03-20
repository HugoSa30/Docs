/*
 * Program: n42.bin
 * Function: FUN_00093e2c
 * Entry: 00093e2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093e2c(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined uVar10;
  
  if (DAT_003f9f27 == '\0') {
    return;
  }
  uVar4 = FUN_00096a18();
  uVar5 = FUN_00096a28();
  cVar3 = DAT_003f9f25;
  cVar2 = DAT_003f9f24;
  bVar1 = *(byte *)((int)_DAT_003fa0ec + 7);
  uVar6 = 0;
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    if (*(char *)(*_DAT_003fa0ec + uVar6 * 0x14) == cVar2) {
      iVar7 = *_DAT_003fa0ec + uVar6 * 0x14;
      if ((((*(char *)(iVar7 + 1) == -1) || (*(char *)(iVar7 + 1) == cVar3)) &&
          (uVar9 = uVar8 | 1, (1 << (uVar4 & 0x3f) & (uint)*(ushort *)(iVar7 + 2)) != 0)) &&
         (uVar9 = uVar8 | 3, (1 << (uVar5 & 0x3f) & *(uint *)(iVar7 + 4)) != 0)) {
        uVar9 = 7;
        (**(code **)(iVar7 + 8))(*(undefined4 *)(iVar7 + 0x10));
        uVar6 = (uint)bVar1;
      }
    }
    uVar6 = uVar6 + 1 & 0xff;
    uVar8 = uVar9;
  } while (uVar6 < bVar1);
  if (uVar9 == 0) {
    iVar7 = 4;
  }
  else {
    if (uVar9 == 1) {
      uVar10 = *(undefined *)((int)_DAT_003fa0ec + 5);
      goto LAB_00093f3c;
    }
    if (uVar9 != 3) {
      return;
    }
    iVar7 = 6;
  }
  uVar10 = *(undefined *)((int)_DAT_003fa0ec + iVar7);
LAB_00093f3c:
  *_DAT_003f9f20 = uVar10;
  FUN_00095b8c(0x14,1);
  return;
}

