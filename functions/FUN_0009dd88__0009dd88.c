/*
 * Program: n42.bin
 * Function: FUN_0009dd88
 * Entry: 0009dd88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009dd88(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  
  uVar6 = 0;
LAB_0009dda4:
  _DAT_003fa17c = 0;
  _DAT_003fa17e = 0;
  _DAT_003fa182 = 0;
  _DAT_003fa184 = 0;
  uVar5 = *(undefined4 *)(&DAT_003fa13c + param_1 * 0x10);
  uVar8 = 0;
  do {
    iVar7 = (uint)uVar8 * 4;
    bVar1 = *(byte *)(iVar7 + 0xec02);
    if (((bVar1 & 3) != 0) && ((param_2 == 0 || ((bVar1 & 1) == 0)))) {
      if ((bVar1 & 0x40) == 0) {
        if ((DAT_003fa178 == '\0') || ((bVar1 & 4) != 0)) {
          (&UNK_003fa134)[uVar8] = (&UNK_003fa134)[uVar8] | 1;
        }
        else if ((bVar1 & 2) != 0) {
          iVar4 = *(int *)((uint)uVar8 * 8 + 0xebf8);
          sVar3 = FUN_0009d6e4((uint)uVar8,iVar4);
          if (sVar3 != *(short *)(iVar4 + -2)) {
            (&UNK_003fa134)[uVar8] = (&UNK_003fa134)[uVar8] | 9;
            uVar6 = uVar6 + 1;
            if (1 < uVar6) break;
          }
        }
      }
      if (((&UNK_003fa134)[uVar8] & 1) == 0) {
        iVar7 = *(int *)(&UNK_003fa130 + iVar7);
        if (iVar7 == 0) {
          (&UNK_003fa134)[uVar8] = (&UNK_003fa134)[uVar8] | 0x40;
        }
        else {
          sVar3 = FUN_0009d6e4(uVar8,iVar7 + 8);
          if (sVar3 != *(short *)(iVar7 + 6)) {
            (&UNK_003fa134)[uVar8] = (&UNK_003fa134)[uVar8] | 0x10;
          }
        }
      }
      else {
        if ((bVar1 & 0x40) == 0) {
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) != 0) {
              _DAT_003fa182 = _DAT_003fa182 + 1;
            }
          }
          else {
            _DAT_003fa17c = _DAT_003fa17c + 1;
          }
        }
        if (*(int *)(&UNK_003fa130 + iVar7) == 0) {
          (&UNK_003fa134)[uVar8] = (&UNK_003fa134)[uVar8] | 0x40;
        }
        else {
          iVar7 = FUN_0009d8d8(uVar8,uVar5);
          if (iVar7 != 0) {
            FUN_0009dc1c((uint)uVar8,*(undefined4 *)((uint)uVar8 * 8 + 0xebf8),iVar7 + 8);
            goto LAB_0009e090;
          }
        }
        if (((bVar1 & 0x80) == 0) || (0x3f < (bVar1 & 0x40))) {
          uVar2 = (uint)uVar8;
          FUN_0009dcb8(uVar2,*(undefined4 *)(uVar2 * 8 + 0xebf8));
          (&UNK_003fa134)[uVar2] = (&UNK_003fa134)[uVar2] | 2;
          if ((bVar1 & 1) == 0) {
            if ((bVar1 & 2) != 0) {
              _DAT_003fa184 = _DAT_003fa184 + 1;
            }
          }
          else {
            _DAT_003fa17e = _DAT_003fa17e + 1;
          }
        }
        else {
          (&UNK_003fa135)[uVar8] = (&UNK_003fa135)[uVar8] | 1;
        }
      }
    }
LAB_0009e090:
    uVar9 = uVar8 + 1;
    uVar5 = FUN_0009cdd4(uVar8,uVar5);
    uVar8 = uVar9;
    if (uVar9 != 0) {
      DAT_003fa178 = 1;
      return;
    }
  } while( true );
  DAT_003fa178 = '\0';
  goto LAB_0009dda4;
}

