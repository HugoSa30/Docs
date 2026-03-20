/*
 * Program: n42.bin
 * Function: FUN_001a1820
 * Entry: 001a1820
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1820(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined uVar7;
  uint uVar8;
  
  iVar4 = (uint)*(byte *)(_DAT_003fbc7c + 2) * 10;
  uVar3 = (uint)*(byte *)(_DAT_003fbc7c + 3);
  iVar6 = *(int *)(&DAT_00fa9cb2 + iVar4) + uVar3 * 0x2b;
  puVar2 = _DAT_003fbc84;
  if ((uint)*(byte *)(_DAT_003fbc7c + 2) <= (uint)DAT_00fa9c80) {
    uVar5 = (uint)DAT_00fa9cae;
    uVar8 = (uint)*(byte *)(_DAT_003fbc7c + 4);
    if ((((int)uVar8 <= (int)(uVar5 - 1)) && (iVar1 = FUN_001a17d8(iVar6,uVar8), iVar1 != 0)) &&
       ((int)uVar3 < (int)(uint)(byte)(&DAT_00fa9cb0)[iVar4])) {
      _DAT_003fbc48 = (byte *)(iVar6 + 0x1c);
      _DAT_003fbc4c = iVar6 + uVar5 + 0x1b;
      if (uVar8 == 0) {
LAB_001a1938:
        DAT_003fbc54 = 0;
      }
      else {
        _DAT_003fbc48 = _DAT_003fbc48 + uVar8;
        DAT_003fbc54 = _DAT_003fbc48[-1];
        if ((uVar5 <= DAT_003fbc54) ||
           (((int)(uVar5 - 2) < (int)(uint)_DAT_003fbc48[-2] && (uVar8 != 1)))) {
          uVar7 = 0x32;
          _DAT_003fbc48 = _DAT_003fbc48 + -1;
          _DAT_003fbc50 = iVar6;
          goto LAB_001a1954;
        }
        if (uVar8 == 0) goto LAB_001a1938;
      }
      _DAT_003fbc50 = iVar6 + uVar8 * 4;
      uVar7 = 0;
      goto LAB_001a1954;
    }
  }
  uVar7 = 0x32;
LAB_001a1954:
  puVar2[1] = uVar7;
  *puVar2 = 0xff;
  return;
}

