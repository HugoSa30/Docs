/*
 * Program: n42.bin
 * Function: FUN_000f7620
 * Entry: 000f7620
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f7620(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int *piVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 local_28;
  
  if ((_DAT_003fc664 == 0) && (DAT_003fc668 == '\0')) {
    DAT_003fc668 = 1;
    if (DAT_003fc65c != '\0') {
      iVar3 = (uint)DAT_003fc65d * 8;
      uVar10 = *(undefined4 *)(&UNK_003fc5e4 + iVar3);
      _DAT_003fc664 = *(int *)(&UNK_003fc5e8 + iVar3);
      uVar11 = DAT_003fc65d + 1;
      DAT_003fc65d = (byte)uVar11;
      if (0xe < (uVar11 & 0xff)) {
        DAT_003fc65d = 0;
      }
      DAT_003fc65c = DAT_003fc65c + -1;
      if (_DAT_003fc664 == 1) {
        local_28._0_2_ = 0x800;
        uVar9 = 1;
      }
      else {
        if (_DAT_003fc664 != 2) {
          _DAT_003fc660 = uVar10;
          DAT_003fc668 = 0;
          return;
        }
        local_28._0_2_ = 0;
        uVar9 = 0;
      }
      DAT_003fc660 = (byte)((uint)uVar10 >> 0x18);
      bVar6 = DAT_003fc660;
      uVar1 = (ushort)DAT_003fc660;
      DAT_003fc661 = (byte)((uint)uVar10 >> 0x10);
      bVar7 = DAT_003fc661;
      uVar2 = (ushort)DAT_003fc661;
      DAT_003fc662 = (byte)((uint)uVar10 >> 8);
      bVar8 = DAT_003fc662;
      uVar4 = (ushort)DAT_003fc662;
      _DAT_003fc660 = uVar10;
      uVar11 = (*(code *)&SUB_000675a4)(bVar6,bVar7,uVar9);
      piVar5 = _DAT_003fc5dc;
      local_28 = CONCAT22(local_28._0_2_ | (uVar1 & 7) << 0xc,
                          uVar2 << 0xd | uVar4 << 4 | (ushort)((uVar11 & 0xff) << 0xc) & 0x1000 |
                          (ushort)((*(int *)(&DAT_0001ff38 + (bVar8 & 0xf) * 4) +
                                    *(int *)(&DAT_0001ff38 + (uint)(bVar8 >> 4) * 4) & 1U) << 3));
      *(undefined4 *)_DAT_003fc5dc[1] = local_28;
      *(int *)(*piVar5 + 0x18) = 2 << ((uint)*(byte *)(piVar5 + 3) * 2 & 0x3f);
    }
    DAT_003fc668 = '\0';
  }
  return;
}

