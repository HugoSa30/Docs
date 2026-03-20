/*
 * Program: n42.bin
 * Function: FUN_00168288
 * Entry: 00168288
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00168288(void)

{
  undefined4 uVar1;
  undefined uVar2;
  byte *pbVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  ushort local_40 [2];
  ushort local_3c;
  ushort local_38;
  ushort local_34 [2];
  undefined4 local_30;
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  
  uVar2 = 0;
  if (((B_desee == '\0') || (B_stend == '\0')) || (B_sa != '\0')) {
    puVar4 = &UNK_003fab53;
    iVar7 = 2;
    do {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    uVar6 = 0;
    pbVar3 = (byte *)0x1c22b;
    pcVar5 = &DAT_001c1d7f;
    uVar2 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      local_40[0] = *(ushort *)(&UNK_003fde62 + (uint)*pbVar3 * 2);
      pcVar5 = pcVar5 + 1;
      if (*pcVar5 == '\0') {
        local_38 = local_40[0] & 0xd0fc | 0x2002;
      }
      else {
        if ((((uint)evz_austot & 1 << (uVar6 & 0x3f)) != 0) && ((local_40[0] & 1) == 0)) {
          (&DAT_003fab54)[uVar6] = 0;
        }
        local_38 = local_40[0];
        if ((byte)(&DAT_003fab54)[uVar6] < DAT_001c1d84) {
          (&DAT_003fab54)[uVar6] = (&DAT_003fab54)[uVar6] + '\x01';
        }
        else {
          local_34[0] = local_40[0];
          local_2c = local_40;
          uVar1 = FUN_00125cc0(&UNK_003fab48 + uVar6 * 3,local_34,*(undefined *)(uVar6 + 0x1c230),2,
                               10);
          local_30._0_2_ = (ushort)((uint)uVar1 >> 0x10);
          local_3c = local_30._0_2_;
          local_38 = local_30._0_2_;
          local_30 = uVar1;
        }
        if ((local_38 & 1) != 0) {
          uVar2 = 1;
        }
      }
      local_40[0] = local_38;
      local_28[0] = local_38;
      local_24 = local_40;
      func_0xff222958(*pbVar3,local_28);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
  }
  B_eev = uVar2;
  return;
}

