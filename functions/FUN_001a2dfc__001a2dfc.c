/*
 * Program: n42.bin
 * Function: FUN_001a2dfc
 * Entry: 001a2dfc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a2dfc(void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  bVar1 = false;
  uVar3 = (uint)DAT_00fa9c80;
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      iVar6 = uVar5 * 0xc;
      bVar7 = (&DAT_003fbc24)[iVar6];
      if ((bVar7 & 1) == 1) {
        bVar1 = true;
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < uVar3);
    if (bVar1) {
      if (*(char *)(_DAT_003fbc7c + 2) == '\0') {
        uVar5 = 0;
        do {
          bVar7 = bVar7 & 0x7f;
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < uVar3);
        (&DAT_003fbc28)[iVar6] = 0xff;
        (&DAT_003fbc29)[iVar6] = 0xff;
        (&DAT_003fbc24)[iVar6] = bVar7;
        DAT_003fbc79 = DAT_003fbc79 & 0xfb;
      }
      else {
        uVar5 = 0;
        do {
          iVar6 = uVar5 * 0xc;
          bVar7 = (&DAT_003fbc24)[iVar6];
          if (((bVar7 & 1) == 1) && ((bVar7 & 0x80) != 0x80)) {
            *(undefined2 *)(&DAT_003fbc2a + iVar6) = *(undefined2 *)(uVar5 * 10 + 0xfa9cb6);
            (&DAT_003fbc29)[iVar6] = 0;
            (&DAT_003fbc28)[iVar6] = 1;
            (&DAT_003fbc24)[iVar6] = bVar7 | 0x80;
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < uVar3);
        DAT_003fbc79 = DAT_003fbc79 | 4;
      }
      uVar4 = 0;
      goto LAB_001a2f38;
    }
  }
  uVar4 = 0x22;
LAB_001a2f38:
  puVar2 = _DAT_003fbc84;
  _DAT_003fbc84[1] = uVar4;
  *puVar2 = 0xff;
  return;
}

