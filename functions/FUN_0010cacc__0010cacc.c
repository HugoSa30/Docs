/*
 * Program: n42.bin
 * Function: FUN_0010cacc
 * Entry: 0010cacc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010cacc(undefined4 *param_1,undefined *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  pbVar5 = _DAT_003fba80;
  *param_1 = &DAT_003fba24;
  *param_2 = 0;
  if (DAT_003fff84 == 'U') {
    uVar1 = (**(code **)(_DAT_003fba8c + 0xc))();
  }
  else {
    _DAT_003fba18 = 0;
    bVar4 = 0;
    uVar1 = _DAT_003fba18;
    if (DAT_003fba64 != 0) {
      do {
        uVar2 = FUN_0010ef08(*pbVar5,0x20);
        if ((uVar2 & 9) != 0) {
          DAT_003fba84 = *pbVar5;
          uVar2 = (uint)DAT_003fba84;
          DAT_003fba85 = pbVar5[1];
          DAT_003fba58 = 1;
          _DAT_003fba60 = *(undefined4 **)(pbVar5 + 0xc);
          DAT_005baa14 = **(undefined4 **)(pbVar5 + 0x10);
          DAT_005baa18 = (*(undefined4 **)(pbVar5 + 0x10))[1];
          FUN_0010b178(*_DAT_003fba60,_DAT_003fba60[1],*(undefined *)(_DAT_003fba60 + 2));
          FUN_0010b1bc(pbVar5[2] - 1);
          iVar3 = *(int *)(DAT_005baa10 + 0x10) + uVar2 * 0x18;
          DAT_003fffb2 = *(undefined *)(iVar3 + 0xe);
          iVar3 = FUN_0010b220(*(undefined *)(iVar3 + 0xf));
          if (iVar3 == 0) {
            FUN_0010ef68(uVar2,2);
            return _DAT_003fba18;
          }
          DAT_003fffa3 = DAT_003fbd5e;
          DAT_003fffa4 = DAT_003fbd5d;
          DAT_003fffce = bVar4;
          _8(pbVar5[3]);
          _9(pbVar5[2]);
          *param_2 = 1;
          puVar6 = (undefined4 *)_DAT_003fba60[3];
          _DAT_003fff88 = *puVar6;
          _DAT_003fff8c = puVar6[1];
          _DAT_003fff90 = puVar6[2];
          _DAT_003fff94 = puVar6[3];
          _DAT_003fff98 = puVar6[4];
          (**(code **)(pbVar5 + 8))();
          bVar4 = 0;
          pbVar5 = _DAT_003fba80;
          if (DAT_003fba64 != 0) {
            do {
              if (*pbVar5 != uVar2) {
                FUN_0010ef68((uint)*pbVar5,1);
              }
              pbVar5 = pbVar5 + 0x14;
              bVar4 = bVar4 + 1;
            } while (bVar4 < DAT_003fba64);
          }
          _DAT_003fba18 = 2;
          return 2;
        }
        pbVar5 = pbVar5 + 0x14;
        bVar4 = bVar4 + 1;
        uVar1 = _DAT_003fba18;
      } while (bVar4 < DAT_003fba64);
    }
  }
  return uVar1;
}

